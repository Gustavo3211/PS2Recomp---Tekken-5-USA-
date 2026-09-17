#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00345548
// Address: 0x345548 - 0x3455c0
void sub_00345548_0x345548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345548_0x345548");
#endif

    switch (ctx->pc) {
        case 0x34556cu: goto label_34556c;
        case 0x345598u: goto label_345598;
        default: break;
    }

    ctx->pc = 0x345548u;

    // 0x345548: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x345548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34554c: 0x3402889e  ori         $v0, $zero, 0x889E
    ctx->pc = 0x34554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34974);
    // 0x345550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345554: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x345554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x345558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34555c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34555Cu;
    {
        const bool branch_taken_0x34555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34555Cu;
        // 0x345560: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34555c) {
            ctx->pc = 0x345590u;
            goto label_345590;
        }
    }
    ctx->pc = 0x345564u;
    // 0x345564: 0xc0d1578  jal         func_3455E0
    ctx->pc = 0x345564u;
    SET_GPR_U32(ctx, 31, 0x34556Cu);
    ctx->pc = 0x3455E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3455E0u, 0x345564u, 0x34556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34556Cu;
label_34556c:
    // 0x34556c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x34556cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x345570: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x345570u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x345574: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x345574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x345578: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x345578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x34557c: 0x24421f68  addiu       $v0, $v0, 0x1F68
    ctx->pc = 0x34557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8040));
    // 0x345580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x345580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345584: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x345584u;
    {
        const bool branch_taken_0x345584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345584u;
        // 0x345588: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345584) {
            ctx->pc = 0x3455B4u;
            goto label_3455b4;
        }
    }
    ctx->pc = 0x34558Cu;
    // 0x34558c: 0x0  nop
    ctx->pc = 0x34558cu;
    // NOP
label_345590:
    // 0x345590: 0xc0d15d6  jal         func_345758
    ctx->pc = 0x345590u;
    SET_GPR_U32(ctx, 31, 0x345598u);
    ctx->pc = 0x345594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345590u;
    // 0x345594: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x345758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345758u, 0x345590u, 0x345598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345598u;
label_345598:
    // 0x345598: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x345598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x34559c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x34559cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3455a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3455a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3455a4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3455a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x3455a8: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x3455a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
    // 0x3455ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3455acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3455b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3455b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3455b4:
    // 0x3455b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3455B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3455B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3455B4u;
        // 0x3455b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3455B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3455BCu;
    // 0x3455bc: 0x0  nop
    ctx->pc = 0x3455bcu;
    // NOP
    ctx->pc = 0x3455c0u;
}

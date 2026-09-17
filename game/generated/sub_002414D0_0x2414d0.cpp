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

// Function: sub_002414D0
// Address: 0x2414d0 - 0x241558
void sub_002414D0_0x2414d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002414D0_0x2414d0");
#endif

    switch (ctx->pc) {
        case 0x241500u: goto label_241500;
        case 0x241514u: goto label_241514;
        case 0x24151cu: goto label_24151c;
        default: break;
    }

    ctx->pc = 0x2414d0u;

    // 0x2414d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2414d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2414d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2414d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2414d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2414d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2414dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2414dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2414e0: 0x3c110016  lui         $s1, 0x16
    ctx->pc = 0x2414e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
    // 0x2414e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2414e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2414e8: 0x26243b20  addiu       $a0, $s1, 0x3B20
    ctx->pc = 0x2414e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15136));
    // 0x2414ec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2414ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x163B2Cu));
    // 0x2414f0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2414F0u;
    {
        const bool branch_taken_0x2414f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2414F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414F0u;
        // 0x2414f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414f0) {
            ctx->pc = 0x241540u;
            goto label_241540;
        }
    }
    ctx->pc = 0x2414F8u;
    // 0x2414f8: 0xc08b8a6  jal         func_22E298
    ctx->pc = 0x2414F8u;
    SET_GPR_U32(ctx, 31, 0x241500u);
    ctx->pc = 0x22E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E298u, 0x2414F8u, 0x241500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241500u;
label_241500:
    // 0x241500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x241500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241504: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x241504u;
    {
        const bool branch_taken_0x241504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241504u;
        // 0x241508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241504) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x24150Cu;
    // 0x24150c: 0xc0af9ee  jal         func_2BE7B8
    ctx->pc = 0x24150Cu;
    SET_GPR_U32(ctx, 31, 0x241514u);
    ctx->pc = 0x241510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24150Cu;
    // 0x241510: 0x86040012  lh          $a0, 0x12($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7B8u, 0x24150Cu, 0x241514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241514u;
label_241514:
    // 0x241514: 0xc08b41e  jal         func_22D078
    ctx->pc = 0x241514u;
    SET_GPR_U32(ctx, 31, 0x24151Cu);
    ctx->pc = 0x241518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241514u;
    // 0x241518: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D078u, 0x241514u, 0x24151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24151Cu;
label_24151c:
    // 0x24151c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241520:
    // 0x241520: 0x2883000d  slti        $v1, $a0, 0xD
    ctx->pc = 0x241520u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x241524: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x241524u;
    {
        const bool branch_taken_0x241524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241524u;
        // 0x241528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241524) {
            ctx->pc = 0x241540u;
            goto label_241540;
        }
    }
    ctx->pc = 0x24152Cu;
    // 0x24152c: 0x26223b20  addiu       $v0, $s1, 0x3B20
    ctx->pc = 0x24152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 15136));
    // 0x241530: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x241530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x241534: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x241534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x241538: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24153c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_241540:
    // 0x241540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x241544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x241548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x241548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24154c: 0x3e00008  jr          $ra
    ctx->pc = 0x24154Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24154Cu;
        // 0x241550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24154Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241554u;
    // 0x241554: 0x0  nop
    ctx->pc = 0x241554u;
    // NOP
    ctx->pc = 0x241558u;
}

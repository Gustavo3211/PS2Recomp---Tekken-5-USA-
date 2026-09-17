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

// Function: sub_002583B0
// Address: 0x2583b0 - 0x258438
void sub_002583B0_0x2583b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002583B0_0x2583b0");
#endif

    switch (ctx->pc) {
        case 0x258404u: goto label_258404;
        case 0x258414u: goto label_258414;
        default: break;
    }

    ctx->pc = 0x2583b0u;

    // 0x2583b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2583b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2583b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2583b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2583b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2583b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2583bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2583bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2583c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2583c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2583c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2583c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2583c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2583c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2583cc: 0x86420012  lh          $v0, 0x12($s2)
    ctx->pc = 0x2583ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x2583d0: 0x865102bc  lh          $s1, 0x2BC($s2)
    ctx->pc = 0x2583d0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x2583d4: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x2583d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2583d8: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2583d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2583dc: 0x11882b  sltu        $s1, $zero, $s1
    ctx->pc = 0x2583dcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2583e0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2583e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2583e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2583e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2583e8: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2583e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2583ec: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2583ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2583f0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2583f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2583f4: 0x24210cc0  addiu       $at, $at, 0xCC0
    ctx->pc = 0x2583f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 3264));
    // 0x2583f8: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x2583f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2583fc: 0xc095cc2  jal         func_257308
    ctx->pc = 0x2583FCu;
    SET_GPR_U32(ctx, 31, 0x258404u);
    ctx->pc = 0x258400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2583FCu;
    // 0x258400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257308u, 0x2583FCu, 0x258404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258404u;
label_258404:
    // 0x258404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258408: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x258408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25840c: 0xc096090  jal         func_258240
    ctx->pc = 0x25840Cu;
    SET_GPR_U32(ctx, 31, 0x258414u);
    ctx->pc = 0x258410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25840Cu;
    // 0x258410: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258240u, 0x25840Cu, 0x258414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258414u;
label_258414:
    // 0x258414: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x258414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x258418: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x258418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x25841c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25841cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x258420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x258420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x258424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258428: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x258428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25842c: 0x3e00008  jr          $ra
    ctx->pc = 0x25842Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25842Cu;
        // 0x258430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25842Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258434u;
    // 0x258434: 0x0  nop
    ctx->pc = 0x258434u;
    // NOP
    ctx->pc = 0x258438u;
}

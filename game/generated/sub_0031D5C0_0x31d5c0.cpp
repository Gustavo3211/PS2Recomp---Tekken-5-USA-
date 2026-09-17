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

// Function: sub_0031D5C0
// Address: 0x31d5c0 - 0x31d640
void sub_0031D5C0_0x31d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D5C0_0x31d5c0");
#endif

    switch (ctx->pc) {
        case 0x31d5dcu: goto label_31d5dc;
        case 0x31d5ecu: goto label_31d5ec;
        case 0x31d600u: goto label_31d600;
        case 0x31d610u: goto label_31d610;
        case 0x31d624u: goto label_31d624;
        default: break;
    }

    ctx->pc = 0x31d5c0u;

    // 0x31d5c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31d5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31d5c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x31d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x31d5c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31d5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d5cc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x31d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x31d5d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31d5d4: 0xc0c7522  jal         func_31D488
    ctx->pc = 0x31D5D4u;
    SET_GPR_U32(ctx, 31, 0x31D5DCu);
    ctx->pc = 0x31D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D5D4u;
    // 0x31d5d8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D488u, 0x31D5D4u, 0x31D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D5DCu;
label_31d5dc:
    // 0x31d5dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d5e0: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x31d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x31d5e4: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x31D5E4u;
    SET_GPR_U32(ctx, 31, 0x31D5ECu);
    ctx->pc = 0x31D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D5E4u;
    // 0x31d5e8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x31D5E4u, 0x31D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D5ECu;
label_31d5ec:
    // 0x31d5ec: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31d5f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d5f4: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x31d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x31d5f8: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x31D5F8u;
    SET_GPR_U32(ctx, 31, 0x31D600u);
    ctx->pc = 0x31D5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D5F8u;
    // 0x31d5fc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x31D5F8u, 0x31D600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D600u;
label_31d600:
    // 0x31d600: 0xae020240  sw          $v0, 0x240($s0)
    ctx->pc = 0x31d600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
    // 0x31d604: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31d604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31d608: 0xc043fa0  jal         func_10FE80
    ctx->pc = 0x31D608u;
    SET_GPR_U32(ctx, 31, 0x31D610u);
    ctx->pc = 0x31D60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D608u;
    // 0x31d60c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE80u, 0x31D608u, 0x31D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D610u;
label_31d610:
    // 0x31d610: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31d610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x31d614: 0x24a5da58  addiu       $a1, $a1, -0x25A8
    ctx->pc = 0x31d614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957656));
    // 0x31d618: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31d618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31d61c: 0xc043c20  jal         func_10F080
    ctx->pc = 0x31D61Cu;
    SET_GPR_U32(ctx, 31, 0x31D624u);
    ctx->pc = 0x31D620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D61Cu;
    // 0x31d620: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F080u, 0x31D61Cu, 0x31D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D624u;
label_31d624:
    // 0x31d624: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x31d624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x31d628: 0xae020248  sw          $v0, 0x248($s0)
    ctx->pc = 0x31d628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 2));
    // 0x31d62c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x31d62cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31d630: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x31d630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d634: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31d634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d638: 0x3e00008  jr          $ra
    ctx->pc = 0x31D638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D638u;
        // 0x31d63c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D640u;
}

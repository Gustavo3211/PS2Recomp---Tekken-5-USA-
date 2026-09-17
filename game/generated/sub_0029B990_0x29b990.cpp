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

// Function: sub_0029B990
// Address: 0x29b990 - 0x29ba68
void sub_0029B990_0x29b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B990_0x29b990");
#endif

    switch (ctx->pc) {
        case 0x29b9c0u: goto label_29b9c0;
        case 0x29b9dcu: goto label_29b9dc;
        case 0x29ba10u: goto label_29ba10;
        case 0x29ba24u: goto label_29ba24;
        default: break;
    }

    ctx->pc = 0x29b990u;

    // 0x29b990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b994: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29b994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29b998: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29b998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29b99c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b9a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29b9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29b9a4: 0x24a5c058  addiu       $a1, $a1, -0x3FA8
    ctx->pc = 0x29b9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951000));
    // 0x29b9a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29b9ac: 0x2413efff  addiu       $s3, $zero, -0x1001
    ctx->pc = 0x29b9acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29b9b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b9b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b9b8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29B9B8u;
    SET_GPR_U32(ctx, 31, 0x29B9C0u);
    ctx->pc = 0x29B9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9B8u;
    // 0x29b9bc: 0x8e300154  lw          $s0, 0x154($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29B9B8u, 0x29B9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B9C0u;
label_29b9c0:
    // 0x29b9c0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29b9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29b9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b9c8: 0x26120018  addiu       $s2, $s0, 0x18
    ctx->pc = 0x29b9c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x29b9cc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x29b9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b9d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29b9d4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29B9D4u;
    SET_GPR_U32(ctx, 31, 0x29B9DCu);
    ctx->pc = 0x29B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9D4u;
    // 0x29b9d8: 0x24a5c068  addiu       $a1, $a1, -0x3F98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29B9D4u, 0x29B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B9DCu;
label_29b9dc:
    // 0x29b9dc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x29b9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b9e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x29b9e4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29b9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b9ec: 0x24a5c078  addiu       $a1, $a1, -0x3F88
    ctx->pc = 0x29b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951032));
    // 0x29b9f0: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x29b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x29b9f4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x29b9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x29b9f8: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x29b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x29b9fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ba00: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29ba04: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x29ba04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x29ba08: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BA08u;
    SET_GPR_U32(ctx, 31, 0x29BA10u);
    ctx->pc = 0x29BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA08u;
    // 0x29ba0c: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BA08u, 0x29BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA10u;
label_29ba10:
    // 0x29ba10: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29ba10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29ba14: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x29ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x29ba18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba1c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BA1Cu;
    SET_GPR_U32(ctx, 31, 0x29BA24u);
    ctx->pc = 0x29BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA1Cu;
    // 0x29ba20: 0x24a5c088  addiu       $a1, $a1, -0x3F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BA1Cu, 0x29BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA24u;
label_29ba24:
    // 0x29ba24: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x29ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29ba28: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x29ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x29ba2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ba2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ba30: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ba34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29ba34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29ba38: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x29ba38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x29ba3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29ba3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ba40: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29ba44: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x29ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29ba48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29ba48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ba4c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29ba50: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x29ba50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x29ba54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29ba54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ba58: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29ba58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29ba5c: 0x3e00008  jr          $ra
    ctx->pc = 0x29BA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BA5Cu;
        // 0x29ba60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BA64u;
    // 0x29ba64: 0x0  nop
    ctx->pc = 0x29ba64u;
    // NOP
    ctx->pc = 0x29ba68u;
}

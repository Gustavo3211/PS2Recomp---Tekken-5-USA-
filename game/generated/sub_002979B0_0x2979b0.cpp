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

// Function: sub_002979B0
// Address: 0x2979b0 - 0x297a48
void sub_002979B0_0x2979b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002979B0_0x2979b0");
#endif

    switch (ctx->pc) {
        case 0x297a2cu: goto label_297a2c;
        default: break;
    }

    ctx->pc = 0x2979b0u;

    // 0x2979b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2979b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2979b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2979b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2979b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2979b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2979bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2979c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2979c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2979c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2979c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2979c8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2979C8u;
    {
        const bool branch_taken_0x2979c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2979CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979C8u;
        // 0x2979cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979c8) {
            ctx->pc = 0x297A34u;
            goto label_297a34;
        }
    }
    ctx->pc = 0x2979D0u;
    // 0x2979d0: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2979d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2979d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2979d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2979d8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2979d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2979dc: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2979dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2979e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2979e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2979e4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2979e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2979e8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2979e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2979ec: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2979ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x2979f0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2979f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2979f4: 0x2484bc90  addiu       $a0, $a0, -0x4370
    ctx->pc = 0x2979f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950032));
    // 0x2979f8: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x2979f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2979fc: 0x34a51400  ori         $a1, $a1, 0x1400
    ctx->pc = 0x2979fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5120);
    // 0x297a00: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x297a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x297a04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x297a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297a08: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x297a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x297a0c: 0x240700f5  addiu       $a3, $zero, 0xF5
    ctx->pc = 0x297a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x297a10: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x297a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x297a14: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x297a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x297a18: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x297a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x297a1c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x297a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x297a20: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x297a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x297a24: 0xc0c82b8  jal         func_320AE0
    ctx->pc = 0x297A24u;
    SET_GPR_U32(ctx, 31, 0x297A2Cu);
    ctx->pc = 0x297A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A24u;
    // 0x297a28: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE0u, 0x297A24u, 0x297A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A2Cu;
label_297a2c:
    // 0x297a2c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x297a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x297a30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297a34:
    // 0x297a34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x297a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x297a38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x297A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A3Cu;
        // 0x297a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297A44u;
    // 0x297a44: 0x0  nop
    ctx->pc = 0x297a44u;
    // NOP
    ctx->pc = 0x297a48u;
}

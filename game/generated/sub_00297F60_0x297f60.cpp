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

// Function: sub_00297F60
// Address: 0x297f60 - 0x297ff8
void sub_00297F60_0x297f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297F60_0x297f60");
#endif

    switch (ctx->pc) {
        case 0x297f90u: goto label_297f90;
        case 0x297fa0u: goto label_297fa0;
        default: break;
    }

    ctx->pc = 0x297f60u;

    // 0x297f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297f64: 0x240500f5  addiu       $a1, $zero, 0xF5
    ctx->pc = 0x297f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x297f68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x297f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x297f74: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x297f74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x297f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f80: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x297f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x297f84: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x297f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x297f88: 0xc0a604a  jal         func_298128
    ctx->pc = 0x297F88u;
    SET_GPR_U32(ctx, 31, 0x297F90u);
    ctx->pc = 0x297F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F88u;
    // 0x297f8c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298128u, 0x297F88u, 0x297F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F90u;
label_297f90:
    // 0x297f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f94: 0x240500f5  addiu       $a1, $zero, 0xF5
    ctx->pc = 0x297f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x297f98: 0xc0a604a  jal         func_298128
    ctx->pc = 0x297F98u;
    SET_GPR_U32(ctx, 31, 0x297FA0u);
    ctx->pc = 0x297F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F98u;
    // 0x297f9c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298128u, 0x297F98u, 0x297FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FA0u;
label_297fa0:
    // 0x297fa0: 0x3c0143cc  lui         $at, 0x43CC
    ctx->pc = 0x297fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17356 << 16));
    // 0x297fa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297fa8: 0x3c0142d0  lui         $at, 0x42D0
    ctx->pc = 0x297fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17104 << 16));
    // 0x297fac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x297facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x297fb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x297fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x297fb4: 0xc7809004  lwc1        $f0, -0x6FFC($gp)
    ctx->pc = 0x297fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297fb8: 0xc7829008  lwc1        $f2, -0x6FF8($gp)
    ctx->pc = 0x297fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297fbc: 0xc783900c  lwc1        $f3, -0x6FF4($gp)
    ctx->pc = 0x297fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x297fc0: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x297fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x297fc4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x297fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x297fc8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x297fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x297fcc: 0xe6240008  swc1        $f4, 0x8($s1)
    ctx->pc = 0x297fccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x297fd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297fd4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x297fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x297fd8: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x297fd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x297fdc: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x297fdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x297fe0: 0xe6040008  swc1        $f4, 0x8($s0)
    ctx->pc = 0x297fe0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x297fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x297fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x297fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297fec: 0x3e00008  jr          $ra
    ctx->pc = 0x297FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FECu;
        // 0x297ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297FF4u;
    // 0x297ff4: 0x0  nop
    ctx->pc = 0x297ff4u;
    // NOP
    ctx->pc = 0x297ff8u;
}

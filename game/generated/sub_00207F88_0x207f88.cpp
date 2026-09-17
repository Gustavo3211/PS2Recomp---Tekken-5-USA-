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

// Function: sub_00207F88
// Address: 0x207f88 - 0x207ff0
void sub_00207F88_0x207f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207F88_0x207f88");
#endif

    switch (ctx->pc) {
        case 0x207fe0u: goto label_207fe0;
        default: break;
    }

    ctx->pc = 0x207f88u;

    // 0x207f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207f8c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x207f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x207f90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x207f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x207f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207f98: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x207f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207f9c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x207f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207fa0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x207fa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x207fa4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x207fa4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x207fa8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x207fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207fac: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x207FACu;
    {
        const bool branch_taken_0x207fac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x207FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FACu;
        // 0x207fb0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fac) {
            ctx->pc = 0x207FCCu;
            goto label_207fcc;
        }
    }
    ctx->pc = 0x207FB4u;
    // 0x207fb4: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x207fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207fb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x207fb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x207fbc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x207fbcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x207fc0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x207fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207fc4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x207FC4u;
    {
        const bool branch_taken_0x207fc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207fc4) {
            ctx->pc = 0x207FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207FC4u;
            // 0x207fc8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207FD8u;
            goto label_207fd8;
        }
    }
    ctx->pc = 0x207FCCu;
label_207fcc:
    // 0x207fcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x207FCCu;
    {
        const bool branch_taken_0x207fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FCCu;
        // 0x207fd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fcc) {
            ctx->pc = 0x207FE4u;
            goto label_207fe4;
        }
    }
    ctx->pc = 0x207FD4u;
    // 0x207fd4: 0x0  nop
    ctx->pc = 0x207fd4u;
    // NOP
label_207fd8:
    // 0x207fd8: 0xc0816c4  jal         func_205B10
    ctx->pc = 0x207FD8u;
    SET_GPR_U32(ctx, 31, 0x207FE0u);
    ctx->pc = 0x207FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207FD8u;
    // 0x207fdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205B10u, 0x207FD8u, 0x207FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FE0u;
label_207fe0:
    // 0x207fe0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x207fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_207fe4:
    // 0x207fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x207FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FE8u;
        // 0x207fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207FF0u;
}

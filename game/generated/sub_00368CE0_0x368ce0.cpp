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

// Function: sub_00368CE0
// Address: 0x368ce0 - 0x368d28
void sub_00368CE0_0x368ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368CE0_0x368ce0");
#endif

    switch (ctx->pc) {
        case 0x368cf0u: goto label_368cf0;
        case 0x368cf8u: goto label_368cf8;
        default: break;
    }

    ctx->pc = 0x368ce0u;

    // 0x368ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x368ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x368ce8: 0xc0da34a  jal         func_368D28
    ctx->pc = 0x368CE8u;
    SET_GPR_U32(ctx, 31, 0x368CF0u);
    ctx->pc = 0x368D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368D28u, 0x368CE8u, 0x368CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CF0u;
label_368cf0:
    // 0x368cf0: 0xc0da4b2  jal         func_3692C8
    ctx->pc = 0x368CF0u;
    SET_GPR_U32(ctx, 31, 0x368CF8u);
    ctx->pc = 0x368CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368CF0u;
    // 0x368cf4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3692C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3692C8u, 0x368CF0u, 0x368CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CF8u;
label_368cf8:
    // 0x368cf8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x368cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x368cfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x368cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x368d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x368d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368d04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x368d04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x368d08: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x368d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x368d0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x368d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x368d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368d14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x368d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x368d18: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x368d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x368d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x368D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368D1Cu;
        // 0x368d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368D24u;
    // 0x368d24: 0x0  nop
    ctx->pc = 0x368d24u;
    // NOP
    ctx->pc = 0x368d28u;
}

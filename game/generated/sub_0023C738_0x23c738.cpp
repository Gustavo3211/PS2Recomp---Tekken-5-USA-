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

// Function: sub_0023C738
// Address: 0x23c738 - 0x23c7e8
void sub_0023C738_0x23c738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C738_0x23c738");
#endif

    switch (ctx->pc) {
        case 0x23c760u: goto label_23c760;
        case 0x23c774u: goto label_23c774;
        case 0x23c7d8u: goto label_23c7d8;
        default: break;
    }

    ctx->pc = 0x23c738u;

    // 0x23c738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c73c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23c740: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23c744: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x23c744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x23c748: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23c748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c74c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x23c74cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x23c750: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23c750u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x23c754: 0x24c60790  addiu       $a2, $a2, 0x790
    ctx->pc = 0x23c754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
    // 0x23c758: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x23C758u;
    SET_GPR_U32(ctx, 31, 0x23C760u);
    ctx->pc = 0x23C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C758u;
    // 0x23c75c: 0x24a50790  addiu       $a1, $a1, 0x790 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x23C758u, 0x23C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C760u;
label_23c760:
    // 0x23c760: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23c760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x23c764: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23c764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23c768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c76c: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x23C76Cu;
    SET_GPR_U32(ctx, 31, 0x23C774u);
    ctx->pc = 0x23C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C76Cu;
    // 0x23c770: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x23C76Cu, 0x23C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C774u;
label_23c774:
    // 0x23c774: 0x240804b0  addiu       $t0, $zero, 0x4B0
    ctx->pc = 0x23c774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x23c778: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x23c778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c77c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x23c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23c780: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x23c780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c784: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23c788: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23c788u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x23c78c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x23c78cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23c790: 0x3c014496  lui         $at, 0x4496
    ctx->pc = 0x23c790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17558 << 16));
    // 0x23c794: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23c794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23c798: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23c798u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x23c79c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23c79cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23c7a0: 0x240604b0  addiu       $a2, $zero, 0x4B0
    ctx->pc = 0x23c7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x23c7a4: 0xc78c8768  lwc1        $f12, -0x7898($gp)
    ctx->pc = 0x23c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c7a8: 0x240704b0  addiu       $a3, $zero, 0x4B0
    ctx->pc = 0x23c7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x23c7ac: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x23c7acu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23c7b0: 0x7048001a  div1        $zero, $v0, $t0
    ctx->pc = 0x23c7b0u;
    { int32_t divisor = GPR_S32(ctx, 8); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x23c7b4: 0x1812  mflo        $v1
    ctx->pc = 0x23c7b4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x23c7b8: 0x70001012  mflo1       $v0
    ctx->pc = 0x23c7b8u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x23c7bc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x23c7bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23c7c0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x23c7c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x23c7c4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x23c7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x23c7c8: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x23c7c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x23c7cc: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x23c7ccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x23c7d0: 0xc08f14e  jal         func_23C538
    ctx->pc = 0x23C7D0u;
    SET_GPR_U32(ctx, 31, 0x23C7D8u);
    ctx->pc = 0x23C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7D0u;
    // 0x23c7d4: 0x46027382  mul.s       $f14, $f14, $f2 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C538u, 0x23C7D0u, 0x23C7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7D8u;
label_23c7d8:
    // 0x23c7d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x23C7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7DCu;
        // 0x23c7e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C7E4u;
    // 0x23c7e4: 0x0  nop
    ctx->pc = 0x23c7e4u;
    // NOP
    ctx->pc = 0x23c7e8u;
}

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

// Function: sub_00217728
// Address: 0x217728 - 0x2177b0
void sub_00217728_0x217728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217728_0x217728");
#endif

    switch (ctx->pc) {
        case 0x217738u: goto label_217738;
        case 0x217764u: goto label_217764;
        case 0x217774u: goto label_217774;
        case 0x21777cu: goto label_21777c;
        case 0x217784u: goto label_217784;
        default: break;
    }

    ctx->pc = 0x217728u;

    // 0x217728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21772c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21772cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217730: 0xc08582a  jal         func_2160A8
    ctx->pc = 0x217730u;
    SET_GPR_U32(ctx, 31, 0x217738u);
    ctx->pc = 0x217734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217730u;
    // 0x217734: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2160A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2160A8u, 0x217730u, 0x217738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217738u;
label_217738:
    // 0x217738: 0x8f839718  lw          $v1, -0x68E8($gp)
    ctx->pc = 0x217738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
    // 0x21773c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x21773cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x217740: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217744: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x217744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x217748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x217748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21774c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21774cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x217750: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x217750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217754: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x217754u;
    {
        const bool branch_taken_0x217754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x217758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217754u;
        // 0x217758: 0xaf839718  sw          $v1, -0x68E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217754) {
            ctx->pc = 0x217784u;
            goto label_217784;
        }
    }
    ctx->pc = 0x21775Cu;
    // 0x21775c: 0xc089662  jal         func_225988
    ctx->pc = 0x21775Cu;
    SET_GPR_U32(ctx, 31, 0x217764u);
    ctx->pc = 0x225988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225988u, 0x21775Cu, 0x217764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217764u;
label_217764:
    // 0x217764: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x217764u;
    {
        const bool branch_taken_0x217764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217764u;
        // 0x217768: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217764) {
            ctx->pc = 0x217788u;
            goto label_217788;
        }
    }
    ctx->pc = 0x21776Cu;
    // 0x21776c: 0xc0a4c9a  jal         func_293268
    ctx->pc = 0x21776Cu;
    SET_GPR_U32(ctx, 31, 0x217774u);
    ctx->pc = 0x293268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293268u, 0x21776Cu, 0x217774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217774u;
label_217774:
    // 0x217774: 0xc086612  jal         func_219848
    ctx->pc = 0x217774u;
    SET_GPR_U32(ctx, 31, 0x21777Cu);
    ctx->pc = 0x217778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217774u;
    // 0x217778: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219848u, 0x217774u, 0x21777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21777Cu;
label_21777c:
    // 0x21777c: 0xc084eb2  jal         func_213AC8
    ctx->pc = 0x21777Cu;
    SET_GPR_U32(ctx, 31, 0x217784u);
    ctx->pc = 0x213AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213AC8u, 0x21777Cu, 0x217784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217784u;
label_217784:
    // 0x217784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217788:
    // 0x217788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21778c: 0x3e00008  jr          $ra
    ctx->pc = 0x21778Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21778Cu;
        // 0x217790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21778Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217794u;
    // 0x217794: 0x0  nop
    ctx->pc = 0x217794u;
    // NOP
    // 0x217798: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x217798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21779c: 0x8c628868  lw          $v0, -0x7798($v1)
    ctx->pc = 0x21779cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8868u));
    // 0x2177a0: 0x3842001a  xori        $v0, $v0, 0x1A
    ctx->pc = 0x2177a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)26);
    // 0x2177a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2177A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2177A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177A4u;
        // 0x2177a8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2177A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2177ACu;
    // 0x2177ac: 0x0  nop
    ctx->pc = 0x2177acu;
    // NOP
    ctx->pc = 0x2177b0u;
}

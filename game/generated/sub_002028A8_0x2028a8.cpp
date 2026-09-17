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

// Function: sub_002028A8
// Address: 0x2028a8 - 0x2029a0
void sub_002028A8_0x2028a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002028A8_0x2028a8");
#endif

    switch (ctx->pc) {
        case 0x2028ecu: goto label_2028ec;
        case 0x202924u: goto label_202924;
        case 0x20296cu: goto label_20296c;
        case 0x20298cu: goto label_20298c;
        default: break;
    }

    ctx->pc = 0x2028a8u;

    // 0x2028a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2028a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2028ac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2028acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2028b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2028b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2028b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2028b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2028b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2028bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2028bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2028c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2028c4: 0x24423d00  addiu       $v0, $v0, 0x3D00
    ctx->pc = 0x2028c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15616));
    // 0x2028c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2028c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028cc: 0x8e070894  lw          $a3, 0x894($s0)
    ctx->pc = 0x2028ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2196)));
    // 0x2028d0: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x2028d0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x463D08u));
    // 0x2028d4: 0x8ce5001c  lw          $a1, 0x1C($a3)
    ctx->pc = 0x2028d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2028d8: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x2028d8u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x463D00u));
    // 0x2028dc: 0x24a50790  addiu       $a1, $a1, 0x790
    ctx->pc = 0x2028dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1936));
    // 0x2028e0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2028e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2028e4: 0xc08491e  jal         func_212478
    ctx->pc = 0x2028E4u;
    SET_GPR_U32(ctx, 31, 0x2028ECu);
    ctx->pc = 0x2028E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2028E4u;
    // 0x2028e8: 0xffa70000  sd          $a3, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2028E4u, 0x2028ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028ECu;
label_2028ec:
    // 0x2028ec: 0x9604007a  lhu         $a0, 0x7A($s0)
    ctx->pc = 0x2028ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x2028f0: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x2028f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2028f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2028f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2028f8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2028f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2028fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2028FCu;
    {
        const bool branch_taken_0x2028fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028FCu;
        // 0x202900: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028fc) {
            ctx->pc = 0x202910u;
            goto label_202910;
        }
    }
    ctx->pc = 0x202904u;
    // 0x202904: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x202904u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202908: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x202908u;
    {
        const bool branch_taken_0x202908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202908u;
        // 0x20290c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202908) {
            ctx->pc = 0x202918u;
            goto label_202918;
        }
    }
    ctx->pc = 0x202910u;
label_202910:
    // 0x202910: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x202910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202914: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x202914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_202918:
    // 0x202918: 0xc7808318  lwc1        $f0, -0x7CE8($gp)
    ctx->pc = 0x202918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20291c: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x20291Cu;
    SET_GPR_U32(ctx, 31, 0x202924u);
    ctx->pc = 0x202920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20291Cu;
    // 0x202920: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x20291Cu, 0x202924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202924u;
label_202924:
    // 0x202924: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x202924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x202928: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x202928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x20292c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20292cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202930: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x202930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x202934: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x202934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x202938: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x202938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x20293c: 0x9606007a  lhu         $a2, 0x7A($s0)
    ctx->pc = 0x20293cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x202940: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x202940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x202944: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202944u;
    {
        const bool branch_taken_0x202944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202944u;
        // 0x202948: 0xc31821  addu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202944) {
            ctx->pc = 0x202958u;
            goto label_202958;
        }
    }
    ctx->pc = 0x20294Cu;
    // 0x20294c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x20294cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202950: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x202950u;
    {
        const bool branch_taken_0x202950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202950u;
        // 0x202954: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202950) {
            ctx->pc = 0x202960u;
            goto label_202960;
        }
    }
    ctx->pc = 0x202958u;
label_202958:
    // 0x202958: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x202958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20295c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20295cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_202960:
    // 0x202960: 0xc780831c  lwc1        $f0, -0x7CE4($gp)
    ctx->pc = 0x202960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202964: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x202964u;
    SET_GPR_U32(ctx, 31, 0x20296Cu);
    ctx->pc = 0x202968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202964u;
    // 0x202968: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x202964u, 0x20296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20296Cu;
label_20296c:
    // 0x20296c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x20296cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x202970: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x202970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202978: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x202978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x20297c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20297cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x202980: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x202980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202984: 0xc0847da  jal         func_211F68
    ctx->pc = 0x202984u;
    SET_GPR_U32(ctx, 31, 0x20298Cu);
    ctx->pc = 0x202988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202984u;
    // 0x202988: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x202984u, 0x20298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20298Cu;
label_20298c:
    // 0x20298c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20298cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202990: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x202990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x202994: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x202994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202998: 0x3e00008  jr          $ra
    ctx->pc = 0x202998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202998u;
        // 0x20299c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2029A0u;
}

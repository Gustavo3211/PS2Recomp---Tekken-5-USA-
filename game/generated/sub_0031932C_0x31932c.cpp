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

// Function: sub_0031932C
// Address: 0x31932c - 0x319448
void sub_0031932C_0x31932c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031932C_0x31932c");
#endif

    switch (ctx->pc) {
        case 0x319370u: goto label_319370;
        case 0x3193fcu: goto label_3193fc;
        case 0x31941cu: goto label_31941c;
        default: break;
    }

    ctx->pc = 0x31932cu;

    // 0x31932c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31932cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x319330: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x319330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x319334: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x319334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x319338: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319338u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31933c: 0xafc40060  sw          $a0, 0x60($fp)
    ctx->pc = 0x31933cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 96), GPR_U32(ctx, 4));
    // 0x319340: 0x8fc20060  lw          $v0, 0x60($fp)
    ctx->pc = 0x319340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x319344: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x319344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x319348: 0x8fc40060  lw          $a0, 0x60($fp)
    ctx->pc = 0x319348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x31934c: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x31934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x319350: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x319350u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x319354: 0x1812  mflo        $v1
    ctx->pc = 0x319354u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x319358: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x319358u;
    {
        const bool branch_taken_0x319358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319358) {
            ctx->pc = 0x31935Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319358u;
            // 0x31935c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x319360u;
            goto label_319360;
        }
    }
    ctx->pc = 0x319360u;
label_319360:
    // 0x319360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x319368: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x319368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x31936c: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x31936cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_319370:
    // 0x319370: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x319370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319374: 0x8fc40060  lw          $a0, 0x60($fp)
    ctx->pc = 0x319374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x319378: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x319378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x31937c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31937cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x319380: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319380u;
    {
        const bool branch_taken_0x319380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319380) {
            ctx->pc = 0x319390u;
            goto label_319390;
        }
    }
    ctx->pc = 0x319388u;
    // 0x319388: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x319388u;
    {
        const bool branch_taken_0x319388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319388) {
            ctx->pc = 0x319430u;
            goto label_319430;
        }
    }
    ctx->pc = 0x319390u;
label_319390:
    // 0x319390: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x319390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319394: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x319394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x319398: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x319398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31939c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31939cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3193a0: 0xe7c00010  swc1        $f0, 0x10($fp)
    ctx->pc = 0x3193a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 16), bits); }
    // 0x3193a4: 0xafc00014  sw          $zero, 0x14($fp)
    ctx->pc = 0x3193a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
    // 0x3193a8: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x3193a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
    // 0x3193ac: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x3193acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
    // 0x3193b0: 0xafc00024  sw          $zero, 0x24($fp)
    ctx->pc = 0x3193b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
    // 0x3193b4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x3193b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3193b8: 0xe7c00028  swc1        $f0, 0x28($fp)
    ctx->pc = 0x3193b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 40), bits); }
    // 0x3193bc: 0x8fc20060  lw          $v0, 0x60($fp)
    ctx->pc = 0x3193bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x3193c0: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x3193c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3193c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3193c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3193c8: 0xe7c0002c  swc1        $f0, 0x2C($fp)
    ctx->pc = 0x3193c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 44), bits); }
    // 0x3193cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3193ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3193d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3193d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3193d4: 0xe7c00030  swc1        $f0, 0x30($fp)
    ctx->pc = 0x3193d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 48), bits); }
    // 0x3193d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3193d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3193dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3193dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3193e0: 0xe7c00034  swc1        $f0, 0x34($fp)
    ctx->pc = 0x3193e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 52), bits); }
    // 0x3193e4: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x3193e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 0));
    // 0x3193e8: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x3193e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 0));
    // 0x3193ec: 0xafc00050  sw          $zero, 0x50($fp)
    ctx->pc = 0x3193ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 0));
    // 0x3193f0: 0x8fc40060  lw          $a0, 0x60($fp)
    ctx->pc = 0x3193f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x3193f4: 0xc0c6512  jal         func_319448
    ctx->pc = 0x3193F4u;
    SET_GPR_U32(ctx, 31, 0x3193FCu);
    ctx->pc = 0x319448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319448u, 0x3193F4u, 0x3193FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193FCu;
label_3193fc:
    // 0x3193fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3193fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319400: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x319400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319404: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x319404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319408: 0xafc20054  sw          $v0, 0x54($fp)
    ctx->pc = 0x319408u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 2));
    // 0x31940c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x31940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x319410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319414: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x319414u;
    SET_GPR_U32(ctx, 31, 0x31941Cu);
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x319414u, 0x31941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31941Cu;
label_31941c:
    // 0x31941c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x31941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319420: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x319420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x319424: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x319424u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x319428: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x319428u;
    {
        const bool branch_taken_0x319428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319428) {
            ctx->pc = 0x319370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319370;
        }
    }
    ctx->pc = 0x319430u;
label_319430:
    // 0x319430: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319430u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319434: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x319434u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x319438: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x319438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31943c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x31943cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x319440: 0x3e00008  jr          $ra
    ctx->pc = 0x319440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319448u;
}

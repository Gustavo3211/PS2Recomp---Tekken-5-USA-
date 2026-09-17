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

// Function: sub_0023D1F8
// Address: 0x23d1f8 - 0x23d350
void sub_0023D1F8_0x23d1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D1F8_0x23d1f8");
#endif

    switch (ctx->pc) {
        case 0x23d2c0u: goto label_23d2c0;
        case 0x23d300u: goto label_23d300;
        case 0x23d320u: goto label_23d320;
        default: break;
    }

    ctx->pc = 0x23d1f8u;

    // 0x23d1f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23d1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23d1fc: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x23d1fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23d200: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23d200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23d204: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23d204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23d20c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23d20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23d210: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x23d210u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23d214: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x23D214u;
    {
        const bool branch_taken_0x23d214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D214u;
        // 0x23d218: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d214) {
            ctx->pc = 0x23D334u;
            goto label_23d334;
        }
    }
    ctx->pc = 0x23D21Cu;
    // 0x23d21c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x23d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23d220: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23d220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x23d224: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23d224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d228: 0x8c63b4f0  lw          $v1, -0x4B10($v1)
    ctx->pc = 0x23d228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948080)));
    // 0x23d22c: 0x600008  jr          $v1
    ctx->pc = 0x23D22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D238u: goto label_23d238;
            case 0x23D258u: goto label_23d258;
            case 0x23D278u: goto label_23d278;
            case 0x23D298u: goto label_23d298;
            case 0x23D2D8u: goto label_23d2d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D22Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23D234u;
    // 0x23d234: 0x0  nop
    ctx->pc = 0x23d234u;
    // NOP
label_23d238:
    // 0x23d238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23d238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23d23c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23d23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d240: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x23d240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x23d244: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x23d244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x23d248: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x23d248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x23d24c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x23D24Cu;
    {
        const bool branch_taken_0x23d24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D24Cu;
        // 0x23d250: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d24c) {
            ctx->pc = 0x23D334u;
            goto label_23d334;
        }
    }
    ctx->pc = 0x23D254u;
    // 0x23d254: 0x0  nop
    ctx->pc = 0x23d254u;
    // NOP
label_23d258:
    // 0x23d258: 0xc4b50018  lwc1        $f21, 0x18($a1)
    ctx->pc = 0x23d258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23d25c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x23d25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x23d260: 0xc4b40010  lwc1        $f20, 0x10($a1)
    ctx->pc = 0x23d260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d264: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x23d264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x23d268: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x23d268u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x23d26c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x23D26Cu;
    {
        const bool branch_taken_0x23d26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D26Cu;
        // 0x23d270: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d26c) {
            ctx->pc = 0x23D318u;
            goto label_23d318;
        }
    }
    ctx->pc = 0x23D274u;
    // 0x23d274: 0x0  nop
    ctx->pc = 0x23d274u;
    // NOP
label_23d278:
    // 0x23d278: 0xc4b50018  lwc1        $f21, 0x18($a1)
    ctx->pc = 0x23d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23d27c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x23d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x23d280: 0xc4b40010  lwc1        $f20, 0x10($a1)
    ctx->pc = 0x23d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d284: 0x4600ab47  neg.s       $f13, $f21
    ctx->pc = 0x23d284u;
    ctx->f[13] = FPU_NEG_S(ctx->f[21]);
    // 0x23d288: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x23d288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x23d28c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x23D28Cu;
    {
        const bool branch_taken_0x23d28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D28Cu;
        // 0x23d290: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d28c) {
            ctx->pc = 0x23D318u;
            goto label_23d318;
        }
    }
    ctx->pc = 0x23D294u;
    // 0x23d294: 0x0  nop
    ctx->pc = 0x23d294u;
    // NOP
label_23d298:
    // 0x23d298: 0xc4b50018  lwc1        $f21, 0x18($a1)
    ctx->pc = 0x23d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23d29c: 0xc4b40010  lwc1        $f20, 0x10($a1)
    ctx->pc = 0x23d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d2a0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x23d2a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x23d2a4: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x23d2a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x23d2a8: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x23d2a8u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x23d2ac: 0x460d0344  c1          0xD0344
    ctx->pc = 0x23d2acu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x23d2b0: 0xc4ac0014  lwc1        $f12, 0x14($a1)
    ctx->pc = 0x23d2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23d2b4: 0x2790c170  addiu       $s0, $gp, -0x3E90
    ctx->pc = 0x23d2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x23d2b8: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x23D2B8u;
    SET_GPR_U32(ctx, 31, 0x23D2C0u);
    ctx->pc = 0x23D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D2B8u;
    // 0x23d2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x23D2B8u, 0x23D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2C0u;
label_23d2c0:
    // 0x23d2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d2c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x23d2c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x23d2c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23d2c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23d2cc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x23d2ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x23d2d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x23D2D0u;
    {
        const bool branch_taken_0x23d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2D0u;
        // 0x23d2d4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2d0) {
            ctx->pc = 0x23D318u;
            goto label_23d318;
        }
    }
    ctx->pc = 0x23D2D8u;
label_23d2d8:
    // 0x23d2d8: 0xc4b50018  lwc1        $f21, 0x18($a1)
    ctx->pc = 0x23d2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23d2dc: 0xc4b40010  lwc1        $f20, 0x10($a1)
    ctx->pc = 0x23d2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d2e0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x23d2e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x23d2e4: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x23d2e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x23d2e8: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x23d2e8u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x23d2ec: 0x460d0344  c1          0xD0344
    ctx->pc = 0x23d2ecu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x23d2f0: 0xc4ac0014  lwc1        $f12, 0x14($a1)
    ctx->pc = 0x23d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23d2f4: 0x2790c170  addiu       $s0, $gp, -0x3E90
    ctx->pc = 0x23d2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x23d2f8: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x23D2F8u;
    SET_GPR_U32(ctx, 31, 0x23D300u);
    ctx->pc = 0x23D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D2F8u;
    // 0x23d2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x23D2F8u, 0x23D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D300u;
label_23d300:
    // 0x23d300: 0xc7818774  lwc1        $f1, -0x788C($gp)
    ctx->pc = 0x23d300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d308: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23d308u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23d30c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x23d30cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23d310: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x23d310u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x23d314: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x23d314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_23d318:
    // 0x23d318: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x23D318u;
    SET_GPR_U32(ctx, 31, 0x23D320u);
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x23D318u, 0x23D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D320u;
label_23d320:
    // 0x23d320: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x23d320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x23d324: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23d324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23d328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23d328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d32c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x23d32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x23d330: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x23d330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_23d334:
    // 0x23d334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d338: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23d338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23d33c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23d33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d340: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x23d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23d344: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x23d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d348: 0x3e00008  jr          $ra
    ctx->pc = 0x23D348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D348u;
        // 0x23d34c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D350u;
}

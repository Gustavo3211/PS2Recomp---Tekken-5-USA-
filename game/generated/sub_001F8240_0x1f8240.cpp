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

// Function: sub_001F8240
// Address: 0x1f8240 - 0x1f85a8
void sub_001F8240_0x1f8240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8240_0x1f8240");
#endif

    switch (ctx->pc) {
        case 0x1f8278u: goto label_1f8278;
        case 0x1f8284u: goto label_1f8284;
        case 0x1f82a0u: goto label_1f82a0;
        case 0x1f82acu: goto label_1f82ac;
        case 0x1f82bcu: goto label_1f82bc;
        case 0x1f82f0u: goto label_1f82f0;
        case 0x1f8478u: goto label_1f8478;
        case 0x1f8488u: goto label_1f8488;
        case 0x1f84a0u: goto label_1f84a0;
        case 0x1f84b4u: goto label_1f84b4;
        case 0x1f8528u: goto label_1f8528;
        case 0x1f8538u: goto label_1f8538;
        case 0x1f8550u: goto label_1f8550;
        case 0x1f8564u: goto label_1f8564;
        default: break;
    }

    ctx->pc = 0x1f8240u;

    // 0x1f8240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f8244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8248: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f8248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f824c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f824cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8250: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f8250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f8254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f8254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f8258: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f8258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f825c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f8260: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x1f8260u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f8264: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x1f8264u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f8268: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1f8268u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f826c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1f826cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f8270: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F8270u;
    SET_GPR_U32(ctx, 31, 0x1F8278u);
    ctx->pc = 0x1F8274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8270u;
    // 0x1f8274: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F8270u, 0x1F8278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8278u;
label_1f8278:
    // 0x1f8278: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f827c: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F827Cu;
    SET_GPR_U32(ctx, 31, 0x1F8284u);
    ctx->pc = 0x1F8280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F827Cu;
    // 0x1f8280: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F827Cu, 0x1F8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8284u;
label_1f8284:
    // 0x1f8284: 0x1a800062  blez        $s4, . + 4 + (0x62 << 2)
    ctx->pc = 0x1F8284u;
    {
        const bool branch_taken_0x1f8284 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1F8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8284u;
        // 0x1f8288: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8284) {
            ctx->pc = 0x1F8410u;
            goto label_1f8410;
        }
    }
    ctx->pc = 0x1F828Cu;
    // 0x1f828c: 0xc79881a8  lwc1        $f24, -0x7E58($gp)
    ctx->pc = 0x1f828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f8290: 0xc79481ac  lwc1        $f20, -0x7E54($gp)
    ctx->pc = 0x1f8290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f8294: 0xc79781b0  lwc1        $f23, -0x7E50($gp)
    ctx->pc = 0x1f8294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f8298: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1f8298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f829c: 0xc79581b4  lwc1        $f21, -0x7E4C($gp)
    ctx->pc = 0x1f829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f82a0:
    // 0x1f82a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f82a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f82a4: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F82A4u;
    SET_GPR_U32(ctx, 31, 0x1F82ACu);
    ctx->pc = 0x1F82A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F82A4u;
    // 0x1f82a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F82A4u, 0x1F82ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F82ACu;
label_1f82ac:
    // 0x1f82ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f82acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f82b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f82b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f82b4: 0xc0917c0  jal         func_245F00
    ctx->pc = 0x1F82B4u;
    SET_GPR_U32(ctx, 31, 0x1F82BCu);
    ctx->pc = 0x1F82B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F82B4u;
    // 0x1f82b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F00u, 0x1F82B4u, 0x1F82BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F82BCu;
label_1f82bc:
    // 0x1f82bc: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1f82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f82c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f82c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f82c4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1f82c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f82c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F82C8u;
    {
        const bool branch_taken_0x1f82c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82C8u;
        // 0x1f82cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82c8) {
            ctx->pc = 0x1F82DCu;
            goto label_1f82dc;
        }
    }
    ctx->pc = 0x1F82D0u;
    // 0x1f82d0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F82D0u;
    {
        const bool branch_taken_0x1f82d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82D0u;
        // 0x1f82d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82d0) {
            ctx->pc = 0x1F82DCu;
            goto label_1f82dc;
        }
    }
    ctx->pc = 0x1F82D8u;
    // 0x1f82d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f82d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f82dc:
    // 0x1f82dc: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x1F82DCu;
    {
        const bool branch_taken_0x1f82dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f82dc) {
            ctx->pc = 0x1F82E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F82DCu;
            // 0x1f82e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8404u;
            goto label_1f8404;
        }
    }
    ctx->pc = 0x1F82E4u;
    // 0x1f82e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f82e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f82e8: 0xc0b160a  jal         func_2C5828
    ctx->pc = 0x1F82E8u;
    SET_GPR_U32(ctx, 31, 0x1F82F0u);
    ctx->pc = 0x1F82ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F82E8u;
    // 0x1f82ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5828u, 0x1F82E8u, 0x1F82F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F82F0u;
label_1f82f0:
    // 0x1f82f0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f82f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f82f4: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1f82f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f82f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F82F8u;
    {
        const bool branch_taken_0x1f82f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82F8u;
        // 0x1f82fc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82f8) {
            ctx->pc = 0x1F8308u;
            goto label_1f8308;
        }
    }
    ctx->pc = 0x1F8300u;
    // 0x1f8300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8300u;
    {
        const bool branch_taken_0x1f8300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8300u;
        // 0x1f8304: 0x46140041  sub.s       $f1, $f0, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8300) {
            ctx->pc = 0x1F8314u;
            goto label_1f8314;
        }
    }
    ctx->pc = 0x1F8308u;
label_1f8308:
    // 0x1f8308: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f8308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f830c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F830Cu;
    {
        const bool branch_taken_0x1f830c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f830c) {
            ctx->pc = 0x1F8310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F830Cu;
            // 0x1f8310: 0x46140040  add.s       $f1, $f0, $f20 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8314u;
            goto label_1f8314;
        }
    }
    ctx->pc = 0x1F8314u;
label_1f8314:
    // 0x1f8314: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f8314u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1f8318: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1f8318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f831c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F831Cu;
    {
        const bool branch_taken_0x1f831c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f831c) {
            ctx->pc = 0x1F8320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F831Cu;
            // 0x1f8320: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8324u;
            goto label_1f8324;
        }
    }
    ctx->pc = 0x1F8324u;
label_1f8324:
    // 0x1f8324: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f8324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f8328: 0xc78281b8  lwc1        $f2, -0x7E48($gp)
    ctx->pc = 0x1f8328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f832c: 0x0  nop
    ctx->pc = 0x1f832cu;
    // NOP
    // 0x1f8330: 0x0  nop
    ctx->pc = 0x1f8330u;
    // NOP
    // 0x1f8334: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1f8334u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1f8338: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f8338u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f833c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f833cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f8340: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1f8340u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f8344: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f8344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8348: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1f8348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f834c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F834Cu;
    {
        const bool branch_taken_0x1f834c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F834Cu;
        // 0x1f8350: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f834c) {
            ctx->pc = 0x1F8360u;
            goto label_1f8360;
        }
    }
    ctx->pc = 0x1F8354u;
    // 0x1f8354: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8354u;
    {
        const bool branch_taken_0x1f8354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8354u;
        // 0x1f8358: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8354) {
            ctx->pc = 0x1F836Cu;
            goto label_1f836c;
        }
    }
    ctx->pc = 0x1F835Cu;
    // 0x1f835c: 0x0  nop
    ctx->pc = 0x1f835cu;
    // NOP
label_1f8360:
    // 0x1f8360: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f8360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8364: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8364u;
    {
        const bool branch_taken_0x1f8364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8364) {
            ctx->pc = 0x1F8368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8364u;
            // 0x1f8368: 0x46020040  add.s       $f1, $f0, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F836Cu;
            goto label_1f836c;
        }
    }
    ctx->pc = 0x1F836Cu;
label_1f836c:
    // 0x1f836c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f836cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1f8370: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1f8370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8374: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8374u;
    {
        const bool branch_taken_0x1f8374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8374) {
            ctx->pc = 0x1F8378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8374u;
            // 0x1f8378: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F837Cu;
            goto label_1f837c;
        }
    }
    ctx->pc = 0x1F837Cu;
label_1f837c:
    // 0x1f837c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f837cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f8380: 0xc78281bc  lwc1        $f2, -0x7E44($gp)
    ctx->pc = 0x1f8380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8384: 0x0  nop
    ctx->pc = 0x1f8384u;
    // NOP
    // 0x1f8388: 0x0  nop
    ctx->pc = 0x1f8388u;
    // NOP
    // 0x1f838c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1f838cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1f8390: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f8390u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f8394: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f8394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f8398: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f8398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f839c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f839cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f83a0: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x1f83a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f83a4: 0xa602007a  sh          $v0, 0x7A($s0)
    ctx->pc = 0x1f83a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f83a8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f83a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f83ac: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1f83acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f83b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F83B0u;
    {
        const bool branch_taken_0x1f83b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83B0u;
        // 0x1f83b4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83b0) {
            ctx->pc = 0x1F83C0u;
            goto label_1f83c0;
        }
    }
    ctx->pc = 0x1F83B8u;
    // 0x1f83b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F83B8u;
    {
        const bool branch_taken_0x1f83b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F83BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83B8u;
        // 0x1f83bc: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83b8) {
            ctx->pc = 0x1F83CCu;
            goto label_1f83cc;
        }
    }
    ctx->pc = 0x1F83C0u;
label_1f83c0:
    // 0x1f83c0: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f83c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f83c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F83C4u;
    {
        const bool branch_taken_0x1f83c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f83c4) {
            ctx->pc = 0x1F83C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F83C4u;
            // 0x1f83c8: 0x46020040  add.s       $f1, $f0, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F83CCu;
            goto label_1f83cc;
        }
    }
    ctx->pc = 0x1F83CCu;
label_1f83cc:
    // 0x1f83cc: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f83ccu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1f83d0: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1f83d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f83d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F83D4u;
    {
        const bool branch_taken_0x1f83d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f83d4) {
            ctx->pc = 0x1F83D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F83D4u;
            // 0x1f83d8: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F83DCu;
            goto label_1f83dc;
        }
    }
    ctx->pc = 0x1F83DCu;
label_1f83dc:
    // 0x1f83dc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f83dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f83e0: 0x0  nop
    ctx->pc = 0x1f83e0u;
    // NOP
    // 0x1f83e4: 0x0  nop
    ctx->pc = 0x1f83e4u;
    // NOP
    // 0x1f83e8: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1f83e8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1f83ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f83ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f83f0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f83f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f83f4: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x1f83f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f83f8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f83f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f83fc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1f83fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1f8400: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8404:
    // 0x1f8404: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x1f8404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1f8408: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1F8408u;
    {
        const bool branch_taken_0x1f8408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8408u;
        // 0x1f840c: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8408) {
            ctx->pc = 0x1F82A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f82a0;
        }
    }
    ctx->pc = 0x1F8410u;
label_1f8410:
    // 0x1f8410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8414: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f8414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8418: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f8418u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f841c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f841cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8420: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f8420u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8424: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f8424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f8428: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x1f8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f842c: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x1f842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f8430: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x1f8430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f8434: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1f8434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f8438: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1f8438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f843c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F843Cu;
        // 0x1f8440: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F843Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8444u;
    // 0x1f8444: 0x0  nop
    ctx->pc = 0x1f8444u;
    // NOP
    // 0x1f8448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f8448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f844c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f844cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f8450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f8450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8454: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f8454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f845c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f845cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f8460: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f8460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8464: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f8464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f8468: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1f8468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f846c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f846cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f8470: 0xc091726  jal         func_245C98
    ctx->pc = 0x1F8470u;
    SET_GPR_U32(ctx, 31, 0x1F8478u);
    ctx->pc = 0x1F8474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8470u;
    // 0x1f8474: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x1F8470u, 0x1F8478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8478u;
label_1f8478:
    // 0x1f8478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f8478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f847c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f847cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f8480: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f8480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8484: 0x0  nop
    ctx->pc = 0x1f8484u;
    // NOP
label_1f8488:
    // 0x1f8488: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1f8488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f848c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F848Cu;
    {
        const bool branch_taken_0x1f848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f848c) {
            ctx->pc = 0x1F8490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F848Cu;
            // 0x1f8490: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F84D4u;
            goto label_1f84d4;
        }
    }
    ctx->pc = 0x1F8494u;
    // 0x1f8494: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8498: 0xc091824  jal         func_246090
    ctx->pc = 0x1F8498u;
    SET_GPR_U32(ctx, 31, 0x1F84A0u);
    ctx->pc = 0x1F849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8498u;
    // 0x1f849c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246090u, 0x1F8498u, 0x1F84A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F84A0u;
label_1f84a0:
    // 0x1f84a0: 0x5453fff9  bnel        $v0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F84A0u;
    {
        const bool branch_taken_0x1f84a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1f84a0) {
            ctx->pc = 0x1F84A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F84A0u;
            // 0x1f84a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8488;
        }
    }
    ctx->pc = 0x1F84A8u;
    // 0x1f84a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f84a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84ac: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F84ACu;
    SET_GPR_U32(ctx, 31, 0x1F84B4u);
    ctx->pc = 0x1F84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F84ACu;
    // 0x1f84b0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F84ACu, 0x1F84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F84B4u;
label_1f84b4:
    // 0x1f84b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f84b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f84b8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f84b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f84bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1f84bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f84c0: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1f84c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1f84c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1f84c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f84c8: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1f84c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1f84cc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f84ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1f84d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f84d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f84d4:
    // 0x1f84d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f84d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f84d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f84dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f84dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f84e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f84e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f84e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f84e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f84e8: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x1f84e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f84ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F84ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84ECu;
        // 0x1f84f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F84ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F84F4u;
    // 0x1f84f4: 0x0  nop
    ctx->pc = 0x1f84f4u;
    // NOP
    // 0x1f84f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f84f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f84fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f84fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f8500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f8500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8504: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1f8504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f8508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f850c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f8510: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f8510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8514: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f8514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f8518: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1f8518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f851c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f8520: 0xc091726  jal         func_245C98
    ctx->pc = 0x1F8520u;
    SET_GPR_U32(ctx, 31, 0x1F8528u);
    ctx->pc = 0x1F8524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8520u;
    // 0x1f8524: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x1F8520u, 0x1F8528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8528u;
label_1f8528:
    // 0x1f8528: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f8528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f852c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f852cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f8530: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f8530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8534: 0x0  nop
    ctx->pc = 0x1f8534u;
    // NOP
label_1f8538:
    // 0x1f8538: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1f8538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f853c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F853Cu;
    {
        const bool branch_taken_0x1f853c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f853c) {
            ctx->pc = 0x1F8540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F853Cu;
            // 0x1f8540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8584u;
            goto label_1f8584;
        }
    }
    ctx->pc = 0x1F8544u;
    // 0x1f8544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8548: 0xc091824  jal         func_246090
    ctx->pc = 0x1F8548u;
    SET_GPR_U32(ctx, 31, 0x1F8550u);
    ctx->pc = 0x1F854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8548u;
    // 0x1f854c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246090u, 0x1F8548u, 0x1F8550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8550u;
label_1f8550:
    // 0x1f8550: 0x5453fff9  bnel        $v0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F8550u;
    {
        const bool branch_taken_0x1f8550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1f8550) {
            ctx->pc = 0x1F8554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8550u;
            // 0x1f8554: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8538;
        }
    }
    ctx->pc = 0x1F8558u;
    // 0x1f8558: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f855c: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F855Cu;
    SET_GPR_U32(ctx, 31, 0x1F8564u);
    ctx->pc = 0x1F8560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F855Cu;
    // 0x1f8560: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F855Cu, 0x1F8564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8564u;
label_1f8564:
    // 0x1f8564: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f8564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8568: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f8568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f856c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1f856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8570: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1f8570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1f8574: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1f8574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8578: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1f8578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1f857c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f857cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1f8580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8584:
    // 0x1f8584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f8588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f858c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f858cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8590: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f8590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f8594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8598: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x1f8598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f859c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F859Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F859Cu;
        // 0x1f85a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F859Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F85A4u;
    // 0x1f85a4: 0x0  nop
    ctx->pc = 0x1f85a4u;
    // NOP
    ctx->pc = 0x1f85a8u;
}

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

// Function: sub_002C42E8
// Address: 0x2c42e8 - 0x2c48a8
void sub_002C42E8_0x2c42e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C42E8_0x2c42e8");
#endif

    switch (ctx->pc) {
        case 0x2c4318u: goto label_2c4318;
        case 0x2c4320u: goto label_2c4320;
        case 0x2c432cu: goto label_2c432c;
        case 0x2c4334u: goto label_2c4334;
        case 0x2c4358u: goto label_2c4358;
        case 0x2c436cu: goto label_2c436c;
        case 0x2c4378u: goto label_2c4378;
        case 0x2c4384u: goto label_2c4384;
        case 0x2c4394u: goto label_2c4394;
        case 0x2c439cu: goto label_2c439c;
        case 0x2c43acu: goto label_2c43ac;
        case 0x2c43e8u: goto label_2c43e8;
        case 0x2c4418u: goto label_2c4418;
        case 0x2c4458u: goto label_2c4458;
        case 0x2c448cu: goto label_2c448c;
        case 0x2c44bcu: goto label_2c44bc;
        case 0x2c44fcu: goto label_2c44fc;
        case 0x2c4538u: goto label_2c4538;
        case 0x2c464cu: goto label_2c464c;
        case 0x2c467cu: goto label_2c467c;
        case 0x2c46bcu: goto label_2c46bc;
        case 0x2c46d8u: goto label_2c46d8;
        case 0x2c46e8u: goto label_2c46e8;
        case 0x2c46f8u: goto label_2c46f8;
        case 0x2c4750u: goto label_2c4750;
        default: break;
    }

    ctx->pc = 0x2c42e8u;

    // 0x2c42e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c42e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c42ec: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2c42ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2c42f0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2c42f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2c42f4: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x2c42f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2c42f8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2c42f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c42fc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c42fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c4300: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2c4300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2c4304: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2c4304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2c4308: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2c4308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2c430c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2c430cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2c4310: 0xc09d8d4  jal         func_276350
    ctx->pc = 0x2C4310u;
    SET_GPR_U32(ctx, 31, 0x2C4318u);
    ctx->pc = 0x2C4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4310u;
    // 0x2c4314: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x276350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276350u, 0x2C4310u, 0x2C4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4318u;
label_2c4318:
    // 0x2c4318: 0xc09d8d2  jal         func_276348
    ctx->pc = 0x2C4318u;
    SET_GPR_U32(ctx, 31, 0x2C4320u);
    ctx->pc = 0x2C431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4318u;
    // 0x2c431c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276348u, 0x2C4318u, 0x2C4320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4320u;
label_2c4320:
    // 0x2c4320: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c4320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4324: 0xc09d480  jal         func_275200
    ctx->pc = 0x2C4324u;
    SET_GPR_U32(ctx, 31, 0x2C432Cu);
    ctx->pc = 0x2C4328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4324u;
    // 0x2c4328: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x2C4324u, 0x2C432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C432Cu;
label_2c432c:
    // 0x2c432c: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x2C432Cu;
    SET_GPR_U32(ctx, 31, 0x2C4334u);
    ctx->pc = 0x2C4330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C432Cu;
    // 0x2c4330: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x2C432Cu, 0x2C4334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4334u;
label_2c4334:
    // 0x2c4334: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c4334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c4338: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c433c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c433cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4340: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c4340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c4344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4348: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2c4348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2c434c: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x2c434cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2c4350: 0xc08eaea  jal         func_23ABA8
    ctx->pc = 0x2C4350u;
    SET_GPR_U32(ctx, 31, 0x2C4358u);
    ctx->pc = 0x2C4354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4350u;
    // 0x2c4354: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABA8u, 0x2C4350u, 0x2C4358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4358u;
label_2c4358:
    // 0x2c4358: 0x144000b9  bnez        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2C4358u;
    {
        const bool branch_taken_0x2c4358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4358) {
            ctx->pc = 0x2C4640u;
            goto label_2c4640;
        }
    }
    ctx->pc = 0x2C4360u;
    // 0x2c4360: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c4360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4364: 0xc08c6a6  jal         func_231A98
    ctx->pc = 0x2C4364u;
    SET_GPR_U32(ctx, 31, 0x2C436Cu);
    ctx->pc = 0x2C4368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4364u;
    // 0x2c4368: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A98u, 0x2C4364u, 0x2C436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C436Cu;
label_2c436c:
    // 0x2c436c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2c436cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c4370: 0xc08c6ac  jal         func_231AB0
    ctx->pc = 0x2C4370u;
    SET_GPR_U32(ctx, 31, 0x2C4378u);
    ctx->pc = 0x2C4374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4370u;
    // 0x2c4374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AB0u, 0x2C4370u, 0x2C4378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4378u;
label_2c4378:
    // 0x2c4378: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c4378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c437c: 0xc084814  jal         func_212050
    ctx->pc = 0x2C437Cu;
    SET_GPR_U32(ctx, 31, 0x2C4384u);
    ctx->pc = 0x2C4380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C437Cu;
    // 0x2c4380: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2C437Cu, 0x2C4384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4384u;
label_2c4384:
    // 0x2c4384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4388: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c4388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c438c: 0xc084814  jal         func_212050
    ctx->pc = 0x2C438Cu;
    SET_GPR_U32(ctx, 31, 0x2C4394u);
    ctx->pc = 0x2C4390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C438Cu;
    // 0x2c4390: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2C438Cu, 0x2C4394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4394u;
label_2c4394:
    // 0x2c4394: 0xc07c4c4  jal         func_1F1310
    ctx->pc = 0x2C4394u;
    SET_GPR_U32(ctx, 31, 0x2C439Cu);
    ctx->pc = 0x2C4398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4394u;
    // 0x2c4398: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1310u, 0x2C4394u, 0x2C439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C439Cu;
label_2c439c:
    // 0x2c439c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C439Cu;
    {
        const bool branch_taken_0x2c439c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c439c) {
            ctx->pc = 0x2C43A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C439Cu;
            // 0x2c43a0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C43B8u;
            goto label_2c43b8;
        }
    }
    ctx->pc = 0x2C43A4u;
    // 0x2c43a4: 0xc08c696  jal         func_231A58
    ctx->pc = 0x2C43A4u;
    SET_GPR_U32(ctx, 31, 0x2C43ACu);
    ctx->pc = 0x231A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A58u, 0x2C43A4u, 0x2C43ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43ACu;
label_2c43ac:
    // 0x2c43ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C43ACu;
    {
        const bool branch_taken_0x2c43ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43ACu;
        // 0x2c43b0: 0x8f82bafc  lw          $v0, -0x4504($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43ac) {
            ctx->pc = 0x2C43BCu;
            goto label_2c43bc;
        }
    }
    ctx->pc = 0x2C43B4u;
    // 0x2c43b4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2c43b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c43b8:
    // 0x2c43b8: 0x8f82bafc  lw          $v0, -0x4504($gp)
    ctx->pc = 0x2c43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949628)));
label_2c43bc:
    // 0x2c43bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C43BCu;
    {
        const bool branch_taken_0x2c43bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43BCu;
        // 0x2c43c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43bc) {
            ctx->pc = 0x2C43CCu;
            goto label_2c43cc;
        }
    }
    ctx->pc = 0x2C43C4u;
    // 0x2c43c4: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C43C4u;
    {
        const bool branch_taken_0x2c43c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c43c4) {
            ctx->pc = 0x2C43D0u;
            goto label_2c43d0;
        }
    }
    ctx->pc = 0x2C43CCu;
label_2c43cc:
    // 0x2c43cc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c43ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c43d0:
    // 0x2c43d0: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x2c43d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c43d4: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2C43D4u;
    {
        const bool branch_taken_0x2c43d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c43d4) {
            ctx->pc = 0x2C4480u;
            goto label_2c4480;
        }
    }
    ctx->pc = 0x2C43DCu;
    // 0x2c43dc: 0xc7949304  lwc1        $f20, -0x6CFC($gp)
    ctx->pc = 0x2c43dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c43e0: 0xc08c19c  jal         func_230670
    ctx->pc = 0x2C43E0u;
    SET_GPR_U32(ctx, 31, 0x2C43E8u);
    ctx->pc = 0x2C43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C43E0u;
    // 0x2c43e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230670u, 0x2C43E0u, 0x2C43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C43E8u;
label_2c43e8:
    // 0x2c43e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c43e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43ec: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2c43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2c43f0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2c43f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2c43f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C43F4u;
    {
        const bool branch_taken_0x2c43f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43F4u;
        // 0x2c43f8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43f4) {
            ctx->pc = 0x2C442Cu;
            goto label_2c442c;
        }
    }
    ctx->pc = 0x2C43FCu;
    // 0x2c43fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c43fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c4400: 0x8c4388d0  lw          $v1, -0x7730($v0)
    ctx->pc = 0x2c4400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x2c4404: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c4404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4408: 0x8c620894  lw          $v0, 0x894($v1)
    ctx->pc = 0x2c4408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2196)));
    // 0x2c440c: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x2c440cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c4410: 0xc08491e  jal         func_212478
    ctx->pc = 0x2C4410u;
    SET_GPR_U32(ctx, 31, 0x2C4418u);
    ctx->pc = 0x2C4414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4410u;
    // 0x2c4414: 0x24c607c0  addiu       $a2, $a2, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2C4410u, 0x2C4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4418u;
label_2c4418:
    // 0x2c4418: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c4418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c441c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c441cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4420: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4420u;
    {
        const bool branch_taken_0x2c4420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4420) {
            ctx->pc = 0x2C4424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4420u;
            // 0x2c4424: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4428u;
            goto label_2c4428;
        }
    }
    ctx->pc = 0x2C4428u;
label_2c4428:
    // 0x2c4428: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c4428u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c442c:
    // 0x2c442c: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2c442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2c4430: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2c4430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2c4434: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C4434u;
    {
        const bool branch_taken_0x2c4434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4434u;
        // 0x2c4438: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4434) {
            ctx->pc = 0x2C446Cu;
            goto label_2c446c;
        }
    }
    ctx->pc = 0x2C443Cu;
    // 0x2c443c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c443cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4440: 0x8c4388d4  lw          $v1, -0x772C($v0)
    ctx->pc = 0x2c4440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936788)));
    // 0x2c4444: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c4444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c4448: 0x8c620894  lw          $v0, 0x894($v1)
    ctx->pc = 0x2c4448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2196)));
    // 0x2c444c: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x2c444cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c4450: 0xc08491e  jal         func_212478
    ctx->pc = 0x2C4450u;
    SET_GPR_U32(ctx, 31, 0x2C4458u);
    ctx->pc = 0x2C4454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4450u;
    // 0x2c4454: 0x24c607c0  addiu       $a2, $a2, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2C4450u, 0x2C4458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4458u;
label_2c4458:
    // 0x2c4458: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c4458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c445c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c445cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4460: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4460u;
    {
        const bool branch_taken_0x2c4460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4460) {
            ctx->pc = 0x2C4464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4460u;
            // 0x2c4464: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4468u;
            goto label_2c4468;
        }
    }
    ctx->pc = 0x2C4468u;
label_2c4468:
    // 0x2c4468: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c4468u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c446c:
    // 0x2c446c: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x2c446cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x2c4470: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4474: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C4474u;
    {
        const bool branch_taken_0x2c4474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4474u;
        // 0x2c4478: 0x4600a101  sub.s       $f4, $f20, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4474) {
            ctx->pc = 0x2C4514u;
            goto label_2c4514;
        }
    }
    ctx->pc = 0x2C447Cu;
    // 0x2c447c: 0x0  nop
    ctx->pc = 0x2c447cu;
    // NOP
label_2c4480:
    // 0x2c4480: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c4480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c4484: 0xc08c19c  jal         func_230670
    ctx->pc = 0x2C4484u;
    SET_GPR_U32(ctx, 31, 0x2C448Cu);
    ctx->pc = 0x2C4488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4484u;
    // 0x2c4488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230670u, 0x2C4484u, 0x2C448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C448Cu;
label_2c448c:
    // 0x2c448c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c448cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4490: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2c4490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2c4494: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2c4494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2c4498: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C4498u;
    {
        const bool branch_taken_0x2c4498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4498u;
        // 0x2c449c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4498) {
            ctx->pc = 0x2C44D0u;
            goto label_2c44d0;
        }
    }
    ctx->pc = 0x2C44A0u;
    // 0x2c44a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c44a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c44a4: 0x8c4388d0  lw          $v1, -0x7730($v0)
    ctx->pc = 0x2c44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x2c44a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c44a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c44ac: 0x8c620894  lw          $v0, 0x894($v1)
    ctx->pc = 0x2c44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2196)));
    // 0x2c44b0: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x2c44b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c44b4: 0xc08491e  jal         func_212478
    ctx->pc = 0x2C44B4u;
    SET_GPR_U32(ctx, 31, 0x2C44BCu);
    ctx->pc = 0x2C44B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C44B4u;
    // 0x2c44b8: 0x24c607c0  addiu       $a2, $a2, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2C44B4u, 0x2C44BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44BCu;
label_2c44bc:
    // 0x2c44bc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c44bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c44c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c44c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c44c4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C44C4u;
    {
        const bool branch_taken_0x2c44c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c44c4) {
            ctx->pc = 0x2C44C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C44C4u;
            // 0x2c44c8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C44CCu;
            goto label_2c44cc;
        }
    }
    ctx->pc = 0x2C44CCu;
label_2c44cc:
    // 0x2c44cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c44ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c44d0:
    // 0x2c44d0: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2c44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2c44d4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2c44d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2c44d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C44D8u;
    {
        const bool branch_taken_0x2c44d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44D8u;
        // 0x2c44dc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c44d8) {
            ctx->pc = 0x2C4510u;
            goto label_2c4510;
        }
    }
    ctx->pc = 0x2C44E0u;
    // 0x2c44e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c44e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c44e4: 0x8c4388d4  lw          $v1, -0x772C($v0)
    ctx->pc = 0x2c44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936788)));
    // 0x2c44e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c44e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c44ec: 0x8c620894  lw          $v0, 0x894($v1)
    ctx->pc = 0x2c44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2196)));
    // 0x2c44f0: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x2c44f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c44f4: 0xc08491e  jal         func_212478
    ctx->pc = 0x2C44F4u;
    SET_GPR_U32(ctx, 31, 0x2C44FCu);
    ctx->pc = 0x2C44F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C44F4u;
    // 0x2c44f8: 0x24c607c0  addiu       $a2, $a2, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2C44F4u, 0x2C44FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44FCu;
label_2c44fc:
    // 0x2c44fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c44fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4500: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c4500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4504: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4504u;
    {
        const bool branch_taken_0x2c4504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4504) {
            ctx->pc = 0x2C4508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4504u;
            // 0x2c4508: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C450Cu;
            goto label_2c450c;
        }
    }
    ctx->pc = 0x2C450Cu;
label_2c450c:
    // 0x2c450c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c450cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c4510:
    // 0x2c4510: 0x4600a106  mov.s       $f4, $f20
    ctx->pc = 0x2c4510u;
    ctx->f[4] = FPU_MOV_S(ctx->f[20]);
label_2c4514:
    // 0x2c4514: 0x5a2000d8  blezl       $s1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2C4514u;
    {
        const bool branch_taken_0x2c4514 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2c4514) {
            ctx->pc = 0x2C4518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4514u;
            // 0x2c4518: 0xaf94bafc  sw          $s4, -0x4504($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294949628), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4878u;
            goto label_2c4878;
        }
    }
    ctx->pc = 0x2C451Cu;
    // 0x2c451c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2c451cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c4520: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2c4520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c4524: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4528: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2c4528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2c452c: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2c452cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2c4530: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2c4530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2c4534: 0x0  nop
    ctx->pc = 0x2c4534u;
    // NOP
label_2c4538:
    // 0x2c4538: 0x8e440898  lw          $a0, 0x898($s2)
    ctx->pc = 0x2c4538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x2c453c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x2c453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2c4540: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C4540u;
    {
        const bool branch_taken_0x2c4540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4540) {
            ctx->pc = 0x2C4544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4540u;
            // 0x2c4544: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4630u;
            goto label_2c4630;
        }
    }
    ctx->pc = 0x2C4548u;
    // 0x2c4548: 0x9482006c  lhu         $v0, 0x6C($a0)
    ctx->pc = 0x2c4548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2c454c: 0x50430038  beql        $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C454Cu;
    {
        const bool branch_taken_0x2c454c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c454c) {
            ctx->pc = 0x2C4550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C454Cu;
            // 0x2c4550: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4630u;
            goto label_2c4630;
        }
    }
    ctx->pc = 0x2C4554u;
    // 0x2c4554: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x2c4554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4558: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x2c4558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c455c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C455Cu;
    {
        const bool branch_taken_0x2c455c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C455Cu;
        // 0x2c4560: 0xc4830064  lwc1        $f3, 0x64($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c455c) {
            ctx->pc = 0x2C4578u;
            goto label_2c4578;
        }
    }
    ctx->pc = 0x2C4564u;
    // 0x2c4564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4568: 0x5660002c  bnel        $s3, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2C4568u;
    {
        const bool branch_taken_0x2c4568 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4568) {
            ctx->pc = 0x2C456Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4568u;
            // 0x2c456c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C461Cu;
            goto label_2c461c;
        }
    }
    ctx->pc = 0x2C4570u;
    // 0x2c4570: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C4570u;
    {
        const bool branch_taken_0x2c4570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4570u;
        // 0x2c4574: 0x46032801  sub.s       $f0, $f5, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4570) {
            ctx->pc = 0x2C45ECu;
            goto label_2c45ec;
        }
    }
    ctx->pc = 0x2C4578u;
label_2c4578:
    // 0x2c4578: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2c4578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c457c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2C457Cu;
    {
        const bool branch_taken_0x2c457c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c457c) {
            ctx->pc = 0x2C45D8u;
            goto label_2c45d8;
        }
    }
    ctx->pc = 0x2C4584u;
    // 0x2c4584: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x2c4584u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x2c4588: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c458c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c458cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c4590: 0x4615b801  sub.s       $f0, $f23, $f21
    ctx->pc = 0x2c4590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x2c4594: 0x0  nop
    ctx->pc = 0x2c4594u;
    // NOP
    // 0x2c4598: 0x0  nop
    ctx->pc = 0x2c4598u;
    // NOP
    // 0x2c459c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2c459cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2c45a0: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x2c45a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2c45a4: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x2c45a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c45a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C45A8u;
    {
        const bool branch_taken_0x2c45a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c45a8) {
            ctx->pc = 0x2C45C0u;
            goto label_2c45c0;
        }
    }
    ctx->pc = 0x2C45B0u;
    // 0x2c45b0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2c45b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c45b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C45B4u;
    {
        const bool branch_taken_0x2c45b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c45b4) {
            ctx->pc = 0x2C461Cu;
            goto label_2c461c;
        }
    }
    ctx->pc = 0x2C45BCu;
    // 0x2c45bc: 0x0  nop
    ctx->pc = 0x2c45bcu;
    // NOP
label_2c45c0:
    // 0x2c45c0: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2c45c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c45c4: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
    ctx->pc = 0x2C45C4u;
    {
        const bool branch_taken_0x2c45c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c45c4) {
            ctx->pc = 0x2C45C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C45C4u;
            // 0x2c45c8: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C461Cu;
            goto label_2c461c;
        }
    }
    ctx->pc = 0x2C45CCu;
    // 0x2c45cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C45CCu;
    {
        const bool branch_taken_0x2c45cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c45cc) {
            ctx->pc = 0x2C461Cu;
            goto label_2c461c;
        }
    }
    ctx->pc = 0x2C45D4u;
    // 0x2c45d4: 0x0  nop
    ctx->pc = 0x2c45d4u;
    // NOP
label_2c45d8:
    // 0x2c45d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c45d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c45dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c45dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c45e0: 0x5660000e  bnel        $s3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C45E0u;
    {
        const bool branch_taken_0x2c45e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c45e0) {
            ctx->pc = 0x2C45E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C45E0u;
            // 0x2c45e4: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C461Cu;
            goto label_2c461c;
        }
    }
    ctx->pc = 0x2C45E8u;
    // 0x2c45e8: 0x46033801  sub.s       $f0, $f7, $f3
    ctx->pc = 0x2c45e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
label_2c45ec:
    // 0x2c45ec: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x2c45ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x2c45f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c45f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c45f4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2c45f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c45f8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2C45F8u;
    {
        const bool branch_taken_0x2c45f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c45f8) {
            ctx->pc = 0x2C45FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C45F8u;
            // 0x2c45fc: 0x46001047  neg.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4608u;
            goto label_2c4608;
        }
    }
    ctx->pc = 0x2C4600u;
    // 0x2c4600: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4600u;
    {
        const bool branch_taken_0x2c4600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4600u;
        // 0x2c4604: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4600) {
            ctx->pc = 0x2C4614u;
            goto label_2c4614;
        }
    }
    ctx->pc = 0x2C4608u;
label_2c4608:
    // 0x2c4608: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c4608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c460c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C460Cu;
    {
        const bool branch_taken_0x2c460c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c460c) {
            ctx->pc = 0x2C4610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C460Cu;
            // 0x2c4610: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4614u;
            goto label_2c4614;
        }
    }
    ctx->pc = 0x2C4614u;
label_2c4614:
    // 0x2c4614: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2c4614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2c4618: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2c4618u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_2c461c:
    // 0x2c461c: 0x46061834  c.lt.s      $f3, $f6
    ctx->pc = 0x2c461cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4620: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4620u;
    {
        const bool branch_taken_0x2c4620 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4620) {
            ctx->pc = 0x2C4624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4620u;
            // 0x2c4624: 0xac800088  sw          $zero, 0x88($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4628u;
            goto label_2c4628;
        }
    }
    ctx->pc = 0x2C4628u;
label_2c4628:
    // 0x2c4628: 0xe4830064  swc1        $f3, 0x64($a0)
    ctx->pc = 0x2c4628u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x2c462c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2c462cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2c4630:
    // 0x2c4630: 0x1e20ffc1  bgtz        $s1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2C4630u;
    {
        const bool branch_taken_0x2c4630 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2C4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4630u;
        // 0x2c4634: 0x265208d0  addiu       $s2, $s2, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4630) {
            ctx->pc = 0x2C4538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4538;
        }
    }
    ctx->pc = 0x2C4638u;
    // 0x2c4638: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2C4638u;
    {
        const bool branch_taken_0x2c4638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4638u;
        // 0x2c463c: 0xaf94bafc  sw          $s4, -0x4504($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949628), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4638) {
            ctx->pc = 0x2C4878u;
            goto label_2c4878;
        }
    }
    ctx->pc = 0x2C4640u;
label_2c4640:
    // 0x2c4640: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c4640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c4644: 0xc08c19c  jal         func_230670
    ctx->pc = 0x2C4644u;
    SET_GPR_U32(ctx, 31, 0x2C464Cu);
    ctx->pc = 0x2C4648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4644u;
    // 0x2c4648: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230670u, 0x2C4644u, 0x2C464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C464Cu;
label_2c464c:
    // 0x2c464c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c464cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4650: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2c4650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2c4654: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2c4654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2c4658: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C4658u;
    {
        const bool branch_taken_0x2c4658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4658u;
        // 0x2c465c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4658) {
            ctx->pc = 0x2C4690u;
            goto label_2c4690;
        }
    }
    ctx->pc = 0x2C4660u;
    // 0x2c4660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c4660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4664: 0x8c4388d0  lw          $v1, -0x7730($v0)
    ctx->pc = 0x2c4664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x2c4668: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c4668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c466c: 0x8c620894  lw          $v0, 0x894($v1)
    ctx->pc = 0x2c466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2196)));
    // 0x2c4670: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x2c4670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c4674: 0xc08491e  jal         func_212478
    ctx->pc = 0x2C4674u;
    SET_GPR_U32(ctx, 31, 0x2C467Cu);
    ctx->pc = 0x2C4678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4674u;
    // 0x2c4678: 0x24c607c0  addiu       $a2, $a2, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2C4674u, 0x2C467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C467Cu;
label_2c467c:
    // 0x2c467c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4680: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c4680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4684: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4684u;
    {
        const bool branch_taken_0x2c4684 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4684) {
            ctx->pc = 0x2C4688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4684u;
            // 0x2c4688: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C468Cu;
            goto label_2c468c;
        }
    }
    ctx->pc = 0x2C468Cu;
label_2c468c:
    // 0x2c468c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c468cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c4690:
    // 0x2c4690: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2c4690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2c4694: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2c4694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2c4698: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C4698u;
    {
        const bool branch_taken_0x2c4698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4698u;
        // 0x2c469c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4698) {
            ctx->pc = 0x2C46D0u;
            goto label_2c46d0;
        }
    }
    ctx->pc = 0x2C46A0u;
    // 0x2c46a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c46a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c46a4: 0x8c4388d4  lw          $v1, -0x772C($v0)
    ctx->pc = 0x2c46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936788)));
    // 0x2c46a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c46a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c46ac: 0x8c620894  lw          $v0, 0x894($v1)
    ctx->pc = 0x2c46acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2196)));
    // 0x2c46b0: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x2c46b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c46b4: 0xc08491e  jal         func_212478
    ctx->pc = 0x2C46B4u;
    SET_GPR_U32(ctx, 31, 0x2C46BCu);
    ctx->pc = 0x2C46B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C46B4u;
    // 0x2c46b8: 0x24c607c0  addiu       $a2, $a2, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2C46B4u, 0x2C46BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46BCu;
label_2c46bc:
    // 0x2c46bc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c46bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c46c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c46c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c46c4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C46C4u;
    {
        const bool branch_taken_0x2c46c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c46c4) {
            ctx->pc = 0x2C46C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C46C4u;
            // 0x2c46c8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C46CCu;
            goto label_2c46cc;
        }
    }
    ctx->pc = 0x2C46CCu;
label_2c46cc:
    // 0x2c46cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c46ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c46d0:
    // 0x2c46d0: 0xc08eb20  jal         func_23AC80
    ctx->pc = 0x2C46D0u;
    SET_GPR_U32(ctx, 31, 0x2C46D8u);
    ctx->pc = 0x23AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC80u, 0x2C46D0u, 0x2C46D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46D8u;
label_2c46d8:
    // 0x2c46d8: 0x50400068  beql        $v0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x2C46D8u;
    {
        const bool branch_taken_0x2c46d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c46d8) {
            ctx->pc = 0x2C46DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C46D8u;
            // 0x2c46dc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C487Cu;
            goto label_2c487c;
        }
    }
    ctx->pc = 0x2C46E0u;
    // 0x2c46e0: 0xc07c4c4  jal         func_1F1310
    ctx->pc = 0x2C46E0u;
    SET_GPR_U32(ctx, 31, 0x2C46E8u);
    ctx->pc = 0x2C46E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C46E0u;
    // 0x2c46e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1310u, 0x2C46E0u, 0x2C46E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46E8u;
label_2c46e8:
    // 0x2c46e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C46E8u;
    {
        const bool branch_taken_0x2c46e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c46e8) {
            ctx->pc = 0x2C46ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C46E8u;
            // 0x2c46ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4704u;
            goto label_2c4704;
        }
    }
    ctx->pc = 0x2C46F0u;
    // 0x2c46f0: 0xc08c696  jal         func_231A58
    ctx->pc = 0x2C46F0u;
    SET_GPR_U32(ctx, 31, 0x2C46F8u);
    ctx->pc = 0x231A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A58u, 0x2C46F0u, 0x2C46F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46F8u;
label_2c46f8:
    // 0x2c46f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C46F8u;
    {
        const bool branch_taken_0x2c46f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C46FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46F8u;
        // 0x2c46fc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46f8) {
            ctx->pc = 0x2C4708u;
            goto label_2c4708;
        }
    }
    ctx->pc = 0x2C4700u;
    // 0x2c4700: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2c4700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4704:
    // 0x2c4704: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c4704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2c4708:
    // 0x2c4708: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2c4708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c470c: 0x8c43885c  lw          $v1, -0x77A4($v0)
    ctx->pc = 0x2c470cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936668)));
    // 0x2c4710: 0xc7849308  lwc1        $f4, -0x6CF8($gp)
    ctx->pc = 0x2c4710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c4714: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4714u;
    {
        const bool branch_taken_0x2c4714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4714u;
        // 0x2c4718: 0xc780930c  lwc1        $f0, -0x6CF4($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4714) {
            ctx->pc = 0x2C4724u;
            goto label_2c4724;
        }
    }
    ctx->pc = 0x2C471Cu;
    // 0x2c471c: 0xc7849310  lwc1        $f4, -0x6CF0($gp)
    ctx->pc = 0x2c471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c4720: 0xc7809314  lwc1        $f0, -0x6CEC($gp)
    ctx->pc = 0x2c4720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4724:
    // 0x2c4724: 0x1a200054  blez        $s1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2C4724u;
    {
        const bool branch_taken_0x2c4724 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2C4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4724u;
        // 0x2c4728: 0x46040141  sub.s       $f5, $f0, $f4 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4724) {
            ctx->pc = 0x2C4878u;
            goto label_2c4878;
        }
    }
    ctx->pc = 0x2C472Cu;
    // 0x2c472c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2c472cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c4730: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2c4730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c4734: 0xc7889318  lwc1        $f8, -0x6CE8($gp)
    ctx->pc = 0x2c4734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c4738: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c4738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c473c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c473cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4740: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2c4740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2c4744: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2c4744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2c4748: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2c4748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2c474c: 0x0  nop
    ctx->pc = 0x2c474cu;
    // NOP
label_2c4750:
    // 0x2c4750: 0x8e440898  lw          $a0, 0x898($s2)
    ctx->pc = 0x2c4750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x2c4754: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x2c4754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2c4758: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x2C4758u;
    {
        const bool branch_taken_0x2c4758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4758) {
            ctx->pc = 0x2C475Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4758u;
            // 0x2c475c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4870u;
            goto label_2c4870;
        }
    }
    ctx->pc = 0x2C4760u;
    // 0x2c4760: 0x9482006c  lhu         $v0, 0x6C($a0)
    ctx->pc = 0x2c4760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2c4764: 0x50460042  beql        $v0, $a2, . + 4 + (0x42 << 2)
    ctx->pc = 0x2C4764u;
    {
        const bool branch_taken_0x2c4764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2c4764) {
            ctx->pc = 0x2C4768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4764u;
            // 0x2c4768: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4870u;
            goto label_2c4870;
        }
    }
    ctx->pc = 0x2C476Cu;
    // 0x2c476c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2c476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2c4770: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2c4770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4774: 0x5065003e  beql        $v1, $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C4774u;
    {
        const bool branch_taken_0x2c4774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c4774) {
            ctx->pc = 0x2C4778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4774u;
            // 0x2c4778: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4870u;
            goto label_2c4870;
        }
    }
    ctx->pc = 0x2C477Cu;
    // 0x2c477c: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c477cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4780: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c4780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4784: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4784u;
    {
        const bool branch_taken_0x2c4784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4784u;
        // 0x2c4788: 0xc4820064  lwc1        $f2, 0x64($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4784) {
            ctx->pc = 0x2C47A0u;
            goto label_2c47a0;
        }
    }
    ctx->pc = 0x2C478Cu;
    // 0x2c478c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c478cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4790: 0x56000032  bnel        $s0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C4790u;
    {
        const bool branch_taken_0x2c4790 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4790) {
            ctx->pc = 0x2C4794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4790u;
            // 0x2c4794: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C485Cu;
            goto label_2c485c;
        }
    }
    ctx->pc = 0x2C4798u;
    // 0x2c4798: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C4798u;
    {
        const bool branch_taken_0x2c4798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4798u;
        // 0x2c479c: 0x46021841  sub.s       $f1, $f3, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4798) {
            ctx->pc = 0x2C482Cu;
            goto label_2c482c;
        }
    }
    ctx->pc = 0x2C47A0u;
label_2c47a0:
    // 0x2c47a0: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2c47a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c47a4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2C47A4u;
    {
        const bool branch_taken_0x2c47a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c47a4) {
            ctx->pc = 0x2C47F8u;
            goto label_2c47f8;
        }
    }
    ctx->pc = 0x2C47ACu;
    // 0x2c47ac: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2c47acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c47b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c47b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c47b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c47b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c47b8: 0x0  nop
    ctx->pc = 0x2c47b8u;
    // NOP
    // 0x2c47bc: 0x0  nop
    ctx->pc = 0x2c47bcu;
    // NOP
    // 0x2c47c0: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x2c47c0u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x2c47c4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x2c47c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c47c8: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2c47c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c47cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C47CCu;
    {
        const bool branch_taken_0x2c47cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c47cc) {
            ctx->pc = 0x2C47E0u;
            goto label_2c47e0;
        }
    }
    ctx->pc = 0x2C47D4u;
    // 0x2c47d4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2c47d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c47d8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C47D8u;
    {
        const bool branch_taken_0x2c47d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c47d8) {
            ctx->pc = 0x2C485Cu;
            goto label_2c485c;
        }
    }
    ctx->pc = 0x2C47E0u;
label_2c47e0:
    // 0x2c47e0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2c47e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c47e4: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x2C47E4u;
    {
        const bool branch_taken_0x2c47e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c47e4) {
            ctx->pc = 0x2C47E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C47E4u;
            // 0x2c47e8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C485Cu;
            goto label_2c485c;
        }
    }
    ctx->pc = 0x2C47ECu;
    // 0x2c47ec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C47ECu;
    {
        const bool branch_taken_0x2c47ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c47ec) {
            ctx->pc = 0x2C485Cu;
            goto label_2c485c;
        }
    }
    ctx->pc = 0x2C47F4u;
    // 0x2c47f4: 0x0  nop
    ctx->pc = 0x2c47f4u;
    // NOP
label_2c47f8:
    // 0x2c47f8: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x2c47f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c47fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C47FCu;
    {
        const bool branch_taken_0x2c47fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c47fc) {
            ctx->pc = 0x2C4818u;
            goto label_2c4818;
        }
    }
    ctx->pc = 0x2C4804u;
    // 0x2c4804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4808: 0x56000014  bnel        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C4808u;
    {
        const bool branch_taken_0x2c4808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4808) {
            ctx->pc = 0x2C480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4808u;
            // 0x2c480c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C485Cu;
            goto label_2c485c;
        }
    }
    ctx->pc = 0x2C4810u;
    // 0x2c4810: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4810u;
    {
        const bool branch_taken_0x2c4810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4810u;
        // 0x2c4814: 0x46021841  sub.s       $f1, $f3, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4810) {
            ctx->pc = 0x2C482Cu;
            goto label_2c482c;
        }
    }
    ctx->pc = 0x2C4818u;
label_2c4818:
    // 0x2c4818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c481c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c481cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4820: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C4820u;
    {
        const bool branch_taken_0x2c4820 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4820) {
            ctx->pc = 0x2C4824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4820u;
            // 0x2c4824: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C485Cu;
            goto label_2c485c;
        }
    }
    ctx->pc = 0x2C4828u;
    // 0x2c4828: 0x46023841  sub.s       $f1, $f7, $f2
    ctx->pc = 0x2c4828u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
label_2c482c:
    // 0x2c482c: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x2c482cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x2c4830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4834: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c4834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4838: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4838u;
    {
        const bool branch_taken_0x2c4838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4838) {
            ctx->pc = 0x2C483Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4838u;
            // 0x2c483c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4854u;
            goto label_2c4854;
        }
    }
    ctx->pc = 0x2C4840u;
    // 0x2c4840: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2c4840u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2c4844: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c4844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4848: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4848u;
    {
        const bool branch_taken_0x2c4848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4848) {
            ctx->pc = 0x2C484Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4848u;
            // 0x2c484c: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4858u;
            goto label_2c4858;
        }
    }
    ctx->pc = 0x2C4850u;
    // 0x2c4850: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c4850u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c4854:
    // 0x2c4854: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x2c4854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2c4858:
    // 0x2c4858: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2c4858u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2c485c:
    // 0x2c485c: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x2c485cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4860: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4860u;
    {
        const bool branch_taken_0x2c4860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4860) {
            ctx->pc = 0x2C4864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4860u;
            // 0x2c4864: 0xac800088  sw          $zero, 0x88($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4868u;
            goto label_2c4868;
        }
    }
    ctx->pc = 0x2C4868u;
label_2c4868:
    // 0x2c4868: 0xe4820064  swc1        $f2, 0x64($a0)
    ctx->pc = 0x2c4868u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x2c486c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2c486cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2c4870:
    // 0x2c4870: 0x1e20ffb7  bgtz        $s1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2C4870u;
    {
        const bool branch_taken_0x2c4870 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2C4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4870u;
        // 0x2c4874: 0x265208d0  addiu       $s2, $s2, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4870) {
            ctx->pc = 0x2C4750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4750;
        }
    }
    ctx->pc = 0x2C4878u;
label_2c4878:
    // 0x2c4878: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c4878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c487c:
    // 0x2c487c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2c487cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4880: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2c4880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4884: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2c4884u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c4888: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2c4888u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c488c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2c488cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c4890: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x2c4890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2c4894: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2c4894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c4898: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2c4898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c489c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c489cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c48a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C48A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48A0u;
        // 0x2c48a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C48A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C48A8u;
}

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

// Function: sub_00235EC0
// Address: 0x235ec0 - 0x2367b8
void sub_00235EC0_0x235ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235EC0_0x235ec0");
#endif

    switch (ctx->pc) {
        case 0x235f7cu: goto label_235f7c;
        case 0x235fb0u: goto label_235fb0;
        case 0x235fdcu: goto label_235fdc;
        case 0x236014u: goto label_236014;
        case 0x23607cu: goto label_23607c;
        case 0x236090u: goto label_236090;
        case 0x236200u: goto label_236200;
        case 0x236218u: goto label_236218;
        case 0x236234u: goto label_236234;
        case 0x236268u: goto label_236268;
        case 0x2364dcu: goto label_2364dc;
        case 0x23651cu: goto label_23651c;
        case 0x23668cu: goto label_23668c;
        case 0x2366a4u: goto label_2366a4;
        case 0x2366acu: goto label_2366ac;
        case 0x2366c0u: goto label_2366c0;
        case 0x2366c8u: goto label_2366c8;
        case 0x236714u: goto label_236714;
        default: break;
    }

    ctx->pc = 0x235ec0u;

    // 0x235ec0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x235ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x235ec4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x235ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x235ec8: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x235ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x235ecc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x235eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ed0: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x235ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x235ed4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x235ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ed8: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x235ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x235edc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x235edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ee0: 0xffb701a8  sd          $s7, 0x1A8($sp)
    ctx->pc = 0x235ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 23));
    // 0x235ee4: 0xe7b501c0  swc1        $f21, 0x1C0($sp)
    ctx->pc = 0x235ee4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x235ee8: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x235ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
    // 0x235eec: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x235eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x235ef0: 0xffb50198  sd          $s5, 0x198($sp)
    ctx->pc = 0x235ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 21));
    // 0x235ef4: 0xffb601a0  sd          $s6, 0x1A0($sp)
    ctx->pc = 0x235ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 22));
    // 0x235ef8: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x235ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x235efc: 0xe7b401b8  swc1        $f20, 0x1B8($sp)
    ctx->pc = 0x235efcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x235f00: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x235f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x235f04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x235f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x235f08: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x235F08u;
    {
        const bool branch_taken_0x235f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F08u;
        // 0x235f0c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f08) {
            ctx->pc = 0x235F20u;
            goto label_235f20;
        }
    }
    ctx->pc = 0x235F10u;
    // 0x235f10: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x235f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x235f14: 0x8c62dda8  lw          $v0, -0x2258($v1)
    ctx->pc = 0x235f14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3ADDA8u));
    // 0x235f18: 0x38420032  xori        $v0, $v0, 0x32
    ctx->pc = 0x235f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)50);
    // 0x235f1c: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x235f1cu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_235f20:
    // 0x235f20: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x235F20u;
    {
        const bool branch_taken_0x235f20 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F20u;
        // 0x235f24: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f20) {
            ctx->pc = 0x235F38u;
            goto label_235f38;
        }
    }
    ctx->pc = 0x235F28u;
    // 0x235f28: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x235f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235f2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x235f2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x235f30: 0xc7808684  lwc1        $f0, -0x797C($gp)
    ctx->pc = 0x235f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235f34: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x235f34u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_235f38:
    // 0x235f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235f3c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x235F3Cu;
    {
        const bool branch_taken_0x235f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x235F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F3Cu;
        // 0x235f40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f3c) {
            ctx->pc = 0x235F58u;
            goto label_235f58;
        }
    }
    ctx->pc = 0x235F44u;
    // 0x235f44: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x235F44u;
    {
        const bool branch_taken_0x235f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x235F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F44u;
        // 0x235f48: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f44) {
            ctx->pc = 0x235FB8u;
            goto label_235fb8;
        }
    }
    ctx->pc = 0x235F4Cu;
    // 0x235f4c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x235F4Cu;
    {
        const bool branch_taken_0x235f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235f4c) {
            ctx->pc = 0x236020u;
            goto label_236020;
        }
    }
    ctx->pc = 0x235F54u;
    // 0x235f54: 0x0  nop
    ctx->pc = 0x235f54u;
    // NOP
label_235f58:
    // 0x235f58: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x235f58u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x235f5c: 0x8e8283c0  lw          $v0, -0x7C40($s4)
    ctx->pc = 0x235f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x235f60: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x235f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x235f64: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x235F64u;
    {
        const bool branch_taken_0x235f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235f64) {
            ctx->pc = 0x235FA0u;
            goto label_235fa0;
        }
    }
    ctx->pc = 0x235F6Cu;
    // 0x235f6c: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x235F6Cu;
    {
        const bool branch_taken_0x235f6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F6Cu;
        // 0x235f70: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f6c) {
            ctx->pc = 0x236020u;
            goto label_236020;
        }
    }
    ctx->pc = 0x235F74u;
    // 0x235f74: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x235F74u;
    SET_GPR_U32(ctx, 31, 0x235F7Cu);
    ctx->pc = 0x235F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F74u;
    // 0x235f78: 0x2484dda0  addiu       $a0, $a0, -0x2260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x235F74u, 0x235F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F7Cu;
label_235f7c:
    // 0x235f7c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x235f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235f80: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x235f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235f84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x235f84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x235f88: 0xc7808688  lwc1        $f0, -0x7978($gp)
    ctx->pc = 0x235f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235f8c: 0xc783868c  lwc1        $f3, -0x7974($gp)
    ctx->pc = 0x235f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x235f90: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x235f90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x235f94: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x235f94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x235f98: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x235F98u;
    {
        const bool branch_taken_0x235f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F98u;
        // 0x235f9c: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f98) {
            ctx->pc = 0x23601Cu;
            goto label_23601c;
        }
    }
    ctx->pc = 0x235FA0u;
label_235fa0:
    // 0x235fa0: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x235FA0u;
    {
        const bool branch_taken_0x235fa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FA0u;
        // 0x235fa4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fa0) {
            ctx->pc = 0x236020u;
            goto label_236020;
        }
    }
    ctx->pc = 0x235FA8u;
    // 0x235fa8: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x235FA8u;
    SET_GPR_U32(ctx, 31, 0x235FB0u);
    ctx->pc = 0x235FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FA8u;
    // 0x235fac: 0x2484dda0  addiu       $a0, $a0, -0x2260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x235FA8u, 0x235FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FB0u;
label_235fb0:
    // 0x235fb0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x235FB0u;
    {
        const bool branch_taken_0x235fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FB0u;
        // 0x235fb4: 0xc6210004  lwc1        $f1, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fb0) {
            ctx->pc = 0x236018u;
            goto label_236018;
        }
    }
    ctx->pc = 0x235FB8u;
label_235fb8:
    // 0x235fb8: 0x8e8283c0  lw          $v0, -0x7C40($s4)
    ctx->pc = 0x235fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935488)));
    // 0x235fbc: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x235fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x235fc0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x235FC0u;
    {
        const bool branch_taken_0x235fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235fc0) {
            ctx->pc = 0x236000u;
            goto label_236000;
        }
    }
    ctx->pc = 0x235FC8u;
    // 0x235fc8: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x235FC8u;
    {
        const bool branch_taken_0x235fc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FC8u;
        // 0x235fcc: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fc8) {
            ctx->pc = 0x236020u;
            goto label_236020;
        }
    }
    ctx->pc = 0x235FD0u;
    // 0x235fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235fd4: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x235FD4u;
    SET_GPR_U32(ctx, 31, 0x235FDCu);
    ctx->pc = 0x235FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FD4u;
    // 0x235fd8: 0x2484dda0  addiu       $a0, $a0, -0x2260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x235FD4u, 0x235FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FDCu;
label_235fdc:
    // 0x235fdc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x235fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235fe0: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x235fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235fe4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x235fe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x235fe8: 0xc7808690  lwc1        $f0, -0x7970($gp)
    ctx->pc = 0x235fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235fec: 0xc7838694  lwc1        $f3, -0x796C($gp)
    ctx->pc = 0x235fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x235ff0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x235ff0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x235ff4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x235ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x235ff8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x235FF8u;
    {
        const bool branch_taken_0x235ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FF8u;
        // 0x235ffc: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ff8) {
            ctx->pc = 0x23601Cu;
            goto label_23601c;
        }
    }
    ctx->pc = 0x236000u;
label_236000:
    // 0x236000: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236000u;
    {
        const bool branch_taken_0x236000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236000u;
        // 0x236004: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236000) {
            ctx->pc = 0x236020u;
            goto label_236020;
        }
    }
    ctx->pc = 0x236008u;
    // 0x236008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x236008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23600c: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x23600Cu;
    SET_GPR_U32(ctx, 31, 0x236014u);
    ctx->pc = 0x236010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23600Cu;
    // 0x236010: 0x2484dda0  addiu       $a0, $a0, -0x2260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x23600Cu, 0x236014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236014u;
label_236014:
    // 0x236014: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x236014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_236018:
    // 0x236018: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x236018u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23601c:
    // 0x23601c: 0xe6410044  swc1        $f1, 0x44($s2)
    ctx->pc = 0x23601cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_236020:
    // 0x236020: 0x52e0006f  beql        $s7, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x236020u;
    {
        const bool branch_taken_0x236020 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x236020) {
            ctx->pc = 0x236024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236020u;
            // 0x236024: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2361E0u;
            goto label_2361e0;
        }
    }
    ctx->pc = 0x236028u;
    // 0x236028: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x236028u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x23602c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x23602cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x236030: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x236030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x236034: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x236034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x236038: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x236038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x23603c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23603Cu;
    {
        const bool branch_taken_0x23603c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23603Cu;
        // 0x236040: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23603c) {
            ctx->pc = 0x236058u;
            goto label_236058;
        }
    }
    ctx->pc = 0x236044u;
    // 0x236044: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x236044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x236048: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x236048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x23604c: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x23604cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x236050: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236050u;
    {
        const bool branch_taken_0x236050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236050u;
        // 0x236054: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236050) {
            ctx->pc = 0x236060u;
            goto label_236060;
        }
    }
    ctx->pc = 0x236058u;
label_236058:
    // 0x236058: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x236058u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23605c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x23605cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_236060:
    // 0x236060: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x236060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236064: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x236064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x236068: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x236068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23606c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x23606cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x236070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236074: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x236074u;
    SET_GPR_U32(ctx, 31, 0x23607Cu);
    ctx->pc = 0x236078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236074u;
    // 0x236078: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x236074u, 0x23607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23607Cu;
label_23607c:
    // 0x23607c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x23607cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x236080: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x236080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x236084: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x236084u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x236088: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x236088u;
    SET_GPR_U32(ctx, 31, 0x236090u);
    ctx->pc = 0x23608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236088u;
    // 0x23608c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x236088u, 0x236090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236090u;
label_236090:
    // 0x236090: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236094: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x236094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x236098: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x236098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23609c: 0xc7818698  lwc1        $f1, -0x7968($gp)
    ctx->pc = 0x23609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2360a0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2360a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2360a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2360a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2360a8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2360A8u;
    {
        const bool branch_taken_0x2360a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2360ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360A8u;
        // 0x2360ac: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360a8) {
            ctx->pc = 0x2360C0u;
            goto label_2360c0;
        }
    }
    ctx->pc = 0x2360B0u;
    // 0x2360b0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2360b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2360b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2360b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2360b8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2360B8u;
    {
        const bool branch_taken_0x2360b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2360b8) {
            ctx->pc = 0x2360BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2360B8u;
            // 0x2360bc: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2360D4u;
            goto label_2360d4;
        }
    }
    ctx->pc = 0x2360C0u;
label_2360c0:
    // 0x2360c0: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x2360c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x2360c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2360c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2360c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2360c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2360cc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x2360ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x2360d0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2360d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2360d4:
    // 0x2360d4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2360d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2360d8: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2360D8u;
    {
        const bool branch_taken_0x2360d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2360DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360D8u;
        // 0x2360dc: 0x8e8283c0  lw          $v0, -0x7C40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360d8) {
            ctx->pc = 0x2361C4u;
            goto label_2361c4;
        }
    }
    ctx->pc = 0x2360E0u;
    // 0x2360e0: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2360e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2360e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2360e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2360e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2360e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2360ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2360ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2360f0: 0xc7aa0010  lwc1        $f10, 0x10($sp)
    ctx->pc = 0x2360f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2360f4: 0xc7ab0014  lwc1        $f11, 0x14($sp)
    ctx->pc = 0x2360f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2360f8: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x2360f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2360fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2360fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236100: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x236100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x236104: 0xc7ae0020  lwc1        $f14, 0x20($sp)
    ctx->pc = 0x236104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x236108: 0xc7af0024  lwc1        $f15, 0x24($sp)
    ctx->pc = 0x236108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x23610c: 0xc7b00028  lwc1        $f16, 0x28($sp)
    ctx->pc = 0x23610cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x236110: 0xc7b10030  lwc1        $f17, 0x30($sp)
    ctx->pc = 0x236110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x236114: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x236114u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x236118: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x236118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23611c: 0xc7a70060  lwc1        $f7, 0x60($sp)
    ctx->pc = 0x23611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x236120: 0xc7a80064  lwc1        $f8, 0x64($sp)
    ctx->pc = 0x236120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x236124: 0xc7a90068  lwc1        $f9, 0x68($sp)
    ctx->pc = 0x236124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x236128: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x236128u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23612c: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x23612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236130: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x236130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x236134: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x236134u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x236138: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x236138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23613c: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x23613cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x236140: 0xc7a50080  lwc1        $f5, 0x80($sp)
    ctx->pc = 0x236140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x236144: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x236144u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x236148: 0xc7a600a0  lwc1        $f6, 0xA0($sp)
    ctx->pc = 0x236148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x23614c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x23614cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x236150: 0x46015282  mul.s       $f10, $f10, $f1
    ctx->pc = 0x236150u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x236154: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x236154u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x236158: 0x46015ac2  mul.s       $f11, $f11, $f1
    ctx->pc = 0x236158u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x23615c: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x23615cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x236160: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x236160u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x236164: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x236164u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x236168: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x236168u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x23616c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x23616cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x236170: 0x46018402  mul.s       $f16, $f16, $f1
    ctx->pc = 0x236170u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x236174: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x236174u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x236178: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x236178u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x23617c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x23617cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x236180: 0x46075280  add.s       $f10, $f10, $f7
    ctx->pc = 0x236180u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[7]);
    // 0x236184: 0x46085ac0  add.s       $f11, $f11, $f8
    ctx->pc = 0x236184u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[8]);
    // 0x236188: 0x46096b40  add.s       $f13, $f13, $f9
    ctx->pc = 0x236188u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[9]);
    // 0x23618c: 0x46027380  add.s       $f14, $f14, $f2
    ctx->pc = 0x23618cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[2]);
    // 0x236190: 0x46037bc0  add.s       $f15, $f15, $f3
    ctx->pc = 0x236190u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[3]);
    // 0x236194: 0xe7aa0010  swc1        $f10, 0x10($sp)
    ctx->pc = 0x236194u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x236198: 0x46048400  add.s       $f16, $f16, $f4
    ctx->pc = 0x236198u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[4]);
    // 0x23619c: 0xe7ab0014  swc1        $f11, 0x14($sp)
    ctx->pc = 0x23619cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2361a0: 0x46058c40  add.s       $f17, $f17, $f5
    ctx->pc = 0x2361a0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[5]);
    // 0x2361a4: 0xe7ad0018  swc1        $f13, 0x18($sp)
    ctx->pc = 0x2361a4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2361a8: 0x46066300  add.s       $f12, $f12, $f6
    ctx->pc = 0x2361a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[6]);
    // 0x2361ac: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x2361acu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2361b0: 0xe7af0024  swc1        $f15, 0x24($sp)
    ctx->pc = 0x2361b0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2361b4: 0xe7b00028  swc1        $f16, 0x28($sp)
    ctx->pc = 0x2361b4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2361b8: 0xe7b10030  swc1        $f17, 0x30($sp)
    ctx->pc = 0x2361b8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2361bc: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x2361bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2361c0: 0x8e8283c0  lw          $v0, -0x7C40($s4)
    ctx->pc = 0x2361c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935488)));
label_2361c4:
    // 0x2361c4: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2361c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x2361c8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2361C8u;
    {
        const bool branch_taken_0x2361c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2361CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361C8u;
        // 0x2361cc: 0x27b300b0  addiu       $s3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361c8) {
            ctx->pc = 0x236204u;
            goto label_236204;
        }
    }
    ctx->pc = 0x2361D0u;
    // 0x2361d0: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x2361d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x2361d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2361d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2361d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2361D8u;
    {
        const bool branch_taken_0x2361d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2361DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361D8u;
        // 0x2361dc: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361d8) {
            ctx->pc = 0x236204u;
            goto label_236204;
        }
    }
    ctx->pc = 0x2361E0u;
label_2361e0:
    // 0x2361e0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2361e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2361e4: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2361e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2361e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2361e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2361ec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2361ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2361f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2361f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2361f4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2361f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2361f8: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x2361F8u;
    SET_GPR_U32(ctx, 31, 0x236200u);
    ctx->pc = 0x2361FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361F8u;
    // 0x2361fc: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x2361F8u, 0x236200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236200u;
label_236200:
    // 0x236200: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x236200u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_236204:
    // 0x236204: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x236204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x236208: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x236208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23620c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23620cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236210: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x236210u;
    SET_GPR_U32(ctx, 31, 0x236218u);
    ctx->pc = 0x236214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236210u;
    // 0x236214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x236210u, 0x236218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236218u;
label_236218:
    // 0x236218: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x236218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x23621c: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x23621cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x236220: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x236220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x236224: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236228: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x236228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23622c: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x23622Cu;
    SET_GPR_U32(ctx, 31, 0x236234u);
    ctx->pc = 0x236230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23622Cu;
    // 0x236230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x23622Cu, 0x236234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236234u;
label_236234:
    // 0x236234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x236234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236238: 0x3c014600  lui         $at, 0x4600
    ctx->pc = 0x236238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17920 << 16));
    // 0x23623c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x23623cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x236240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236244: 0x3c01c680  lui         $at, 0xC680
    ctx->pc = 0x236244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50816 << 16));
    // 0x236248: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x236248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23624c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23624cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x236250: 0x3c01c600  lui         $at, 0xC600
    ctx->pc = 0x236250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50688 << 16));
    // 0x236254: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x236254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x236258: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x236258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x23625c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23625cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x236260: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x236260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x236264: 0x0  nop
    ctx->pc = 0x236264u;
    // NOP
label_236268:
    // 0x236268: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x236268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23626c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x23626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236270: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x236270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x236274: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x236274u;
    {
        const bool branch_taken_0x236274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x236274) {
            ctx->pc = 0x236288u;
            goto label_236288;
        }
    }
    ctx->pc = 0x23627Cu;
    // 0x23627c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23627Cu;
    {
        const bool branch_taken_0x23627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23627Cu;
        // 0x236280: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23627c) {
            ctx->pc = 0x236298u;
            goto label_236298;
        }
    }
    ctx->pc = 0x236284u;
    // 0x236284: 0x0  nop
    ctx->pc = 0x236284u;
    // NOP
label_236288:
    // 0x236288: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x236288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23628c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x23628Cu;
    {
        const bool branch_taken_0x23628c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23628c) {
            ctx->pc = 0x236290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23628Cu;
            // 0x236290: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2362A0u;
            goto label_2362a0;
        }
    }
    ctx->pc = 0x236294u;
    // 0x236294: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x236294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_236298:
    // 0x236298: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x236298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x23629c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x23629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2362a0:
    // 0x2362a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2362a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2362a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2362a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2362a8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2362a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2362ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2362ACu;
    {
        const bool branch_taken_0x2362ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2362ac) {
            ctx->pc = 0x2362C0u;
            goto label_2362c0;
        }
    }
    ctx->pc = 0x2362B4u;
    // 0x2362b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2362B4u;
    {
        const bool branch_taken_0x2362b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2362B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362B4u;
        // 0x2362b8: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362b4) {
            ctx->pc = 0x2362D0u;
            goto label_2362d0;
        }
    }
    ctx->pc = 0x2362BCu;
    // 0x2362bc: 0x0  nop
    ctx->pc = 0x2362bcu;
    // NOP
label_2362c0:
    // 0x2362c0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2362c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2362c4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2362C4u;
    {
        const bool branch_taken_0x2362c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2362c4) {
            ctx->pc = 0x2362C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2362C4u;
            // 0x2362c8: 0x24620008  addiu       $v0, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2362D8u;
            goto label_2362d8;
        }
    }
    ctx->pc = 0x2362CCu;
    // 0x2362cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2362ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2362d0:
    // 0x2362d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2362d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2362d4: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2362d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2362d8:
    // 0x2362d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2362d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2362dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2362dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2362e0: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2362e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2362e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2362E4u;
    {
        const bool branch_taken_0x2362e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2362e4) {
            ctx->pc = 0x2362F8u;
            goto label_2362f8;
        }
    }
    ctx->pc = 0x2362ECu;
    // 0x2362ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2362ECu;
    {
        const bool branch_taken_0x2362ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2362F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362ECu;
        // 0x2362f0: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362ec) {
            ctx->pc = 0x236308u;
            goto label_236308;
        }
    }
    ctx->pc = 0x2362F4u;
    // 0x2362f4: 0x0  nop
    ctx->pc = 0x2362f4u;
    // NOP
label_2362f8:
    // 0x2362f8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2362f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2362fc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2362FCu;
    {
        const bool branch_taken_0x2362fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2362fc) {
            ctx->pc = 0x236300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2362FCu;
            // 0x236300: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236310u;
            goto label_236310;
        }
    }
    ctx->pc = 0x236304u;
    // 0x236304: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x236304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_236308:
    // 0x236308: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x236308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x23630c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23630cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_236310:
    // 0x236310: 0x14a6ffd5  bne         $a1, $a2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x236310u;
    {
        const bool branch_taken_0x236310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x236314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236310u;
        // 0x236314: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236310) {
            ctx->pc = 0x236268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236268;
        }
    }
    ctx->pc = 0x236318u;
    // 0x236318: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x236318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23631c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23631cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x236320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x236324: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x236324u;
    {
        const bool branch_taken_0x236324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x236328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236324u;
        // 0x236328: 0x27a200c0  addiu       $v0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236324) {
            ctx->pc = 0x23633Cu;
            goto label_23633c;
        }
    }
    ctx->pc = 0x23632Cu;
    // 0x23632c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x23632cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x236330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236334: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x236334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x236338: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x236338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_23633c:
    // 0x23633c: 0xc780869c  lwc1        $f0, -0x7964($gp)
    ctx->pc = 0x23633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236340: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x236340u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236344: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x236344u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x236348: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x236348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23634c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x23634cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x236350: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x236350u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x236354: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x236354u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236358: 0xc78086a0  lwc1        $f0, -0x7960($gp)
    ctx->pc = 0x236358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23635c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x23635cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x236360: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x236360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x236364: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x236364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x236368: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x236368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23636c: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x23636cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x236370: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x236370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236374: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x236374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x236378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23637c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23637cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236380: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x236380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x236384: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x236384u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x236388: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x236388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23638c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23638cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x236390: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x236390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x236394: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x236394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x236398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23639c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x23639cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2363a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2363a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2363a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2363a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2363a8: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2363a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2363ac: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2363acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2363b0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2363b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2363b4: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x2363b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2363b8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2363b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2363bc: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2363bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2363c0: 0xc7a80018  lwc1        $f8, 0x18($sp)
    ctx->pc = 0x2363c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2363c4: 0x0  nop
    ctx->pc = 0x2363c4u;
    // NOP
    // 0x2363c8: 0x0  nop
    ctx->pc = 0x2363c8u;
    // NOP
    // 0x2363cc: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x2363ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x2363d0: 0xc7a90020  lwc1        $f9, 0x20($sp)
    ctx->pc = 0x2363d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2363d4: 0xc7aa0024  lwc1        $f10, 0x24($sp)
    ctx->pc = 0x2363d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2363d8: 0xc7ab0028  lwc1        $f11, 0x28($sp)
    ctx->pc = 0x2363d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2363dc: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2363dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2363e0: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2363e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2363e4: 0xc7af00c0  lwc1        $f15, 0xC0($sp)
    ctx->pc = 0x2363e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2363e8: 0x0  nop
    ctx->pc = 0x2363e8u;
    // NOP
    // 0x2363ec: 0x0  nop
    ctx->pc = 0x2363ecu;
    // NOP
    // 0x2363f0: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x2363f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[1];
    // 0x2363f4: 0xc7b200c4  lwc1        $f18, 0xC4($sp)
    ctx->pc = 0x2363f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2363f8: 0xc7b300c8  lwc1        $f19, 0xC8($sp)
    ctx->pc = 0x2363f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2363fc: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2363fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236400: 0xc7a60030  lwc1        $f6, 0x30($sp)
    ctx->pc = 0x236400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x236404: 0xc7a70040  lwc1        $f7, 0x40($sp)
    ctx->pc = 0x236404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x236408: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x236408u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x23640c: 0x0  nop
    ctx->pc = 0x23640cu;
    // NOP
    // 0x236410: 0x0  nop
    ctx->pc = 0x236410u;
    // NOP
    // 0x236414: 0x46024203  div.s       $f8, $f8, $f2
    ctx->pc = 0x236414u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[8] = ctx->f[8] / ctx->f[2];
    // 0x236418: 0xc78286a4  lwc1        $f2, -0x795C($gp)
    ctx->pc = 0x236418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23641c: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x23641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x236420: 0xc7ac0104  lwc1        $f12, 0x104($sp)
    ctx->pc = 0x236420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x236424: 0xc7ad0108  lwc1        $f13, 0x108($sp)
    ctx->pc = 0x236424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x236428: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x236428u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x23642c: 0xc7ae0110  lwc1        $f14, 0x110($sp)
    ctx->pc = 0x23642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x236430: 0x460c2100  add.s       $f4, $f4, $f12
    ctx->pc = 0x236430u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x236434: 0xc7b00114  lwc1        $f16, 0x114($sp)
    ctx->pc = 0x236434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x236438: 0x0  nop
    ctx->pc = 0x236438u;
    // NOP
    // 0x23643c: 0x0  nop
    ctx->pc = 0x23643cu;
    // NOP
    // 0x236440: 0x460f4a43  div.s       $f9, $f9, $f15
    ctx->pc = 0x236440u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[9] = ctx->f[9] / ctx->f[15];
    // 0x236444: 0xc7b10118  lwc1        $f17, 0x118($sp)
    ctx->pc = 0x236444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x236448: 0xc78086a8  lwc1        $f0, -0x7958($gp)
    ctx->pc = 0x236448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23644c: 0xc78186ac  lwc1        $f1, -0x7954($gp)
    ctx->pc = 0x23644cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236450: 0x460d4200  add.s       $f8, $f8, $f13
    ctx->pc = 0x236450u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[13]);
    // 0x236454: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x236454u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x236458: 0x96430050  lhu         $v1, 0x50($s2)
    ctx->pc = 0x236458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x23645c: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x23645cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x236460: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x236460u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x236464: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x236464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x236468: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x236468u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23646c: 0x0  nop
    ctx->pc = 0x23646cu;
    // NOP
    // 0x236470: 0x0  nop
    ctx->pc = 0x236470u;
    // NOP
    // 0x236474: 0x46125283  div.s       $f10, $f10, $f18
    ctx->pc = 0x236474u;
    if (ctx->f[18] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[10] * 0.0f); } else ctx->f[10] = ctx->f[10] / ctx->f[18];
    // 0x236478: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x236478u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23647c: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x23647cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x236480: 0x460e4a40  add.s       $f9, $f9, $f14
    ctx->pc = 0x236480u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[14]);
    // 0x236484: 0xe7a70040  swc1        $f7, 0x40($sp)
    ctx->pc = 0x236484u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x236488: 0xe7a80018  swc1        $f8, 0x18($sp)
    ctx->pc = 0x236488u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23648c: 0x0  nop
    ctx->pc = 0x23648cu;
    // NOP
    // 0x236490: 0x0  nop
    ctx->pc = 0x236490u;
    // NOP
    // 0x236494: 0x46135ac3  div.s       $f11, $f11, $f19
    ctx->pc = 0x236494u;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[11] = copysignf(INFINITY, ctx->f[11] * 0.0f); } else ctx->f[11] = ctx->f[11] / ctx->f[19];
    // 0x236498: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x236498u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23649c: 0x46105280  add.s       $f10, $f10, $f16
    ctx->pc = 0x23649cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[16]);
    // 0x2364a0: 0xe7aa0024  swc1        $f10, 0x24($sp)
    ctx->pc = 0x2364a0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2364a4: 0x46115ac0  add.s       $f11, $f11, $f17
    ctx->pc = 0x2364a4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[17]);
    // 0x2364a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2364A8u;
    {
        const bool branch_taken_0x2364a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2364ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364A8u;
        // 0x2364ac: 0xe7ab0028  swc1        $f11, 0x28($sp) (Delay Slot)
        { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364a8) {
            ctx->pc = 0x2364C0u;
            goto label_2364c0;
        }
    }
    ctx->pc = 0x2364B0u;
    // 0x2364b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2364b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2364b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2364b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2364b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2364B8u;
    {
        const bool branch_taken_0x2364b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364B8u;
        // 0x2364bc: 0xc78086b0  lwc1        $f0, -0x7950($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364b8) {
            ctx->pc = 0x2364D4u;
            goto label_2364d4;
        }
    }
    ctx->pc = 0x2364C0u;
label_2364c0:
    // 0x2364c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2364c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2364c4: 0xc78186b4  lwc1        $f1, -0x794C($gp)
    ctx->pc = 0x2364c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2364c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2364c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2364cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2364ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2364d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2364d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2364d4:
    // 0x2364d4: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2364D4u;
    SET_GPR_U32(ctx, 31, 0x2364DCu);
    ctx->pc = 0x2364D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2364D4u;
    // 0x2364d8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2364D4u, 0x2364DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2364DCu;
label_2364dc:
    // 0x2364dc: 0x96430050  lhu         $v1, 0x50($s2)
    ctx->pc = 0x2364dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2364e0: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x2364e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2364e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2364e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2364e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2364E8u;
    {
        const bool branch_taken_0x2364e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2364ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364E8u;
        // 0x2364ec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364e8) {
            ctx->pc = 0x236500u;
            goto label_236500;
        }
    }
    ctx->pc = 0x2364F0u;
    // 0x2364f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2364f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2364f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2364f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2364f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2364F8u;
    {
        const bool branch_taken_0x2364f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364F8u;
        // 0x2364fc: 0xc78086b8  lwc1        $f0, -0x7948($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364f8) {
            ctx->pc = 0x236514u;
            goto label_236514;
        }
    }
    ctx->pc = 0x236500u;
label_236500:
    // 0x236500: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x236500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x236504: 0xc78186bc  lwc1        $f1, -0x7944($gp)
    ctx->pc = 0x236504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236508: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23650c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23650cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236510: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x236510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_236514:
    // 0x236514: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x236514u;
    SET_GPR_U32(ctx, 31, 0x23651Cu);
    ctx->pc = 0x236518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236514u;
    // 0x236518: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x236514u, 0x23651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23651Cu;
label_23651c:
    // 0x23651c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23651cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236520: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x236520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x236524: 0xc7a90020  lwc1        $f9, 0x20($sp)
    ctx->pc = 0x236524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x236528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23652c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x23652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236530: 0x46004942  mul.s       $f5, $f9, $f0
    ctx->pc = 0x236530u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x236534: 0xc7aa0028  lwc1        $f10, 0x28($sp)
    ctx->pc = 0x236534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x236538: 0x46140b02  mul.s       $f12, $f1, $f20
    ctx->pc = 0x236538u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x23653c: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x23653cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x236540: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x236540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x236544: 0xc7a70040  lwc1        $f7, 0x40($sp)
    ctx->pc = 0x236544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x236548: 0x46144a02  mul.s       $f8, $f9, $f20
    ctx->pc = 0x236548u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
    // 0x23654c: 0xc6430040  lwc1        $f3, 0x40($s2)
    ctx->pc = 0x23654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x236550: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x236550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236554: 0x46005402  mul.s       $f16, $f10, $f0
    ctx->pc = 0x236554u;
    ctx->f[16] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x236558: 0x460759c1  sub.s       $f7, $f11, $f7
    ctx->pc = 0x236558u;
    ctx->f[7] = FPU_SUB_S(ctx->f[11], ctx->f[7]);
    // 0x23655c: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x23655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x236560: 0x46051940  add.s       $f5, $f3, $f5
    ctx->pc = 0x236560u;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x236564: 0xc7af0014  lwc1        $f15, 0x14($sp)
    ctx->pc = 0x236564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x236568: 0x46081200  add.s       $f8, $f2, $f8
    ctx->pc = 0x236568u;
    ctx->f[8] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x23656c: 0xc6460044  lwc1        $f6, 0x44($s2)
    ctx->pc = 0x23656cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x236570: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x236570u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x236574: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x236574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236578: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x236578u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x23657c: 0xc78e86c0  lwc1        $f14, -0x7940($gp)
    ctx->pc = 0x23657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x236580: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x236580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x236584: 0xe6410080  swc1        $f1, 0x80($s2)
    ctx->pc = 0x236584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x236588: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x236588u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x23658c: 0xe64b006c  swc1        $f11, 0x6C($s2)
    ctx->pc = 0x23658cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x236590: 0x46145302  mul.s       $f12, $f10, $f20
    ctx->pc = 0x236590u;
    ctx->f[12] = FPU_MUL_S(ctx->f[10], ctx->f[20]);
    // 0x236594: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x236594u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x236598: 0x460d3040  add.s       $f1, $f6, $f13
    ctx->pc = 0x236598u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[13]);
    // 0x23659c: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x23659cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2365a0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2365a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2365a4: 0xe7aa0008  swc1        $f10, 0x8($sp)
    ctx->pc = 0x2365a4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2365a8: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2365a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2365ac: 0xe7ab000c  swc1        $f11, 0xC($sp)
    ctx->pc = 0x2365acu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2365b0: 0x460c2941  sub.s       $f5, $f5, $f12
    ctx->pc = 0x2365b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[12]);
    // 0x2365b4: 0xe64b007c  swc1        $f11, 0x7C($s2)
    ctx->pc = 0x2365b4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x2365b8: 0x46104200  add.s       $f8, $f8, $f16
    ctx->pc = 0x2365b8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[16]);
    // 0x2365bc: 0xe6410074  swc1        $f1, 0x74($s2)
    ctx->pc = 0x2365bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x2365c0: 0x460f3180  add.s       $f6, $f6, $f15
    ctx->pc = 0x2365c0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[15]);
    // 0x2365c4: 0xe6420068  swc1        $f2, 0x68($s2)
    ctx->pc = 0x2365c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x2365c8: 0x460e3834  c.lt.s      $f7, $f14
    ctx->pc = 0x2365c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2365cc: 0xe6430060  swc1        $f3, 0x60($s2)
    ctx->pc = 0x2365ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x2365d0: 0xe6450070  swc1        $f5, 0x70($s2)
    ctx->pc = 0x2365d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x2365d4: 0xe6480078  swc1        $f8, 0x78($s2)
    ctx->pc = 0x2365d4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x2365d8: 0xe6470088  swc1        $f7, 0x88($s2)
    ctx->pc = 0x2365d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x2365dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2365DCu;
    {
        const bool branch_taken_0x2365dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2365E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365DCu;
        // 0x2365e0: 0xe6460064  swc1        $f6, 0x64($s2) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365dc) {
            ctx->pc = 0x2365E8u;
            goto label_2365e8;
        }
    }
    ctx->pc = 0x2365E4u;
    // 0x2365e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2365e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2365e8:
    // 0x2365e8: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x2365e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x2365ec: 0x8e8283c0  lw          $v0, -0x7C40($s4)
    ctx->pc = 0x2365ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935488)));
    // 0x2365f0: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2365f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x2365f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2365F4u;
    {
        const bool branch_taken_0x2365f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2365F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365F4u;
        // 0x2365f8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365f4) {
            ctx->pc = 0x236618u;
            goto label_236618;
        }
    }
    ctx->pc = 0x2365FCu;
    // 0x2365fc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2365fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x236600: 0x8c62e028  lw          $v0, -0x1FD8($v1)
    ctx->pc = 0x236600u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3AE028u));
    // 0x236604: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x236604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x236608: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236608u;
    {
        const bool branch_taken_0x236608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236608u;
        // 0x23660c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236608) {
            ctx->pc = 0x236618u;
            goto label_236618;
        }
    }
    ctx->pc = 0x236610u;
    // 0x236610: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x236610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x236614: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x236614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236618:
    // 0x236618: 0xc78186c4  lwc1        $f1, -0x793C($gp)
    ctx->pc = 0x236618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23661c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23661cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236620: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x236620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x236624: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x236624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x236628: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x236628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x23662c: 0xe6420088  swc1        $f2, 0x88($s2)
    ctx->pc = 0x23662cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x236630: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x236630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x236634: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x236634u;
    {
        const bool branch_taken_0x236634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236634u;
        // 0x236638: 0xe6410084  swc1        $f1, 0x84($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x236634) {
            ctx->pc = 0x2366B8u;
            goto label_2366b8;
        }
    }
    ctx->pc = 0x23663Cu;
    // 0x23663c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x23663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x236640: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x236640u;
    {
        const bool branch_taken_0x236640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236640u;
        // 0x236644: 0x27b00150  addiu       $s0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236640) {
            ctx->pc = 0x2366B8u;
            goto label_2366b8;
        }
    }
    ctx->pc = 0x236648u;
    // 0x236648: 0x27b10160  addiu       $s1, $sp, 0x160
    ctx->pc = 0x236648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x23664c: 0x26530060  addiu       $s3, $s2, 0x60
    ctx->pc = 0x23664cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x236650: 0x26540070  addiu       $s4, $s2, 0x70
    ctx->pc = 0x236650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x236654: 0xc64c0080  lwc1        $f12, 0x80($s2)
    ctx->pc = 0x236654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x236658: 0x26560090  addiu       $s6, $s2, 0x90
    ctx->pc = 0x236658u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x23665c: 0xc64d00b0  lwc1        $f13, 0xB0($s2)
    ctx->pc = 0x23665cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x236660: 0x265500a0  addiu       $s5, $s2, 0xA0
    ctx->pc = 0x236660u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x236664: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x236664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x236668: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x236668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x23666c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23666cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236674: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x236674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236678: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x236678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23667c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x23667cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236680: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x236680u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236684: 0xc08daf8  jal         func_236BE0
    ctx->pc = 0x236684u;
    SET_GPR_U32(ctx, 31, 0x23668Cu);
    ctx->pc = 0x236688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236684u;
    // 0x236688: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x236684u, 0x23668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23668Cu;
label_23668c:
    // 0x23668c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x23668cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x236690: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x236690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x236694: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x236694u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x236698: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x236698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23669c: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x23669Cu;
    SET_GPR_U32(ctx, 31, 0x2366A4u);
    ctx->pc = 0x2366A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23669Cu;
    // 0x2366a0: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x23669Cu, 0x2366A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366A4u;
label_2366a4:
    // 0x2366a4: 0xc08c692  jal         func_231A48
    ctx->pc = 0x2366A4u;
    SET_GPR_U32(ctx, 31, 0x2366ACu);
    ctx->pc = 0x231A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A48u, 0x2366A4u, 0x2366ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366ACu;
label_2366ac:
    // 0x2366ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2366ACu;
    {
        const bool branch_taken_0x2366ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2366B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366ACu;
        // 0x2366b0: 0x7a630000  lq          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2366ac) {
            ctx->pc = 0x2366D4u;
            goto label_2366d4;
        }
    }
    ctx->pc = 0x2366B4u;
    // 0x2366b4: 0x0  nop
    ctx->pc = 0x2366b4u;
    // NOP
label_2366b8:
    // 0x2366b8: 0xc08c686  jal         func_231A18
    ctx->pc = 0x2366B8u;
    SET_GPR_U32(ctx, 31, 0x2366C0u);
    ctx->pc = 0x2366BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366B8u;
    // 0x2366bc: 0x26530060  addiu       $s3, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A18u, 0x2366B8u, 0x2366C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366C0u;
label_2366c0:
    // 0x2366c0: 0xc08c68a  jal         func_231A28
    ctx->pc = 0x2366C0u;
    SET_GPR_U32(ctx, 31, 0x2366C8u);
    ctx->pc = 0x2366C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366C0u;
    // 0x2366c4: 0x26540070  addiu       $s4, $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A28u, 0x2366C0u, 0x2366C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366C8u;
label_2366c8:
    // 0x2366c8: 0x26560090  addiu       $s6, $s2, 0x90
    ctx->pc = 0x2366c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2366cc: 0x265500a0  addiu       $s5, $s2, 0xA0
    ctx->pc = 0x2366ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x2366d0: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2366d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2366d4:
    // 0x2366d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2366d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2366d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2366dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366e0: 0x7ec30000  sq          $v1, 0x0($s6)
    ctx->pc = 0x2366e0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
    // 0x2366e4: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x2366e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2366e8: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x2366e8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x2366ec: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x2366ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2366f0: 0xc6410088  lwc1        $f1, 0x88($s2)
    ctx->pc = 0x2366f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2366f4: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x2366f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x2366f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2366f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2366fc: 0xe64000b0  swc1        $f0, 0xB0($s2)
    ctx->pc = 0x2366fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
    // 0x236700: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x236700u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x236704: 0xe64100b8  swc1        $f1, 0xB8($s2)
    ctx->pc = 0x236704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
    // 0x236708: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x236708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23670c: 0xc08cc4e  jal         func_233138
    ctx->pc = 0x23670Cu;
    SET_GPR_U32(ctx, 31, 0x236714u);
    ctx->pc = 0x236710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23670Cu;
    // 0x236710: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233138u, 0x23670Cu, 0x236714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236714u;
label_236714:
    // 0x236714: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x236714u;
    {
        const bool branch_taken_0x236714 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x236718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236714u;
        // 0x236718: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236714) {
            ctx->pc = 0x236758u;
            goto label_236758;
        }
    }
    ctx->pc = 0x23671Cu;
    // 0x23671c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x23671cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x236720: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x236720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x236724: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x236724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x236728: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x236728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x23672c: 0x5064000c  beql        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x23672Cu;
    {
        const bool branch_taken_0x23672c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x23672c) {
            ctx->pc = 0x236730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23672Cu;
            // 0x236730: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236760u;
            goto label_236760;
        }
    }
    ctx->pc = 0x236734u;
    // 0x236734: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x236734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236738: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x236738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23673c: 0xc78186c8  lwc1        $f1, -0x7938($gp)
    ctx->pc = 0x23673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236740: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x236740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x236744: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x236744u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x236748: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x236748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x23674c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23674Cu;
    {
        const bool branch_taken_0x23674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23674Cu;
        // 0x236750: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23674c) {
            ctx->pc = 0x236760u;
            goto label_236760;
        }
    }
    ctx->pc = 0x236754u;
    // 0x236754: 0x0  nop
    ctx->pc = 0x236754u;
    // NOP
label_236758:
    // 0x236758: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x236758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x23675c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x23675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_236760:
    // 0x236760: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x236760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x236764: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x236764u;
    {
        const bool branch_taken_0x236764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236764u;
        // 0x236768: 0xdfb00170  ld          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236764) {
            ctx->pc = 0x236788u;
            goto label_236788;
        }
    }
    ctx->pc = 0x23676Cu;
    // 0x23676c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x23676cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x236770: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x236770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x236774: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236774u;
    {
        const bool branch_taken_0x236774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236774u;
        // 0x236778: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236774) {
            ctx->pc = 0x236788u;
            goto label_236788;
        }
    }
    ctx->pc = 0x23677Cu;
    // 0x23677c: 0x50620002  beql        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23677Cu;
    {
        const bool branch_taken_0x23677c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23677c) {
            ctx->pc = 0x236780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23677Cu;
            // 0x236780: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236788u;
            goto label_236788;
        }
    }
    ctx->pc = 0x236784u;
    // 0x236784: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x236784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_236788:
    // 0x236788: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x236788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x23678c: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x23678cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x236790: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x236790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x236794: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x236794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x236798: 0xdfb50198  ld          $s5, 0x198($sp)
    ctx->pc = 0x236798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x23679c: 0xdfb601a0  ld          $s6, 0x1A0($sp)
    ctx->pc = 0x23679cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2367a0: 0xdfb701a8  ld          $s7, 0x1A8($sp)
    ctx->pc = 0x2367a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2367a4: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x2367a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2367a8: 0xc7b501c0  lwc1        $f21, 0x1C0($sp)
    ctx->pc = 0x2367a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2367ac: 0xc7b401b8  lwc1        $f20, 0x1B8($sp)
    ctx->pc = 0x2367acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2367b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2367B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2367B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367B0u;
        // 0x2367b4: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2367B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2367B8u;
}

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

// Function: sub_002C7348
// Address: 0x2c7348 - 0x2c76c0
void sub_002C7348_0x2c7348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7348_0x2c7348");
#endif

    switch (ctx->pc) {
        case 0x2c73e0u: goto label_2c73e0;
        case 0x2c7454u: goto label_2c7454;
        case 0x2c7470u: goto label_2c7470;
        case 0x2c7634u: goto label_2c7634;
        default: break;
    }

    ctx->pc = 0x2c7348u;

    // 0x2c7348: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2c7348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x2c734c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2c734cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7350: 0xffb001c0  sd          $s0, 0x1C0($sp)
    ctx->pc = 0x2c7350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 16));
    // 0x2c7354: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c7354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7358: 0xffb101c8  sd          $s1, 0x1C8($sp)
    ctx->pc = 0x2c7358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 17));
    // 0x2c735c: 0x25650006  addiu       $a1, $t3, 0x6
    ctx->pc = 0x2c735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x2c7360: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x2c7360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x2c7364: 0xffb301d8  sd          $s3, 0x1D8($sp)
    ctx->pc = 0x2c7364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 19));
    // 0x2c7368: 0xffb401e0  sd          $s4, 0x1E0($sp)
    ctx->pc = 0x2c7368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 20));
    // 0x2c736c: 0xffb501e8  sd          $s5, 0x1E8($sp)
    ctx->pc = 0x2c736cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 21));
    // 0x2c7370: 0xffb601f0  sd          $s6, 0x1F0($sp)
    ctx->pc = 0x2c7370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 22));
    // 0x2c7374: 0xffbf01f8  sd          $ra, 0x1F8($sp)
    ctx->pc = 0x2c7374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 31));
    // 0x2c7378: 0xe7b50208  swc1        $f21, 0x208($sp)
    ctx->pc = 0x2c7378u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x2c737c: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x2c737cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2c7380: 0x95730004  lhu         $s3, 0x4($t3)
    ctx->pc = 0x2c7380u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2c7384: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2c7384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2c7388: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c738c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C738Cu;
    {
        const bool branch_taken_0x2c738c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C738Cu;
        // 0x2c7390: 0x95630002  lhu         $v1, 0x2($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c738c) {
            ctx->pc = 0x2C73A0u;
            goto label_2c73a0;
        }
    }
    ctx->pc = 0x2C7394u;
    // 0x2c7394: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2c7394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2c7398: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7398u;
    {
        const bool branch_taken_0x2c7398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7398u;
        // 0x2c739c: 0xa24021  addu        $t0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7398) {
            ctx->pc = 0x2C73ACu;
            goto label_2c73ac;
        }
    }
    ctx->pc = 0x2C73A0u;
label_2c73a0:
    // 0x2c73a0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2c73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2c73a4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c73a8: 0x24480002  addiu       $t0, $v0, 0x2
    ctx->pc = 0x2c73a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2c73ac:
    // 0x2c73ac: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2c73acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c73b0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C73B0u;
    {
        const bool branch_taken_0x2c73b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c73b0) {
            ctx->pc = 0x2C73B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C73B0u;
            // 0x2c73b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C73C0u;
            goto label_2c73c0;
        }
    }
    ctx->pc = 0x2C73B8u;
    // 0x2c73b8: 0x4c20001  bltzl       $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C73B8u;
    {
        const bool branch_taken_0x2c73b8 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2c73b8) {
            ctx->pc = 0x2C73BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C73B8u;
            // 0x2c73bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C73C0u;
            goto label_2c73c0;
        }
    }
    ctx->pc = 0x2C73C0u;
label_2c73c0:
    // 0x2c73c0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c73c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c73c4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2c73c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c73c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c73c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c73cc: 0x1a600013  blez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C73CCu;
    {
        const bool branch_taken_0x2c73cc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2C73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73CCu;
        // 0x2c73d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73cc) {
            ctx->pc = 0x2C741Cu;
            goto label_2c741c;
        }
    }
    ctx->pc = 0x2C73D4u;
    // 0x2c73d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c73d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c73d8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2c73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c73dc: 0x0  nop
    ctx->pc = 0x2c73dcu;
    // NOP
label_2c73e0:
    // 0x2c73e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c73e4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2c73e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c73e8: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2c73e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c73ec: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x2c73ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c73f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C73F0u;
    {
        const bool branch_taken_0x2c73f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73F0u;
        // 0x2c73f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73f0) {
            ctx->pc = 0x2C7404u;
            goto label_2c7404;
        }
    }
    ctx->pc = 0x2C73F8u;
    // 0x2c73f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C73F8u;
    {
        const bool branch_taken_0x2c73f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73F8u;
        // 0x2c73fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73f8) {
            ctx->pc = 0x2C7404u;
            goto label_2c7404;
        }
    }
    ctx->pc = 0x2C7400u;
    // 0x2c7400: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c7400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7404:
    // 0x2c7404: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7404u;
    {
        const bool branch_taken_0x2c7404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7404u;
        // 0x2c7408: 0x891004  sllv        $v0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7404) {
            ctx->pc = 0x2C7410u;
            goto label_2c7410;
        }
    }
    ctx->pc = 0x2C740Cu;
    // 0x2c740c: 0x2a2a825  or          $s5, $s5, $v0
    ctx->pc = 0x2c740cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_2c7410:
    // 0x2c7410: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2c7410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c7414: 0x1c80fff2  bgtz        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2C7414u;
    {
        const bool branch_taken_0x2c7414 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2C7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7414u;
        // 0x2c7418: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7414) {
            ctx->pc = 0x2C73E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c73e0;
        }
    }
    ctx->pc = 0x2C741Cu;
label_2c741c:
    // 0x2c741c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c741cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c7420: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2c7420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7424: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2c7424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2c7428: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c7428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c742c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c742cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c7430: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c7430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7434: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2c7434u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7438: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2c7438u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c743c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x2c743cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2c7440: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2c7440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7444: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2c7444u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c7448: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c7448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c744c: 0xc0b19a0  jal         func_2C6680
    ctx->pc = 0x2C744Cu;
    SET_GPR_U32(ctx, 31, 0x2C7454u);
    ctx->pc = 0x2C7450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C744Cu;
    // 0x2c7450: 0x1652821  addu        $a1, $t3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6680u, 0x2C744Cu, 0x2C7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7454u;
label_2c7454:
    // 0x2c7454: 0x1260008d  beqz        $s3, . + 4 + (0x8D << 2)
    ctx->pc = 0x2C7454u;
    {
        const bool branch_taken_0x2c7454 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7454u;
        // 0x2c7458: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7454) {
            ctx->pc = 0x2C768Cu;
            goto label_2c768c;
        }
    }
    ctx->pc = 0x2C745Cu;
    // 0x2c745c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2c745cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c7460: 0x27b601a0  addiu       $s6, $sp, 0x1A0
    ctx->pc = 0x2c7460u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2c7464: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7468: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c7468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c746c: 0x0  nop
    ctx->pc = 0x2c746cu;
    // NOP
label_2c7470:
    // 0x2c7470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7474: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x2c7474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x2c7478: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x2c7478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x2c747c: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x2C747Cu;
    {
        const bool branch_taken_0x2c747c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C747Cu;
        // 0x2c7480: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c747c) {
            ctx->pc = 0x2C7660u;
            goto label_2c7660;
        }
    }
    ctx->pc = 0x2C7484u;
    // 0x2c7484: 0xc7819354  lwc1        $f1, -0x6CAC($gp)
    ctx->pc = 0x2c7484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7488: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c7488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c748c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C748Cu;
    {
        const bool branch_taken_0x2c748c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C748Cu;
        // 0x2c7490: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c748c) {
            ctx->pc = 0x2C74A0u;
            goto label_2c74a0;
        }
    }
    ctx->pc = 0x2C7494u;
    // 0x2c7494: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7498: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7498u;
    {
        const bool branch_taken_0x2c7498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7498u;
        // 0x2c749c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7498) {
            ctx->pc = 0x2C74A8u;
            goto label_2c74a8;
        }
    }
    ctx->pc = 0x2C74A0u;
label_2c74a0:
    // 0x2c74a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c74a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c74a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c74a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c74a8:
    // 0x2c74a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c74a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c74ac: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2c74acu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c74b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c74b4: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2c74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2c74b8: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2c74b8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2c74bc: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2c74bcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c74c0: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2c74c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c74c4: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2c74c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c74c8: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2c74c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c74cc: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2c74ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c74d0: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2c74d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c74d4: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2c74d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c74d8: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2c74d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c74dc: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2c74dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c74e0: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2c74e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c74e4: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2c74e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c74e8: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2c74e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c74ec: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2c74ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2c74f0: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2c74f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c74f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C74F4u;
    {
        const bool branch_taken_0x2c74f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C74F4u;
        // 0x2c74f8: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c74f4) {
            ctx->pc = 0x2C7508u;
            goto label_2c7508;
        }
    }
    ctx->pc = 0x2C74FCu;
    // 0x2c74fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c74fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c7500: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7500u;
    {
        const bool branch_taken_0x2c7500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7500u;
        // 0x2c7504: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7500) {
            ctx->pc = 0x2C7510u;
            goto label_2c7510;
        }
    }
    ctx->pc = 0x2C7508u;
label_2c7508:
    // 0x2c7508: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c7508u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c750c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2c750cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2c7510:
    // 0x2c7510: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x2c7510u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c7514: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x2c7514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c7518: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x2c7518u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c751c: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x2c751cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c7520: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2c7520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c7524: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x2c7524u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c7528: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x2c7528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c752c: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x2c752cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c7530: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x2c7530u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2c7534: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c7534u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c7538: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c7538u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2c753c: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c753cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2c7540: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2c7540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7544: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c7544u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c7548: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c7548u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c754c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c754cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2c7550: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2c7550u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2c7554: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c7554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7558: 0xc7819358  lwc1        $f1, -0x6CA8($gp)
    ctx->pc = 0x2c7558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c755c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C755Cu;
    {
        const bool branch_taken_0x2c755c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c755c) {
            ctx->pc = 0x2C7560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C755Cu;
            // 0x2c7560: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7570u;
            goto label_2c7570;
        }
    }
    ctx->pc = 0x2C7564u;
    // 0x2c7564: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7568: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7568u;
    {
        const bool branch_taken_0x2c7568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7568u;
        // 0x2c756c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7568) {
            ctx->pc = 0x2C7574u;
            goto label_2c7574;
        }
    }
    ctx->pc = 0x2C7570u;
label_2c7570:
    // 0x2c7570: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c7570u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7574:
    // 0x2c7574: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c7574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c7578: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2c7578u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c757c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c757cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c7580: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2c7580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2c7584: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2c7584u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2c7588: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2c7588u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c758c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2c758cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7590: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2c7590u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7594: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2c7594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7598: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c759c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2c759cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c75a0: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2c75a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c75a4: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2c75a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c75a8: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2c75a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c75ac: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2c75acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c75b0: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2c75b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c75b4: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2c75b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c75b8: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2c75b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2c75bc: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2c75bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c75c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C75C0u;
    {
        const bool branch_taken_0x2c75c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75C0u;
        // 0x2c75c4: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75c0) {
            ctx->pc = 0x2C75D8u;
            goto label_2c75d8;
        }
    }
    ctx->pc = 0x2C75C8u;
    // 0x2c75c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c75c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c75cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C75CCu;
    {
        const bool branch_taken_0x2c75cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C75D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75CCu;
        // 0x2c75d0: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75cc) {
            ctx->pc = 0x2C75E0u;
            goto label_2c75e0;
        }
    }
    ctx->pc = 0x2C75D4u;
    // 0x2c75d4: 0x0  nop
    ctx->pc = 0x2c75d4u;
    // NOP
label_2c75d8:
    // 0x2c75d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c75d8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c75dc: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2c75dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2c75e0:
    // 0x2c75e0: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2c75e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c75e4: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2c75e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c75e8: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2c75e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c75ec: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2c75ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c75f0: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2c75f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c75f4: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2c75f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c75f8: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2c75f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c75fc: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2c75fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c7600: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2c7600u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c7604: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x2c7604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c7608: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x2c7608u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2c760c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c760cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c7610: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c7610u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2c7614: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c7614u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2c7618: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2c7618u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2c761c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c761cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c7620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c7620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7624: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x2c7624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7628: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2c7628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c762c: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2C762Cu;
    SET_GPR_U32(ctx, 31, 0x2C7634u);
    ctx->pc = 0x2C7630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C762Cu;
    // 0x2c7630: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2C762Cu, 0x2C7634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7634u;
label_2c7634:
    // 0x2c7634: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2c7634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7638: 0xdad00000  lqc2        $vf16, 0x0($s6)
    ctx->pc = 0x2c7638u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2c763c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c763cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c7640: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c7640u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c7644: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2c7644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2c7648: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2c7648u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2c764c: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x2c764cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x2c7650: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x2c7650u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2c7654: 0x46000004  c1          0x4
    ctx->pc = 0x2c7654u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c7658: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7658u;
    {
        const bool branch_taken_0x2c7658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7658u;
        // 0x2c765c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7658) {
            ctx->pc = 0x2C7678u;
            goto label_2c7678;
        }
    }
    ctx->pc = 0x2C7660u;
label_2c7660:
    // 0x2c7660: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2c7660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7664: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2c7664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7668: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2c7668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2c766c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2c766cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2c7670: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2c7670u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2c7674: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x2c7674u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2c7678:
    // 0x2c7678: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2c7678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2c767c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2c767cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2c7680: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x2c7680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2c7684: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x2C7684u;
    {
        const bool branch_taken_0x2c7684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7684u;
        // 0x2c7688: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7684) {
            ctx->pc = 0x2C7470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7470;
        }
    }
    ctx->pc = 0x2C768Cu;
label_2c768c:
    // 0x2c768c: 0xdfb001c0  ld          $s0, 0x1C0($sp)
    ctx->pc = 0x2c768cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2c7690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7694: 0xdfb101c8  ld          $s1, 0x1C8($sp)
    ctx->pc = 0x2c7694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2c7698: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x2c7698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2c769c: 0xdfb301d8  ld          $s3, 0x1D8($sp)
    ctx->pc = 0x2c769cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2c76a0: 0xdfb401e0  ld          $s4, 0x1E0($sp)
    ctx->pc = 0x2c76a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2c76a4: 0xdfb501e8  ld          $s5, 0x1E8($sp)
    ctx->pc = 0x2c76a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2c76a8: 0xdfb601f0  ld          $s6, 0x1F0($sp)
    ctx->pc = 0x2c76a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2c76ac: 0xdfbf01f8  ld          $ra, 0x1F8($sp)
    ctx->pc = 0x2c76acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2c76b0: 0xc7b50208  lwc1        $f21, 0x208($sp)
    ctx->pc = 0x2c76b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c76b4: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x2c76b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c76b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C76B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76B8u;
        // 0x2c76bc: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C76B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C76C0u;
}

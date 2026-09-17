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

// Function: sub_001F6DD0
// Address: 0x1f6dd0 - 0x1f7ab0
void sub_001F6DD0_0x1f6dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6DD0_0x1f6dd0");
#endif

    switch (ctx->pc) {
        case 0x1f6ec0u: goto label_1f6ec0;
        case 0x1f6f08u: goto label_1f6f08;
        case 0x1f6fccu: goto label_1f6fcc;
        case 0x1f7078u: goto label_1f7078;
        case 0x1f710cu: goto label_1f710c;
        case 0x1f711cu: goto label_1f711c;
        case 0x1f71fcu: goto label_1f71fc;
        case 0x1f720cu: goto label_1f720c;
        case 0x1f7240u: goto label_1f7240;
        case 0x1f7250u: goto label_1f7250;
        case 0x1f7264u: goto label_1f7264;
        case 0x1f7274u: goto label_1f7274;
        case 0x1f7450u: goto label_1f7450;
        case 0x1f7470u: goto label_1f7470;
        case 0x1f7484u: goto label_1f7484;
        case 0x1f7498u: goto label_1f7498;
        case 0x1f7534u: goto label_1f7534;
        case 0x1f7544u: goto label_1f7544;
        case 0x1f76acu: goto label_1f76ac;
        case 0x1f76e8u: goto label_1f76e8;
        case 0x1f76f4u: goto label_1f76f4;
        case 0x1f7700u: goto label_1f7700;
        case 0x1f770cu: goto label_1f770c;
        case 0x1f777cu: goto label_1f777c;
        case 0x1f77a8u: goto label_1f77a8;
        case 0x1f78e8u: goto label_1f78e8;
        case 0x1f78f4u: goto label_1f78f4;
        case 0x1f7910u: goto label_1f7910;
        case 0x1f791cu: goto label_1f791c;
        case 0x1f792cu: goto label_1f792c;
        case 0x1f793cu: goto label_1f793c;
        case 0x1f7a64u: goto label_1f7a64;
        default: break;
    }

    ctx->pc = 0x1f6dd0u;

    // 0x1f6dd0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1f6dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1f6dd4: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x1f6dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
    // 0x1f6dd8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f6dd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ddc: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x1f6ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x1f6de0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1f6de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1f6de4: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x1f6de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x1f6de8: 0x248288d0  addiu       $v0, $a0, -0x7730
    ctx->pc = 0x1f6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936784));
    // 0x1f6dec: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x1f6decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x1f6df0: 0x2ea30025  sltiu       $v1, $s5, 0x25
    ctx->pc = 0x1f6df0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x1f6df4: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x1f6df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
    // 0x1f6df8: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x1f6df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x1f6dfc: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x1f6dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x1f6e00: 0xe7b80188  swc1        $f24, 0x188($sp)
    ctx->pc = 0x1f6e00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1f6e04: 0xe7b70180  swc1        $f23, 0x180($sp)
    ctx->pc = 0x1f6e04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1f6e08: 0xe7b60178  swc1        $f22, 0x178($sp)
    ctx->pc = 0x1f6e08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x1f6e0c: 0xe7b50170  swc1        $f21, 0x170($sp)
    ctx->pc = 0x1f6e0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1f6e10: 0xe7b40168  swc1        $f20, 0x168($sp)
    ctx->pc = 0x1f6e10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1f6e14: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x1f6e14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f6e18: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1F6E18u;
    {
        const bool branch_taken_0x1f6e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E18u;
        // 0x1f6e1c: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e18) {
            ctx->pc = 0x1F6EB8u;
            goto label_1f6eb8;
        }
    }
    ctx->pc = 0x1F6E20u;
    // 0x1f6e20: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1f6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1f6e24: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f6e28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f6e2c: 0x8c6334c0  lw          $v1, 0x34C0($v1)
    ctx->pc = 0x1f6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13504)));
    // 0x1f6e30: 0x600008  jr          $v1
    ctx->pc = 0x1F6E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F6E38u: goto label_1f6e38;
            case 0x1F6E78u: goto label_1f6e78;
            case 0x1F6EB8u: goto label_1f6eb8;
            case 0x1F7448u: goto label_1f7448;
            case 0x1F7478u: goto label_1f7478;
            case 0x1F7698u: goto label_1f7698;
            case 0x1F7740u: goto label_1f7740;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6E30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F6E38u;
label_1f6e38:
    // 0x1f6e38: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1f6e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x1f6e3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6e40: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x1f6e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x1f6e44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f6e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6e48: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f6e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f6e4c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1f6e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f6e50: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1f6e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1f6e54: 0xe6420020  swc1        $f2, 0x20($s2)
    ctx->pc = 0x1f6e54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1f6e58: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1f6e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1f6e5c: 0xe6400750  swc1        $f0, 0x750($s2)
    ctx->pc = 0x1f6e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x1f6e60: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x1f6e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1f6e64: 0xe6410758  swc1        $f1, 0x758($s2)
    ctx->pc = 0x1f6e64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
    // 0x1f6e68: 0xa640007a  sh          $zero, 0x7A($s2)
    ctx->pc = 0x1f6e68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6e6c: 0xa640000e  sh          $zero, 0xE($s2)
    ctx->pc = 0x1f6e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6e70: 0x1000028f  b           . + 4 + (0x28F << 2)
    ctx->pc = 0x1F6E70u;
    {
        const bool branch_taken_0x1f6e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E70u;
        // 0x1f6e74: 0xe6420074  swc1        $f2, 0x74($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e70) {
            ctx->pc = 0x1F78B0u;
            goto label_1f78b0;
        }
    }
    ctx->pc = 0x1F6E78u;
label_1f6e78:
    // 0x1f6e78: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1f6e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1f6e7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6e80: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x1f6e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x1f6e84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f6e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6e88: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f6e88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f6e8c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1f6e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1f6e90: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1f6e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1f6e94: 0xe6620020  swc1        $f2, 0x20($s3)
    ctx->pc = 0x1f6e94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x1f6e98: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1f6e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1f6e9c: 0xe6600750  swc1        $f0, 0x750($s3)
    ctx->pc = 0x1f6e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1872), bits); }
    // 0x1f6ea0: 0xe661001c  swc1        $f1, 0x1C($s3)
    ctx->pc = 0x1f6ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x1f6ea4: 0xe6610758  swc1        $f1, 0x758($s3)
    ctx->pc = 0x1f6ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1880), bits); }
    // 0x1f6ea8: 0xa660007a  sh          $zero, 0x7A($s3)
    ctx->pc = 0x1f6ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 122), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6eac: 0xa660000e  sh          $zero, 0xE($s3)
    ctx->pc = 0x1f6eacu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6eb0: 0x1000027f  b           . + 4 + (0x27F << 2)
    ctx->pc = 0x1F6EB0u;
    {
        const bool branch_taken_0x1f6eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EB0u;
        // 0x1f6eb4: 0xe6620074  swc1        $f2, 0x74($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6eb0) {
            ctx->pc = 0x1F78B0u;
            goto label_1f78b0;
        }
    }
    ctx->pc = 0x1F6EB8u;
label_1f6eb8:
    // 0x1f6eb8: 0xc091726  jal         func_245C98
    ctx->pc = 0x1F6EB8u;
    SET_GPR_U32(ctx, 31, 0x1F6EC0u);
    ctx->pc = 0x1F6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6EB8u;
    // 0x1f6ebc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x1F6EB8u, 0x1F6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6EC0u;
label_1f6ec0:
    // 0x1f6ec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f6ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ec4: 0x26a2ffe4  addiu       $v0, $s5, -0x1C
    ctx->pc = 0x1f6ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967268));
    // 0x1f6ec8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f6ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f6ecc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1F6ECCu;
    {
        const bool branch_taken_0x1f6ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6ecc) {
            ctx->pc = 0x1F6F90u;
            goto label_1f6f90;
        }
    }
    ctx->pc = 0x1F6ED4u;
    // 0x1f6ed4: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1f6ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x1f6ed8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f6ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6edc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6ee0: 0xaf80c898  sw          $zero, -0x3768($gp)
    ctx->pc = 0x1f6ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953112), GPR_U32(ctx, 0));
    // 0x1f6ee4: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x1f6ee4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x1f6ee8: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x1f6ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1f6eec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f6eecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f6ef0: 0xe6410758  swc1        $f1, 0x758($s2)
    ctx->pc = 0x1f6ef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
    // 0x1f6ef4: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1f6ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1f6ef8: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1f6ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1f6efc: 0xe6400750  swc1        $f0, 0x750($s2)
    ctx->pc = 0x1f6efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x1f6f00: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x1F6F00u;
    SET_GPR_U32(ctx, 31, 0x1F6F08u);
    ctx->pc = 0x1F6F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6F00u;
    // 0x1f6f04: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x1F6F00u, 0x1F6F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F08u;
label_1f6f08:
    // 0x1f6f08: 0xc781808c  lwc1        $f1, -0x7F74($gp)
    ctx->pc = 0x1f6f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6f0c: 0xc7828090  lwc1        $f2, -0x7F70($gp)
    ctx->pc = 0x1f6f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f6f10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6f14: 0xc7838094  lwc1        $f3, -0x7F6C($gp)
    ctx->pc = 0x1f6f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f6f18: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f6f18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f6f1c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f6f1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f6f20: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1f6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f6f24: 0xa642007a  sh          $v0, 0x7A($s2)
    ctx->pc = 0x1f6f24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f6f28: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1f6f28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1f6f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f6f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6f30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f6f34: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f6f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1f6f38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f6f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f6f3c: 0x0  nop
    ctx->pc = 0x1f6f3cu;
    // NOP
    // 0x1f6f40: 0x0  nop
    ctx->pc = 0x1f6f40u;
    // NOP
    // 0x1f6f44: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x1f6f44u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[3];
    // 0x1f6f48: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1f6f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6f4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6F4Cu;
    {
        const bool branch_taken_0x1f6f4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F4Cu;
        // 0x1f6f50: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f4c) {
            ctx->pc = 0x1F6F60u;
            goto label_1f6f60;
        }
    }
    ctx->pc = 0x1F6F54u;
    // 0x1f6f54: 0xc7808098  lwc1        $f0, -0x7F68($gp)
    ctx->pc = 0x1f6f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6F58u;
    {
        const bool branch_taken_0x1f6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F58u;
        // 0x1f6f5c: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f58) {
            ctx->pc = 0x1F6F78u;
            goto label_1f6f78;
        }
    }
    ctx->pc = 0x1F6F60u;
label_1f6f60:
    // 0x1f6f60: 0xc780809c  lwc1        $f0, -0x7F64($gp)
    ctx->pc = 0x1f6f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f64: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1f6f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6f68: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6F68u;
    {
        const bool branch_taken_0x1f6f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6f68) {
            ctx->pc = 0x1F6F78u;
            goto label_1f6f78;
        }
    }
    ctx->pc = 0x1F6F70u;
    // 0x1f6f70: 0xc78080a0  lwc1        $f0, -0x7F60($gp)
    ctx->pc = 0x1f6f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f74: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1f6f74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f6f78:
    // 0x1f6f78: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1f6f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1f6f7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f6f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6f80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6f84: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1F6F84u;
    {
        const bool branch_taken_0x1f6f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F84u;
        // 0x1f6f88: 0xe6430020  swc1        $f3, 0x20($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f84) {
            ctx->pc = 0x1F7050u;
            goto label_1f7050;
        }
    }
    ctx->pc = 0x1F6F8Cu;
    // 0x1f6f8c: 0x0  nop
    ctx->pc = 0x1f6f8cu;
    // NOP
label_1f6f90:
    // 0x1f6f90: 0x14a00059  bnez        $a1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1F6F90u;
    {
        const bool branch_taken_0x1f6f90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F90u;
        // 0x1f6f94: 0x8f82c898  lw          $v0, -0x3768($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f90) {
            ctx->pc = 0x1F70F8u;
            goto label_1f70f8;
        }
    }
    ctx->pc = 0x1F6F98u;
    // 0x1f6f98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f6f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6f9c: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1f6f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x1f6fa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6fa4: 0xaf80c898  sw          $zero, -0x3768($gp)
    ctx->pc = 0x1f6fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953112), GPR_U32(ctx, 0));
    // 0x1f6fa8: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x1f6fa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x1f6fac: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x1f6facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1f6fb0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f6fb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f6fb4: 0xe6410758  swc1        $f1, 0x758($s2)
    ctx->pc = 0x1f6fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
    // 0x1f6fb8: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1f6fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1f6fbc: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1f6fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1f6fc0: 0xe6400750  swc1        $f0, 0x750($s2)
    ctx->pc = 0x1f6fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x1f6fc4: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x1F6FC4u;
    SET_GPR_U32(ctx, 31, 0x1F6FCCu);
    ctx->pc = 0x1F6FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6FC4u;
    // 0x1f6fc8: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x1F6FC4u, 0x1F6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6FCCu;
label_1f6fcc:
    // 0x1f6fcc: 0xc78180a4  lwc1        $f1, -0x7F5C($gp)
    ctx->pc = 0x1f6fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6fd0: 0xc78280a8  lwc1        $f2, -0x7F58($gp)
    ctx->pc = 0x1f6fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f6fd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6fd8: 0xc78380ac  lwc1        $f3, -0x7F54($gp)
    ctx->pc = 0x1f6fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f6fdc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f6fdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f6fe0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f6fe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f6fe4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1f6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f6fe8: 0xa642007a  sh          $v0, 0x7A($s2)
    ctx->pc = 0x1f6fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f6fec: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1f6fecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1f6ff0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f6ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6ff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f6ff8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f6ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1f6ffc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f6ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f7000: 0x0  nop
    ctx->pc = 0x1f7000u;
    // NOP
    // 0x1f7004: 0x0  nop
    ctx->pc = 0x1f7004u;
    // NOP
    // 0x1f7008: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x1f7008u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[3];
    // 0x1f700c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1f700cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7010: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7010u;
    {
        const bool branch_taken_0x1f7010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7010u;
        // 0x1f7014: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7010) {
            ctx->pc = 0x1F7028u;
            goto label_1f7028;
        }
    }
    ctx->pc = 0x1F7018u;
    // 0x1f7018: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1f7018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f701c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F701Cu;
    {
        const bool branch_taken_0x1f701c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F701Cu;
        // 0x1f7020: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f701c) {
            ctx->pc = 0x1F7040u;
            goto label_1f7040;
        }
    }
    ctx->pc = 0x1F7024u;
    // 0x1f7024: 0x0  nop
    ctx->pc = 0x1f7024u;
    // NOP
label_1f7028:
    // 0x1f7028: 0xc78080b4  lwc1        $f0, -0x7F4C($gp)
    ctx->pc = 0x1f7028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f702c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1f702cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7030: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7030u;
    {
        const bool branch_taken_0x1f7030 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7030) {
            ctx->pc = 0x1F7040u;
            goto label_1f7040;
        }
    }
    ctx->pc = 0x1F7038u;
    // 0x1f7038: 0xc78080b8  lwc1        $f0, -0x7F48($gp)
    ctx->pc = 0x1f7038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f703c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1f703cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f7040:
    // 0x1f7040: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f7040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7044: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1f7044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1f7048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f7048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f704c: 0xe6430020  swc1        $f3, 0x20($s2)
    ctx->pc = 0x1f704cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1f7050:
    // 0x1f7050: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x1f7050u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x1f7054: 0xe6430074  swc1        $f3, 0x74($s2)
    ctx->pc = 0x1f7054u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x1f7058: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f7058u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f705c: 0xe661001c  swc1        $f1, 0x1C($s3)
    ctx->pc = 0x1f705cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x1f7060: 0xe6610758  swc1        $f1, 0x758($s3)
    ctx->pc = 0x1f7060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1880), bits); }
    // 0x1f7064: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1f7064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1f7068: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1f7068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1f706c: 0xe6600750  swc1        $f0, 0x750($s3)
    ctx->pc = 0x1f706cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1872), bits); }
    // 0x1f7070: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x1F7070u;
    SET_GPR_U32(ctx, 31, 0x1F7078u);
    ctx->pc = 0x1F7074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7070u;
    // 0x1f7074: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x1F7070u, 0x1F7078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7078u;
label_1f7078:
    // 0x1f7078: 0xc78180bc  lwc1        $f1, -0x7F44($gp)
    ctx->pc = 0x1f7078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f707c: 0xc78280c0  lwc1        $f2, -0x7F40($gp)
    ctx->pc = 0x1f707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7080: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f7080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f7084: 0xc78380c4  lwc1        $f3, -0x7F3C($gp)
    ctx->pc = 0x1f7084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7088: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f7088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f708c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f708cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f7090: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1f7090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f7094: 0xa662007a  sh          $v0, 0x7A($s3)
    ctx->pc = 0x1f7094u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f7098: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1f7098u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1f709c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f709cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f70a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f70a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f70a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f70a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1f70a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f70a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f70ac: 0x0  nop
    ctx->pc = 0x1f70acu;
    // NOP
    // 0x1f70b0: 0x0  nop
    ctx->pc = 0x1f70b0u;
    // NOP
    // 0x1f70b4: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x1f70b4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[3];
    // 0x1f70b8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1f70b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f70bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F70BCu;
    {
        const bool branch_taken_0x1f70bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F70C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70BCu;
        // 0x1f70c0: 0xa662000e  sh          $v0, 0xE($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70bc) {
            ctx->pc = 0x1F70D0u;
            goto label_1f70d0;
        }
    }
    ctx->pc = 0x1F70C4u;
    // 0x1f70c4: 0xc78080c8  lwc1        $f0, -0x7F38($gp)
    ctx->pc = 0x1f70c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f70c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F70C8u;
    {
        const bool branch_taken_0x1f70c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F70CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70C8u;
        // 0x1f70cc: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70c8) {
            ctx->pc = 0x1F70E8u;
            goto label_1f70e8;
        }
    }
    ctx->pc = 0x1F70D0u;
label_1f70d0:
    // 0x1f70d0: 0xc78080cc  lwc1        $f0, -0x7F34($gp)
    ctx->pc = 0x1f70d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f70d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f70d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f70d8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F70D8u;
    {
        const bool branch_taken_0x1f70d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f70d8) {
            ctx->pc = 0x1F70DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F70D8u;
            // 0x1f70dc: 0xe6610020  swc1        $f1, 0x20($s3) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F70ECu;
            goto label_1f70ec;
        }
    }
    ctx->pc = 0x1F70E0u;
    // 0x1f70e0: 0xc78080d0  lwc1        $f0, -0x7F30($gp)
    ctx->pc = 0x1f70e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f70e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f70e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f70e8:
    // 0x1f70e8: 0xe6610020  swc1        $f1, 0x20($s3)
    ctx->pc = 0x1f70e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1f70ec:
    // 0x1f70ec: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1F70ECu;
    {
        const bool branch_taken_0x1f70ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70ECu;
        // 0x1f70f0: 0xe6610074  swc1        $f1, 0x74($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70ec) {
            ctx->pc = 0x1F7320u;
            goto label_1f7320;
        }
    }
    ctx->pc = 0x1F70F4u;
    // 0x1f70f4: 0x0  nop
    ctx->pc = 0x1f70f4u;
    // NOP
label_1f70f8:
    // 0x1f70f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f70f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70fc: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1f70fcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f7100: 0x8010  mfhi        $s0
    ctx->pc = 0x1f7100u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1f7104: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F7104u;
    SET_GPR_U32(ctx, 31, 0x1F710Cu);
    ctx->pc = 0x1F7108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7104u;
    // 0x1f7108: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F7104u, 0x1F710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F710Cu;
label_1f710c:
    // 0x1f710c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7114: 0xc0917c0  jal         func_245F00
    ctx->pc = 0x1F7114u;
    SET_GPR_U32(ctx, 31, 0x1F711Cu);
    ctx->pc = 0x1F7118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7114u;
    // 0x1f7118: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F00u, 0x1F7114u, 0x1F711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F711Cu;
label_1f711c:
    // 0x1f711c: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1f711cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7120: 0xc4550004  lwc1        $f21, 0x4($v0)
    ctx->pc = 0x1f7120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f7124: 0xc78080d4  lwc1        $f0, -0x7F2C($gp)
    ctx->pc = 0x1f7124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7128: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x1f7128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f712c: 0x4600a886  mov.s       $f2, $f21
    ctx->pc = 0x1f712cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[21]);
    // 0x1f7130: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x1f7130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1f7134: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1f7134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7138: 0xe6410750  swc1        $f1, 0x750($s2)
    ctx->pc = 0x1f7138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x1f713c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1f713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7140: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1f7140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1f7144: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1f7144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1f7148: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7148u;
    {
        const bool branch_taken_0x1f7148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7148u;
        // 0x1f714c: 0xe6400758  swc1        $f0, 0x758($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7148) {
            ctx->pc = 0x1F7160u;
            goto label_1f7160;
        }
    }
    ctx->pc = 0x1F7150u;
    // 0x1f7150: 0xc78080d8  lwc1        $f0, -0x7F28($gp)
    ctx->pc = 0x1f7150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7154: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7154u;
    {
        const bool branch_taken_0x1f7154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7154u;
        // 0x1f7158: 0x4600a881  sub.s       $f2, $f21, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7154) {
            ctx->pc = 0x1F7178u;
            goto label_1f7178;
        }
    }
    ctx->pc = 0x1F715Cu;
    // 0x1f715c: 0x0  nop
    ctx->pc = 0x1f715cu;
    // NOP
label_1f7160:
    // 0x1f7160: 0xc78080dc  lwc1        $f0, -0x7F24($gp)
    ctx->pc = 0x1f7160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7164: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1f7164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7168: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7168u;
    {
        const bool branch_taken_0x1f7168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7168) {
            ctx->pc = 0x1F7178u;
            goto label_1f7178;
        }
    }
    ctx->pc = 0x1F7170u;
    // 0x1f7170: 0xc78080e0  lwc1        $f0, -0x7F20($gp)
    ctx->pc = 0x1f7170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7174: 0x4600a880  add.s       $f2, $f21, $f0
    ctx->pc = 0x1f7174u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1f7178:
    // 0x1f7178: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f717c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f717cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7180: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7180u;
    {
        const bool branch_taken_0x1f7180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7180) {
            ctx->pc = 0x1F7190u;
            goto label_1f7190;
        }
    }
    ctx->pc = 0x1F7188u;
    // 0x1f7188: 0xc78080e4  lwc1        $f0, -0x7F1C($gp)
    ctx->pc = 0x1f7188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f718c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f718cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f7190:
    // 0x1f7190: 0xc78080e8  lwc1        $f0, -0x7F18($gp)
    ctx->pc = 0x1f7190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7194: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1f7194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1f7198: 0xc78180ec  lwc1        $f1, -0x7F14($gp)
    ctx->pc = 0x1f7198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f719c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f719cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1f71a0: 0x0  nop
    ctx->pc = 0x1f71a0u;
    // NOP
    // 0x1f71a4: 0x0  nop
    ctx->pc = 0x1f71a4u;
    // NOP
    // 0x1f71a8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f71a8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f71ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f71acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f71b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f71b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f71b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f71b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f71b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f71b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f71bc: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x1f71bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f71c0: 0x12a30002  beq         $s5, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F71C0u;
    {
        const bool branch_taken_0x1f71c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71C0u;
        // 0x1f71c4: 0xa642007a  sh          $v0, 0x7A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71c0) {
            ctx->pc = 0x1F71CCu;
            goto label_1f71cc;
        }
    }
    ctx->pc = 0x1F71C8u;
    // 0x1f71c8: 0xe6550020  swc1        $f21, 0x20($s2)
    ctx->pc = 0x1f71c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1f71cc:
    // 0x1f71cc: 0xe6550074  swc1        $f21, 0x74($s2)
    ctx->pc = 0x1f71ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x1f71d0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1f71d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f71d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f71d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71d8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f71d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f71dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f71dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f71e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f71e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f71e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f71e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f71e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f71e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f71ec: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1f71ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f71f0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1f71f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f71f4: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F71F4u;
    SET_GPR_U32(ctx, 31, 0x1F71FCu);
    ctx->pc = 0x1F71F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F71F4u;
    // 0x1f71f8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F71F4u, 0x1F71FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71FCu;
label_1f71fc:
    // 0x1f71fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f71fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7200: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7204: 0xc0917c0  jal         func_245F00
    ctx->pc = 0x1F7204u;
    SET_GPR_U32(ctx, 31, 0x1F720Cu);
    ctx->pc = 0x1F7208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7204u;
    // 0x1f7208: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F00u, 0x1F7204u, 0x1F720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F720Cu;
label_1f720c:
    // 0x1f720c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1f720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7210: 0xc4550004  lwc1        $f21, 0x4($v0)
    ctx->pc = 0x1f7210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f7214: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f7214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f7218: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1f7218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f721c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1f721cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f7220: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1f7220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1f7224: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f7224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f722c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f722cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7230: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1f7230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7234: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x1f7234u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1f7238: 0xc084784  jal         func_211E10
    ctx->pc = 0x1F7238u;
    SET_GPR_U32(ctx, 31, 0x1F7240u);
    ctx->pc = 0x1F723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7238u;
    // 0x1f723c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x1F7238u, 0x1F7240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7240u;
label_1f7240:
    // 0x1f7240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7248: 0xc0847da  jal         func_211F68
    ctx->pc = 0x1F7248u;
    SET_GPR_U32(ctx, 31, 0x1F7250u);
    ctx->pc = 0x1F724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7248u;
    // 0x1f724c: 0xe7b4002c  swc1        $f20, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x1F7248u, 0x1F7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7250u;
label_1f7250:
    // 0x1f7250: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x1f7250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x1f7254: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f7254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f7258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f725c: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x1F725Cu;
    SET_GPR_U32(ctx, 31, 0x1F7264u);
    ctx->pc = 0x1F7260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F725Cu;
    // 0x1f7260: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x1F725Cu, 0x1F7264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7264u;
label_1f7264:
    // 0x1f7264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7268: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f7268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f726c: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x1F726Cu;
    SET_GPR_U32(ctx, 31, 0x1F7274u);
    ctx->pc = 0x1F7270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F726Cu;
    // 0x1f7270: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x1F726Cu, 0x1F7274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7274u;
label_1f7274:
    // 0x1f7274: 0x4600a886  mov.s       $f2, $f21
    ctx->pc = 0x1f7274u;
    ctx->f[2] = FPU_MOV_S(ctx->f[21]);
    // 0x1f7278: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1f7278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f727c: 0xc78080f0  lwc1        $f0, -0x7F10($gp)
    ctx->pc = 0x1f727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7280: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x1f7280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1f7284: 0xe6610014  swc1        $f1, 0x14($s3)
    ctx->pc = 0x1f7284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1f7288: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1f7288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f728c: 0xe6610750  swc1        $f1, 0x750($s3)
    ctx->pc = 0x1f728cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1872), bits); }
    // 0x1f7290: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1f7290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7294: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1f7294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1f7298: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x1f7298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x1f729c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F729Cu;
    {
        const bool branch_taken_0x1f729c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F729Cu;
        // 0x1f72a0: 0xe6600758  swc1        $f0, 0x758($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f729c) {
            ctx->pc = 0x1F72B0u;
            goto label_1f72b0;
        }
    }
    ctx->pc = 0x1F72A4u;
    // 0x1f72a4: 0xc78080f4  lwc1        $f0, -0x7F0C($gp)
    ctx->pc = 0x1f72a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f72a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F72A8u;
    {
        const bool branch_taken_0x1f72a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72A8u;
        // 0x1f72ac: 0x4600a881  sub.s       $f2, $f21, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f72a8) {
            ctx->pc = 0x1F72C8u;
            goto label_1f72c8;
        }
    }
    ctx->pc = 0x1F72B0u;
label_1f72b0:
    // 0x1f72b0: 0xc78080f8  lwc1        $f0, -0x7F08($gp)
    ctx->pc = 0x1f72b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f72b4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1f72b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f72b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F72B8u;
    {
        const bool branch_taken_0x1f72b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f72b8) {
            ctx->pc = 0x1F72C8u;
            goto label_1f72c8;
        }
    }
    ctx->pc = 0x1F72C0u;
    // 0x1f72c0: 0xc78080fc  lwc1        $f0, -0x7F04($gp)
    ctx->pc = 0x1f72c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f72c4: 0x4600a880  add.s       $f2, $f21, $f0
    ctx->pc = 0x1f72c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1f72c8:
    // 0x1f72c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f72c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f72cc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f72ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f72d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F72D0u;
    {
        const bool branch_taken_0x1f72d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f72d0) {
            ctx->pc = 0x1F72E0u;
            goto label_1f72e0;
        }
    }
    ctx->pc = 0x1F72D8u;
    // 0x1f72d8: 0xc7808100  lwc1        $f0, -0x7F00($gp)
    ctx->pc = 0x1f72d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f72dc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f72dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f72e0:
    // 0x1f72e0: 0xc7808104  lwc1        $f0, -0x7EFC($gp)
    ctx->pc = 0x1f72e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f72e4: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1f72e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1f72e8: 0xc7818108  lwc1        $f1, -0x7EF8($gp)
    ctx->pc = 0x1f72e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f72ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f72ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1f72f0: 0x0  nop
    ctx->pc = 0x1f72f0u;
    // NOP
    // 0x1f72f4: 0x0  nop
    ctx->pc = 0x1f72f4u;
    // NOP
    // 0x1f72f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f72f8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f72fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f72fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f7300: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f7300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f7304: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f7304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f7308: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f7308u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f730c: 0xa662000e  sh          $v0, 0xE($s3)
    ctx->pc = 0x1f730cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f7310: 0x12a30002  beq         $s5, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7310u;
    {
        const bool branch_taken_0x1f7310 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7310u;
        // 0x1f7314: 0xa662007a  sh          $v0, 0x7A($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7310) {
            ctx->pc = 0x1F731Cu;
            goto label_1f731c;
        }
    }
    ctx->pc = 0x1F7318u;
    // 0x1f7318: 0xe6750020  swc1        $f21, 0x20($s3)
    ctx->pc = 0x1f7318u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1f731c:
    // 0x1f731c: 0xe6750074  swc1        $f21, 0x74($s3)
    ctx->pc = 0x1f731cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
label_1f7320:
    // 0x1f7320: 0x26a2ffde  addiu       $v0, $s5, -0x22
    ctx->pc = 0x1f7320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967262));
    // 0x1f7324: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f7324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7328: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7328u;
    {
        const bool branch_taken_0x1f7328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7328) {
            ctx->pc = 0x1F732Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7328u;
            // 0x1f732c: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7348u;
            goto label_1f7348;
        }
    }
    ctx->pc = 0x1F7330u;
    // 0x1f7330: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1f7330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f7334: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7334u;
    {
        const bool branch_taken_0x1f7334 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7334u;
        // 0x1f7338: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7334) {
            ctx->pc = 0x1F7344u;
            goto label_1f7344;
        }
    }
    ctx->pc = 0x1F733Cu;
    // 0x1f733c: 0x16a20009  bne         $s5, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F733Cu;
    {
        const bool branch_taken_0x1f733c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F733Cu;
        // 0x1f7340: 0x26a2ffe2  addiu       $v0, $s5, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f733c) {
            ctx->pc = 0x1F7364u;
            goto label_1f7364;
        }
    }
    ctx->pc = 0x1F7344u;
label_1f7344:
    // 0x1f7344: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x1f7344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_1f7348:
    // 0x1f7348: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7348u;
    {
        const bool branch_taken_0x1f7348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7348u;
        // 0x1f734c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7348) {
            ctx->pc = 0x1F7358u;
            goto label_1f7358;
        }
    }
    ctx->pc = 0x1F7350u;
    // 0x1f7350: 0x926201bc  lbu         $v0, 0x1BC($s3)
    ctx->pc = 0x1f7350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 444)));
    // 0x1f7354: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1f7354u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f7358:
    // 0x1f7358: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F7358u;
    {
        const bool branch_taken_0x1f7358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7358u;
        // 0x1f735c: 0x26650750  addiu       $a1, $s3, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7358) {
            ctx->pc = 0x1F738Cu;
            goto label_1f738c;
        }
    }
    ctx->pc = 0x1F7360u;
    // 0x1f7360: 0x26a2ffe2  addiu       $v0, $s5, -0x1E
    ctx->pc = 0x1f7360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967266));
label_1f7364:
    // 0x1f7364: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1f7364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f7368: 0x10400151  beqz        $v0, . + 4 + (0x151 << 2)
    ctx->pc = 0x1F7368u;
    {
        const bool branch_taken_0x1f7368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7368) {
            ctx->pc = 0x1F78B0u;
            goto label_1f78b0;
        }
    }
    ctx->pc = 0x1F7370u;
    // 0x1f7370: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1f7370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1f7374: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7374u;
    {
        const bool branch_taken_0x1f7374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7374u;
        // 0x1f7378: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7374) {
            ctx->pc = 0x1F7384u;
            goto label_1f7384;
        }
    }
    ctx->pc = 0x1F737Cu;
    // 0x1f737c: 0x924201bc  lbu         $v0, 0x1BC($s2)
    ctx->pc = 0x1f737cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x1f7380: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1f7380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f7384:
    // 0x1f7384: 0x1060014a  beqz        $v1, . + 4 + (0x14A << 2)
    ctx->pc = 0x1F7384u;
    {
        const bool branch_taken_0x1f7384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7384u;
        // 0x1f7388: 0x26650750  addiu       $a1, $s3, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7384) {
            ctx->pc = 0x1F78B0u;
            goto label_1f78b0;
        }
    }
    ctx->pc = 0x1F738Cu;
label_1f738c:
    // 0x1f738c: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x1f738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f7390: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1f7390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f7394: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1f7394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1f7398: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x1f7398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f739c: 0x8666000e  lh          $a2, 0xE($s3)
    ctx->pc = 0x1f739cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1f73a0: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x1f73a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f73a4: 0xc6620074  lwc1        $f2, 0x74($s3)
    ctx->pc = 0x1f73a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f73a8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f73a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1f73ac: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f73acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f73b0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1f73b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1f73b4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1f73b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f73b8: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1f73b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1f73bc: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x1f73bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f73c0: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1f73c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1f73c4: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1f73c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f73c8: 0xe6610018  swc1        $f1, 0x18($s3)
    ctx->pc = 0x1f73c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x1f73cc: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1f73ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f73d0: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x1f73d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x1f73d4: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x1f73d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1f73d8: 0xa662000e  sh          $v0, 0xE($s3)
    ctx->pc = 0x1f73d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f73dc: 0x16a30004  bne         $s5, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F73DCu;
    {
        const bool branch_taken_0x1f73dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73DCu;
        // 0x1f73e0: 0xa662007a  sh          $v0, 0x7A($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73dc) {
            ctx->pc = 0x1F73F0u;
            goto label_1f73f0;
        }
    }
    ctx->pc = 0x1F73E4u;
    // 0x1f73e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F73E4u;
    {
        const bool branch_taken_0x1f73e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73E4u;
        // 0x1f73e8: 0xc6400074  lwc1        $f0, 0x74($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73e4) {
            ctx->pc = 0x1F73F8u;
            goto label_1f73f8;
        }
    }
    ctx->pc = 0x1F73ECu;
    // 0x1f73ec: 0x0  nop
    ctx->pc = 0x1f73ecu;
    // NOP
label_1f73f0:
    // 0x1f73f0: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x1f73f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f73f4: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1f73f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1f73f8:
    // 0x1f73f8: 0xe6600074  swc1        $f0, 0x74($s3)
    ctx->pc = 0x1f73f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
    // 0x1f73fc: 0x26440750  addiu       $a0, $s2, 0x750
    ctx->pc = 0x1f73fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1872));
    // 0x1f7400: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1f7400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1f7404: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1f7404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f7408: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1f7408u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1f740c: 0xe6450014  swc1        $f5, 0x14($s2)
    ctx->pc = 0x1f740cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1f7410: 0xe6440018  swc1        $f4, 0x18($s2)
    ctx->pc = 0x1f7410u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1f7414: 0xe643001c  swc1        $f3, 0x1C($s2)
    ctx->pc = 0x1f7414u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1f7418: 0xa646000e  sh          $a2, 0xE($s2)
    ctx->pc = 0x1f7418u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f741c: 0xe6450000  swc1        $f5, 0x0($s2)
    ctx->pc = 0x1f741cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f7420: 0xe6440004  swc1        $f4, 0x4($s2)
    ctx->pc = 0x1f7420u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1f7424: 0xe6430008  swc1        $f3, 0x8($s2)
    ctx->pc = 0x1f7424u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1f7428: 0x12a30002  beq         $s5, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7428u;
    {
        const bool branch_taken_0x1f7428 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7428u;
        // 0x1f742c: 0xa646007a  sh          $a2, 0x7A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7428) {
            ctx->pc = 0x1F7434u;
            goto label_1f7434;
        }
    }
    ctx->pc = 0x1F7430u;
    // 0x1f7430: 0xe6420020  swc1        $f2, 0x20($s2)
    ctx->pc = 0x1f7430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1f7434:
    // 0x1f7434: 0xe6420074  swc1        $f2, 0x74($s2)
    ctx->pc = 0x1f7434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x1f7438: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1f7438u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f743c: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x1F743Cu;
    {
        const bool branch_taken_0x1f743c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F743Cu;
        // 0x1f7440: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f743c) {
            ctx->pc = 0x1F78B0u;
            goto label_1f78b0;
        }
    }
    ctx->pc = 0x1F7444u;
    // 0x1f7444: 0x0  nop
    ctx->pc = 0x1f7444u;
    // NOP
label_1f7448:
    // 0x1f7448: 0xc091726  jal         func_245C98
    ctx->pc = 0x1F7448u;
    SET_GPR_U32(ctx, 31, 0x1F7450u);
    ctx->pc = 0x1F744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7448u;
    // 0x1f744c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x1F7448u, 0x1F7450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7450u;
label_1f7450:
    // 0x1f7450: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f7450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7454: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F7454u;
    {
        const bool branch_taken_0x1f7454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7454u;
        // 0x1f7458: 0x8f82c898  lw          $v0, -0x3768($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7454) {
            ctx->pc = 0x1F74C0u;
            goto label_1f74c0;
        }
    }
    ctx->pc = 0x1F745Cu;
    // 0x1f745c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7460: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1f7460u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f7464: 0x8010  mfhi        $s0
    ctx->pc = 0x1f7464u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1f7468: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F7468u;
    SET_GPR_U32(ctx, 31, 0x1F7470u);
    ctx->pc = 0x1F746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7468u;
    // 0x1f746c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F7468u, 0x1F7470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7470u;
label_1f7470:
    // 0x1f7470: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1F7470u;
    {
        const bool branch_taken_0x1f7470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7470u;
        // 0x1f7474: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7470) {
            ctx->pc = 0x1F7538u;
            goto label_1f7538;
        }
    }
    ctx->pc = 0x1F7478u;
label_1f7478:
    // 0x1f7478: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f7478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f747c: 0xc091726  jal         func_245C98
    ctx->pc = 0x1F747Cu;
    SET_GPR_U32(ctx, 31, 0x1F7484u);
    ctx->pc = 0x1F7480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F747Cu;
    // 0x1f7480: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x1F747Cu, 0x1F7484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7484u;
label_1f7484:
    // 0x1f7484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7488: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F7488u;
    {
        const bool branch_taken_0x1f7488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7488u;
        // 0x1f748c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7488) {
            ctx->pc = 0x1F74B8u;
            goto label_1f74b8;
        }
    }
    ctx->pc = 0x1F7490u;
    // 0x1f7490: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f7490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f7494: 0x0  nop
    ctx->pc = 0x1f7494u;
    // NOP
label_1f7498:
    // 0x1f7498: 0x3202003f  andi        $v0, $s0, 0x3F
    ctx->pc = 0x1f7498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x1f749c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f749cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f74a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f74a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f74a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f74a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f74a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f74ac: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1f74acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f74b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F74B0u;
    {
        const bool branch_taken_0x1f74b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F74B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74B0u;
        // 0x1f74b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74b0) {
            ctx->pc = 0x1F7498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7498;
        }
    }
    ctx->pc = 0x1F74B8u;
label_1f74b8:
    // 0x1f74b8: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F74B8u;
    {
        const bool branch_taken_0x1f74b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74B8u;
        // 0x1f74bc: 0x8f82c898  lw          $v0, -0x3768($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74b8) {
            ctx->pc = 0x1F7520u;
            goto label_1f7520;
        }
    }
    ctx->pc = 0x1F74C0u;
label_1f74c0:
    // 0x1f74c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f74c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f74c4: 0xaf80c898  sw          $zero, -0x3768($gp)
    ctx->pc = 0x1f74c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953112), GPR_U32(ctx, 0));
    // 0x1f74c8: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1f74c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1f74cc: 0xe6400750  swc1        $f0, 0x750($s2)
    ctx->pc = 0x1f74ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x1f74d0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1f74d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f74d4: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1f74d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1f74d8: 0xe6400758  swc1        $f0, 0x758($s2)
    ctx->pc = 0x1f74d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
    // 0x1f74dc: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1f74dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1f74e0: 0xa640007a  sh          $zero, 0x7A($s2)
    ctx->pc = 0x1f74e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f74e4: 0xa640000e  sh          $zero, 0xE($s2)
    ctx->pc = 0x1f74e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f74e8: 0xe6400074  swc1        $f0, 0x74($s2)
    ctx->pc = 0x1f74e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x1f74ec: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1f74ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1f74f0: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1f74f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x1f74f4: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1f74f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1f74f8: 0xe6600750  swc1        $f0, 0x750($s3)
    ctx->pc = 0x1f74f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1872), bits); }
    // 0x1f74fc: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1f74fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1f7500: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x1f7500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x1f7504: 0xe6600758  swc1        $f0, 0x758($s3)
    ctx->pc = 0x1f7504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1880), bits); }
    // 0x1f7508: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1f7508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1f750c: 0xa660007a  sh          $zero, 0x7A($s3)
    ctx->pc = 0x1f750cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 122), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7510: 0xa660000e  sh          $zero, 0xE($s3)
    ctx->pc = 0x1f7510u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7514: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x1F7514u;
    {
        const bool branch_taken_0x1f7514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7514u;
        // 0x1f7518: 0xe6600074  swc1        $f0, 0x74($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7514) {
            ctx->pc = 0x1F78B0u;
            goto label_1f78b0;
        }
    }
    ctx->pc = 0x1F751Cu;
    // 0x1f751c: 0x0  nop
    ctx->pc = 0x1f751cu;
    // NOP
label_1f7520:
    // 0x1f7520: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f7520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7524: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x1f7524u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f7528: 0x8010  mfhi        $s0
    ctx->pc = 0x1f7528u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1f752c: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F752Cu;
    SET_GPR_U32(ctx, 31, 0x1F7534u);
    ctx->pc = 0x1F7530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F752Cu;
    // 0x1f7530: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F752Cu, 0x1F7534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7534u;
label_1f7534:
    // 0x1f7534: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f7534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f7538:
    // 0x1f7538: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f753c: 0xc0917c0  jal         func_245F00
    ctx->pc = 0x1F753Cu;
    SET_GPR_U32(ctx, 31, 0x1F7544u);
    ctx->pc = 0x1F7540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F753Cu;
    // 0x1f7540: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F00u, 0x1F753Cu, 0x1F7544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7544u;
label_1f7544:
    // 0x1f7544: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1f7544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7548: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1f7548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f754c: 0xc780810c  lwc1        $f0, -0x7EF4($gp)
    ctx->pc = 0x1f754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7550: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x1f7550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f7554: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x1f7554u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x1f7558: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x1f7558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1f755c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1f755cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7560: 0xe6410750  swc1        $f1, 0x750($s2)
    ctx->pc = 0x1f7560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x1f7564: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f7564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7568: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1f7568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1f756c: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1f756cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1f7570: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7570u;
    {
        const bool branch_taken_0x1f7570 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7570u;
        // 0x1f7574: 0xe6400758  swc1        $f0, 0x758($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7570) {
            ctx->pc = 0x1F7588u;
            goto label_1f7588;
        }
    }
    ctx->pc = 0x1F7578u;
    // 0x1f7578: 0xc7808110  lwc1        $f0, -0x7EF0($gp)
    ctx->pc = 0x1f7578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f757c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F757Cu;
    {
        const bool branch_taken_0x1f757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F757Cu;
        // 0x1f7580: 0x46001881  sub.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f757c) {
            ctx->pc = 0x1F75A0u;
            goto label_1f75a0;
        }
    }
    ctx->pc = 0x1F7584u;
    // 0x1f7584: 0x0  nop
    ctx->pc = 0x1f7584u;
    // NOP
label_1f7588:
    // 0x1f7588: 0xc7808114  lwc1        $f0, -0x7EEC($gp)
    ctx->pc = 0x1f7588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f758c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1f758cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7590: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7590u;
    {
        const bool branch_taken_0x1f7590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7590) {
            ctx->pc = 0x1F75A0u;
            goto label_1f75a0;
        }
    }
    ctx->pc = 0x1F7598u;
    // 0x1f7598: 0xc7808118  lwc1        $f0, -0x7EE8($gp)
    ctx->pc = 0x1f7598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f759c: 0x46001880  add.s       $f2, $f3, $f0
    ctx->pc = 0x1f759cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f75a0:
    // 0x1f75a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f75a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f75a4: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x1f75a4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x1f75a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f75a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f75ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F75ACu;
    {
        const bool branch_taken_0x1f75ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f75ac) {
            ctx->pc = 0x1F75BCu;
            goto label_1f75bc;
        }
    }
    ctx->pc = 0x1F75B4u;
    // 0x1f75b4: 0xc780811c  lwc1        $f0, -0x7EE4($gp)
    ctx->pc = 0x1f75b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f75b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f75b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f75bc:
    // 0x1f75bc: 0xc7808120  lwc1        $f0, -0x7EE0($gp)
    ctx->pc = 0x1f75bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f75c0: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x1f75c0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x1f75c4: 0xc7848124  lwc1        $f4, -0x7EDC($gp)
    ctx->pc = 0x1f75c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f75c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f75c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f75cc: 0xc7818128  lwc1        $f1, -0x7ED8($gp)
    ctx->pc = 0x1f75ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f75d0: 0xe6430074  swc1        $f3, 0x74($s2)
    ctx->pc = 0x1f75d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x1f75d4: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x1f75d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f75d8: 0xe6430020  swc1        $f3, 0x20($s2)
    ctx->pc = 0x1f75d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1f75dc: 0x0  nop
    ctx->pc = 0x1f75dcu;
    // NOP
    // 0x1f75e0: 0x0  nop
    ctx->pc = 0x1f75e0u;
    // NOP
    // 0x1f75e4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x1f75e4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x1f75e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f75e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f75ec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f75ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f75f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f75f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f75f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f75f8: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x1f75f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f75fc: 0xa642007a  sh          $v0, 0x7A($s2)
    ctx->pc = 0x1f75fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f7600: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f7600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7604: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1f7604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1f7608: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1f7608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1f760c: 0xe6600750  swc1        $f0, 0x750($s3)
    ctx->pc = 0x1f760cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1872), bits); }
    // 0x1f7610: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1f7610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7614: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1f7614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1f7618: 0xe661001c  swc1        $f1, 0x1C($s3)
    ctx->pc = 0x1f7618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x1f761c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F761Cu;
    {
        const bool branch_taken_0x1f761c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F761Cu;
        // 0x1f7620: 0xe6610758  swc1        $f1, 0x758($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f761c) {
            ctx->pc = 0x1F7630u;
            goto label_1f7630;
        }
    }
    ctx->pc = 0x1F7624u;
    // 0x1f7624: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7624u;
    {
        const bool branch_taken_0x1f7624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7624u;
        // 0x1f7628: 0x46041881  sub.s       $f2, $f3, $f4 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7624) {
            ctx->pc = 0x1F7640u;
            goto label_1f7640;
        }
    }
    ctx->pc = 0x1F762Cu;
    // 0x1f762c: 0x0  nop
    ctx->pc = 0x1f762cu;
    // NOP
label_1f7630:
    // 0x1f7630: 0xc780812c  lwc1        $f0, -0x7ED4($gp)
    ctx->pc = 0x1f7630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7634: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1f7634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7638: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F7638u;
    {
        const bool branch_taken_0x1f7638 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7638) {
            ctx->pc = 0x1F763Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7638u;
            // 0x1f763c: 0x46041880  add.s       $f2, $f3, $f4 (Delay Slot)
            ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7640u;
            goto label_1f7640;
        }
    }
    ctx->pc = 0x1F7640u;
label_1f7640:
    // 0x1f7640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7644: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f7644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7648: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7648u;
    {
        const bool branch_taken_0x1f7648 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7648) {
            ctx->pc = 0x1F7658u;
            goto label_1f7658;
        }
    }
    ctx->pc = 0x1F7650u;
    // 0x1f7650: 0xc7808130  lwc1        $f0, -0x7ED0($gp)
    ctx->pc = 0x1f7650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7654: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f7654u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f7658:
    // 0x1f7658: 0xc7808134  lwc1        $f0, -0x7ECC($gp)
    ctx->pc = 0x1f7658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f765c: 0xc7818138  lwc1        $f1, -0x7EC8($gp)
    ctx->pc = 0x1f765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7660: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f7660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1f7664: 0xe6630020  swc1        $f3, 0x20($s3)
    ctx->pc = 0x1f7664u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x1f7668: 0xe6630074  swc1        $f3, 0x74($s3)
    ctx->pc = 0x1f7668u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
    // 0x1f766c: 0x0  nop
    ctx->pc = 0x1f766cu;
    // NOP
    // 0x1f7670: 0x0  nop
    ctx->pc = 0x1f7670u;
    // NOP
    // 0x1f7674: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f7674u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f7678: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f7678u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f767c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f767cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f7680: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f7680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f7684: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f7684u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f7688: 0xa662000e  sh          $v0, 0xE($s3)
    ctx->pc = 0x1f7688u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f768c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1F768Cu;
    {
        const bool branch_taken_0x1f768c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F768Cu;
        // 0x1f7690: 0xa662007a  sh          $v0, 0x7A($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f768c) {
            ctx->pc = 0x1F78B0u;
            goto label_1f78b0;
        }
    }
    ctx->pc = 0x1F7694u;
    // 0x1f7694: 0x0  nop
    ctx->pc = 0x1f7694u;
    // NOP
label_1f7698:
    // 0x1f7698: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f7698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f769c: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1f769cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f76a0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1f76a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f76a4: 0xc097f3a  jal         func_25FCE8
    ctx->pc = 0x1F76A4u;
    SET_GPR_U32(ctx, 31, 0x1F76ACu);
    ctx->pc = 0x1F76A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76A4u;
    // 0x1f76a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x1F76A4u, 0x1F76ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76ACu;
label_1f76ac:
    // 0x1f76ac: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f76acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f76b0: 0x8c6623b0  lw          $a2, 0x23B0($v1)
    ctx->pc = 0x1f76b0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3B23B0u));
    // 0x1f76b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f76b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f76b8: 0x24c7000c  addiu       $a3, $a2, 0xC
    ctx->pc = 0x1f76b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x1f76bc: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1f76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1f76c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f76c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76c4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1f76c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1f76c8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1f76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x1f76cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f76d0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1f76d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1f76d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f76d8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1f76d8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f76dc: 0x2810  mfhi        $a1
    ctx->pc = 0x1f76dcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1f76e0: 0xc097fdc  jal         func_25FF70
    ctx->pc = 0x1F76E0u;
    SET_GPR_U32(ctx, 31, 0x1F76E8u);
    ctx->pc = 0x1F76E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76E0u;
    // 0x1f76e4: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x1F76E0u, 0x1F76E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76E8u;
label_1f76e8:
    // 0x1f76e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f76e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76ec: 0xc097f98  jal         func_25FE60
    ctx->pc = 0x1F76ECu;
    SET_GPR_U32(ctx, 31, 0x1F76F4u);
    ctx->pc = 0x1F76F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76ECu;
    // 0x1f76f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE60u, 0x1F76ECu, 0x1F76F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76F4u;
label_1f76f4:
    // 0x1f76f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f76f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76f8: 0xc098b7e  jal         func_262DF8
    ctx->pc = 0x1F76F8u;
    SET_GPR_U32(ctx, 31, 0x1F7700u);
    ctx->pc = 0x1F76FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76F8u;
    // 0x1f76fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DF8u, 0x1F76F8u, 0x1F7700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7700u;
label_1f7700:
    // 0x1f7700: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f7700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7704: 0xc098b7e  jal         func_262DF8
    ctx->pc = 0x1F7704u;
    SET_GPR_U32(ctx, 31, 0x1F770Cu);
    ctx->pc = 0x1F7708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7704u;
    // 0x1f7708: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DF8u, 0x1F7704u, 0x1F770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F770Cu;
label_1f770c:
    // 0x1f770c: 0xc6400750  lwc1        $f0, 0x750($s2)
    ctx->pc = 0x1f770cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7710: 0xc6410758  lwc1        $f1, 0x758($s2)
    ctx->pc = 0x1f7710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7714: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1f7714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f7718: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1f7718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1f771c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1f771cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1f7720: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x1f7720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1f7724: 0xc6600750  lwc1        $f0, 0x750($s3)
    ctx->pc = 0x1f7724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7728: 0xc6610758  lwc1        $f1, 0x758($s3)
    ctx->pc = 0x1f7728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f772c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1f772cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1f7730: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1f7730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1f7734: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1f7734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1f7738: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1F7738u;
    {
        const bool branch_taken_0x1f7738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7738u;
        // 0x1f773c: 0xe661001c  swc1        $f1, 0x1C($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7738) {
            ctx->pc = 0x1F78B0u;
            goto label_1f78b0;
        }
    }
    ctx->pc = 0x1F7740u;
label_1f7740:
    // 0x1f7740: 0x248588d0  addiu       $a1, $a0, -0x7730
    ctx->pc = 0x1f7740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936784));
    // 0x1f7744: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f7748: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x1f7748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x1f774c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F774Cu;
    {
        const bool branch_taken_0x1f774c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F774Cu;
        // 0x1f7750: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f774c) {
            ctx->pc = 0x1F775Cu;
            goto label_1f775c;
        }
    }
    ctx->pc = 0x1F7754u;
    // 0x1f7754: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x1f7754u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f7758: 0x248588d0  addiu       $a1, $a0, -0x7730
    ctx->pc = 0x1f7758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936784));
label_1f775c:
    // 0x1f775c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7760: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f7760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f7764: 0x906401bc  lbu         $a0, 0x1BC($v1)
    ctx->pc = 0x1f7764u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x1f7768: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7768u;
    {
        const bool branch_taken_0x1f7768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7768u;
        // 0x1f776c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7768) {
            ctx->pc = 0x1F7774u;
            goto label_1f7774;
        }
    }
    ctx->pc = 0x1F7770u;
    // 0x1f7770: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x1f7770u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f7774:
    // 0x1f7774: 0xc07e58c  jal         func_1F9630
    ctx->pc = 0x1F7774u;
    SET_GPR_U32(ctx, 31, 0x1F777Cu);
    ctx->pc = 0x1F9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9630u, 0x1F7774u, 0x1F777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F777Cu;
label_1f777c:
    // 0x1f777c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f777cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7780: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f7780u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f7784: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x1f7784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1f7788: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x1f7788u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x1f778c: 0xe6010758  swc1        $f1, 0x758($s0)
    ctx->pc = 0x1f778cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1880), bits); }
    // 0x1f7790: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1f7790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1f7794: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1f7794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1f7798: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f7798u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f779c: 0xe6000750  swc1        $f0, 0x750($s0)
    ctx->pc = 0x1f779cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1872), bits); }
    // 0x1f77a0: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x1F77A0u;
    SET_GPR_U32(ctx, 31, 0x1F77A8u);
    ctx->pc = 0x1F77A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F77A0u;
    // 0x1f77a4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x1F77A0u, 0x1F77A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F77A8u;
label_1f77a8:
    // 0x1f77a8: 0xc781813c  lwc1        $f1, -0x7EC4($gp)
    ctx->pc = 0x1f77a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f77ac: 0xc7828140  lwc1        $f2, -0x7EC0($gp)
    ctx->pc = 0x1f77acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f77b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f77b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f77b4: 0xc7838144  lwc1        $f3, -0x7EBC($gp)
    ctx->pc = 0x1f77b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f77b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f77b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f77bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f77bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f77c0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1f77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f77c4: 0xa602007a  sh          $v0, 0x7A($s0)
    ctx->pc = 0x1f77c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f77c8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1f77c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1f77cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f77ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f77d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f77d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f77d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f77d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1f77d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f77d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f77dc: 0x0  nop
    ctx->pc = 0x1f77dcu;
    // NOP
    // 0x1f77e0: 0x0  nop
    ctx->pc = 0x1f77e0u;
    // NOP
    // 0x1f77e4: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x1f77e4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[3];
    // 0x1f77e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1f77e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f77ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F77ECu;
    {
        const bool branch_taken_0x1f77ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77ECu;
        // 0x1f77f0: 0xa602000e  sh          $v0, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77ec) {
            ctx->pc = 0x1F7800u;
            goto label_1f7800;
        }
    }
    ctx->pc = 0x1F77F4u;
    // 0x1f77f4: 0xc7808148  lwc1        $f0, -0x7EB8($gp)
    ctx->pc = 0x1f77f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f77f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F77F8u;
    {
        const bool branch_taken_0x1f77f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77F8u;
        // 0x1f77fc: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77f8) {
            ctx->pc = 0x1F7818u;
            goto label_1f7818;
        }
    }
    ctx->pc = 0x1F7800u;
label_1f7800:
    // 0x1f7800: 0xc780814c  lwc1        $f0, -0x7EB4($gp)
    ctx->pc = 0x1f7800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7804: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f7804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7808: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7808u;
    {
        const bool branch_taken_0x1f7808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7808) {
            ctx->pc = 0x1F7818u;
            goto label_1f7818;
        }
    }
    ctx->pc = 0x1F7810u;
    // 0x1f7810: 0xc7808150  lwc1        $f0, -0x7EB0($gp)
    ctx->pc = 0x1f7810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7814: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f7814u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f7818:
    // 0x1f7818: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f781c: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x1f781cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1f7820: 0xe6010074  swc1        $f1, 0x74($s0)
    ctx->pc = 0x1f7820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1f7824: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f7824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1f7828: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1f7828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1f782c: 0xe6200750  swc1        $f0, 0x750($s1)
    ctx->pc = 0x1f782cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1872), bits); }
    // 0x1f7830: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f7830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f7834: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1f7834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1f7838: 0xe6200758  swc1        $f0, 0x758($s1)
    ctx->pc = 0x1f7838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1880), bits); }
    // 0x1f783c: 0xc7818154  lwc1        $f1, -0x7EAC($gp)
    ctx->pc = 0x1f783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7840: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1f7840u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1f7844: 0xc7828158  lwc1        $f2, -0x7EA8($gp)
    ctx->pc = 0x1f7844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7848: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x1f7848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x1f784c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1f784cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1f7850: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x1f7850u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f7854: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f7854u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f7858: 0xa623007a  sh          $v1, 0x7A($s1)
    ctx->pc = 0x1f7858u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f785c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f785cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f7860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f7864: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f7864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1f7868: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f7868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f786c: 0x0  nop
    ctx->pc = 0x1f786cu;
    // NOP
    // 0x1f7870: 0x0  nop
    ctx->pc = 0x1f7870u;
    // NOP
    // 0x1f7874: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1f7874u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x1f7878: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1f7878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f787c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F787Cu;
    {
        const bool branch_taken_0x1f787c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F787Cu;
        // 0x1f7880: 0xa623000e  sh          $v1, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f787c) {
            ctx->pc = 0x1F7890u;
            goto label_1f7890;
        }
    }
    ctx->pc = 0x1F7884u;
    // 0x1f7884: 0xc780815c  lwc1        $f0, -0x7EA4($gp)
    ctx->pc = 0x1f7884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7888: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7888u;
    {
        const bool branch_taken_0x1f7888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7888u;
        // 0x1f788c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7888) {
            ctx->pc = 0x1F78A8u;
            goto label_1f78a8;
        }
    }
    ctx->pc = 0x1F7890u;
label_1f7890:
    // 0x1f7890: 0xc7808160  lwc1        $f0, -0x7EA0($gp)
    ctx->pc = 0x1f7890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7894: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f7894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7898: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7898u;
    {
        const bool branch_taken_0x1f7898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7898) {
            ctx->pc = 0x1F789Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7898u;
            // 0x1f789c: 0xe6220020  swc1        $f2, 0x20($s1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F78ACu;
            goto label_1f78ac;
        }
    }
    ctx->pc = 0x1F78A0u;
    // 0x1f78a0: 0xc7808164  lwc1        $f0, -0x7E9C($gp)
    ctx->pc = 0x1f78a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f78a4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f78a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f78a8:
    // 0x1f78a8: 0xe6220020  swc1        $f2, 0x20($s1)
    ctx->pc = 0x1f78a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_1f78ac:
    // 0x1f78ac: 0xe6220074  swc1        $f2, 0x74($s1)
    ctx->pc = 0x1f78acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_1f78b0:
    // 0x1f78b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f78b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f78b4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1f78b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1f78b8: 0xa6400010  sh          $zero, 0x10($s2)
    ctx->pc = 0x1f78b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f78bc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1f78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f78c0: 0xa640000c  sh          $zero, 0xC($s2)
    ctx->pc = 0x1f78c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f78c4: 0xe6740004  swc1        $f20, 0x4($s3)
    ctx->pc = 0x1f78c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1f78c8: 0xa6600010  sh          $zero, 0x10($s3)
    ctx->pc = 0x1f78c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f78cc: 0xa660000c  sh          $zero, 0xC($s3)
    ctx->pc = 0x1f78ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f78d0: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x1f78d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1f78d4: 0x8c82885c  lw          $v0, -0x77A4($a0)
    ctx->pc = 0x1f78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x1f78d8: 0x10430067  beq         $v0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x1F78D8u;
    {
        const bool branch_taken_0x1f78d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78D8u;
        // 0x1f78dc: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78d8) {
            ctx->pc = 0x1F7A78u;
            goto label_1f7a78;
        }
    }
    ctx->pc = 0x1F78E0u;
    // 0x1f78e0: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F78E0u;
    SET_GPR_U32(ctx, 31, 0x1F78E8u);
    ctx->pc = 0x1F78E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F78E0u;
    // 0x1f78e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F78E0u, 0x1F78E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F78E8u;
label_1f78e8:
    // 0x1f78e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f78e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f78ec: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F78ECu;
    SET_GPR_U32(ctx, 31, 0x1F78F4u);
    ctx->pc = 0x1F78F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F78ECu;
    // 0x1f78f0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F78ECu, 0x1F78F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F78F4u;
label_1f78f4:
    // 0x1f78f4: 0x1a80005f  blez        $s4, . + 4 + (0x5F << 2)
    ctx->pc = 0x1F78F4u;
    {
        const bool branch_taken_0x1f78f4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1F78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78F4u;
        // 0x1f78f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78f4) {
            ctx->pc = 0x1F7A74u;
            goto label_1f7a74;
        }
    }
    ctx->pc = 0x1F78FCu;
    // 0x1f78fc: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x1f78fcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
    // 0x1f7900: 0xc7948168  lwc1        $f20, -0x7E98($gp)
    ctx->pc = 0x1f7900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f7904: 0xc798816c  lwc1        $f24, -0x7E94($gp)
    ctx->pc = 0x1f7904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f7908: 0xc7968170  lwc1        $f22, -0x7E90($gp)
    ctx->pc = 0x1f7908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f790c: 0xc7958174  lwc1        $f21, -0x7E8C($gp)
    ctx->pc = 0x1f790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f7910:
    // 0x1f7910: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f7910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7914: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F7914u;
    SET_GPR_U32(ctx, 31, 0x1F791Cu);
    ctx->pc = 0x1F7918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7914u;
    // 0x1f7918: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F7914u, 0x1F791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F791Cu;
label_1f791c:
    // 0x1f791c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f791cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7920: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f7920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7924: 0xc0917c0  jal         func_245F00
    ctx->pc = 0x1F7924u;
    SET_GPR_U32(ctx, 31, 0x1F792Cu);
    ctx->pc = 0x1F7928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7924u;
    // 0x1f7928: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F00u, 0x1F7924u, 0x1F792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F792Cu;
label_1f792c:
    // 0x1f792c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f792cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7930: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f7930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7934: 0xc0b160a  jal         func_2C5828
    ctx->pc = 0x1F7934u;
    SET_GPR_U32(ctx, 31, 0x1F793Cu);
    ctx->pc = 0x1F7938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7934u;
    // 0x1f7938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5828u, 0x1F7934u, 0x1F793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F793Cu;
label_1f793c:
    // 0x1f793c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7940: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1f7940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7944: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7944u;
    {
        const bool branch_taken_0x1f7944 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7944u;
        // 0x1f7948: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7944) {
            ctx->pc = 0x1F7958u;
            goto label_1f7958;
        }
    }
    ctx->pc = 0x1F794Cu;
    // 0x1f794c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F794Cu;
    {
        const bool branch_taken_0x1f794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F794Cu;
        // 0x1f7950: 0x46140041  sub.s       $f1, $f0, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f794c) {
            ctx->pc = 0x1F7964u;
            goto label_1f7964;
        }
    }
    ctx->pc = 0x1F7954u;
    // 0x1f7954: 0x0  nop
    ctx->pc = 0x1f7954u;
    // NOP
label_1f7958:
    // 0x1f7958: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1f7958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f795c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F795Cu;
    {
        const bool branch_taken_0x1f795c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f795c) {
            ctx->pc = 0x1F7960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F795Cu;
            // 0x1f7960: 0x46140040  add.s       $f1, $f0, $f20 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7964u;
            goto label_1f7964;
        }
    }
    ctx->pc = 0x1F7964u;
label_1f7964:
    // 0x1f7964: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f7964u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1f7968: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f7968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f796c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F796Cu;
    {
        const bool branch_taken_0x1f796c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f796c) {
            ctx->pc = 0x1F7970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F796Cu;
            // 0x1f7970: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7974u;
            goto label_1f7974;
        }
    }
    ctx->pc = 0x1F7974u;
label_1f7974:
    // 0x1f7974: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f7974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f7978: 0xc7828178  lwc1        $f2, -0x7E88($gp)
    ctx->pc = 0x1f7978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f797c: 0x0  nop
    ctx->pc = 0x1f797cu;
    // NOP
    // 0x1f7980: 0x0  nop
    ctx->pc = 0x1f7980u;
    // NOP
    // 0x1f7984: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1f7984u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1f7988: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f7988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f798c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f798cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f7990: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x1f7990u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f7994: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f7994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7998: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1f7998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f799c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F799Cu;
    {
        const bool branch_taken_0x1f799c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F79A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F799Cu;
        // 0x1f79a0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f799c) {
            ctx->pc = 0x1F79B0u;
            goto label_1f79b0;
        }
    }
    ctx->pc = 0x1F79A4u;
    // 0x1f79a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F79A4u;
    {
        const bool branch_taken_0x1f79a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79A4u;
        // 0x1f79a8: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79a4) {
            ctx->pc = 0x1F79BCu;
            goto label_1f79bc;
        }
    }
    ctx->pc = 0x1F79ACu;
    // 0x1f79ac: 0x0  nop
    ctx->pc = 0x1f79acu;
    // NOP
label_1f79b0:
    // 0x1f79b0: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1f79b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f79b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F79B4u;
    {
        const bool branch_taken_0x1f79b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f79b4) {
            ctx->pc = 0x1F79B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F79B4u;
            // 0x1f79b8: 0x46020040  add.s       $f1, $f0, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F79BCu;
            goto label_1f79bc;
        }
    }
    ctx->pc = 0x1F79BCu;
label_1f79bc:
    // 0x1f79bc: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f79bcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1f79c0: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f79c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f79c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F79C4u;
    {
        const bool branch_taken_0x1f79c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f79c4) {
            ctx->pc = 0x1F79C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F79C4u;
            // 0x1f79c8: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F79CCu;
            goto label_1f79cc;
        }
    }
    ctx->pc = 0x1F79CCu;
label_1f79cc:
    // 0x1f79cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f79ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f79d0: 0xc782817c  lwc1        $f2, -0x7E84($gp)
    ctx->pc = 0x1f79d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f79d4: 0x0  nop
    ctx->pc = 0x1f79d4u;
    // NOP
    // 0x1f79d8: 0x0  nop
    ctx->pc = 0x1f79d8u;
    // NOP
    // 0x1f79dc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1f79dcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1f79e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f79e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f79e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f79e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f79e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f79ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f79ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f79f0: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x1f79f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f79f4: 0xa622007a  sh          $v0, 0x7A($s1)
    ctx->pc = 0x1f79f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f79f8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f79f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f79fc: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1f79fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7a00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7A00u;
    {
        const bool branch_taken_0x1f7a00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A00u;
        // 0x1f7a04: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a00) {
            ctx->pc = 0x1F7A10u;
            goto label_1f7a10;
        }
    }
    ctx->pc = 0x1F7A08u;
    // 0x1f7a08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7A08u;
    {
        const bool branch_taken_0x1f7a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A08u;
        // 0x1f7a0c: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a08) {
            ctx->pc = 0x1F7A1Cu;
            goto label_1f7a1c;
        }
    }
    ctx->pc = 0x1F7A10u;
label_1f7a10:
    // 0x1f7a10: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1f7a10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7a14: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F7A14u;
    {
        const bool branch_taken_0x1f7a14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7a14) {
            ctx->pc = 0x1F7A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7A14u;
            // 0x1f7a18: 0x46020040  add.s       $f1, $f0, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7A1Cu;
            goto label_1f7a1c;
        }
    }
    ctx->pc = 0x1F7A1Cu;
label_1f7a1c:
    // 0x1f7a1c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f7a1cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1f7a20: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f7a20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7a24: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F7A24u;
    {
        const bool branch_taken_0x1f7a24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7a24) {
            ctx->pc = 0x1F7A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7A24u;
            // 0x1f7a28: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7A2Cu;
            goto label_1f7a2c;
        }
    }
    ctx->pc = 0x1F7A2Cu;
label_1f7a2c:
    // 0x1f7a2c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f7a2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f7a30: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1f7a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f7a34: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x1f7a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f7a38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7a38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1f7a3c: 0x0  nop
    ctx->pc = 0x1f7a3cu;
    // NOP
    // 0x1f7a40: 0x0  nop
    ctx->pc = 0x1f7a40u;
    // NOP
    // 0x1f7a44: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1f7a44u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1f7a48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f7a48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f7a4c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f7a4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f7a50: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x1f7a50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f7a54: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f7a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7a58: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1f7a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1f7a5c: 0xc0910aa  jal         func_2442A8
    ctx->pc = 0x1F7A5Cu;
    SET_GPR_U32(ctx, 31, 0x1F7A64u);
    ctx->pc = 0x1F7A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7A5Cu;
    // 0x1f7a60: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2442A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2442A8u, 0x1F7A5Cu, 0x1F7A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A64u;
label_1f7a64:
    // 0x1f7a64: 0x274182a  slt         $v1, $s3, $s4
    ctx->pc = 0x1f7a64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1f7a68: 0xae2208a4  sw          $v0, 0x8A4($s1)
    ctx->pc = 0x1f7a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2212), GPR_U32(ctx, 2));
    // 0x1f7a6c: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x1F7A6Cu;
    {
        const bool branch_taken_0x1f7a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A6Cu;
        // 0x1f7a70: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a6c) {
            ctx->pc = 0x1F7910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7910;
        }
    }
    ctx->pc = 0x1F7A74u;
label_1f7a74:
    // 0x1f7a74: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x1f7a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1f7a78:
    // 0x1f7a78: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x1f7a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1f7a7c: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x1f7a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f7a80: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x1f7a80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1f7a84: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x1f7a84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f7a88: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x1f7a88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1f7a8c: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x1f7a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1f7a90: 0xc7b80188  lwc1        $f24, 0x188($sp)
    ctx->pc = 0x1f7a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f7a94: 0xc7b70180  lwc1        $f23, 0x180($sp)
    ctx->pc = 0x1f7a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f7a98: 0xc7b60178  lwc1        $f22, 0x178($sp)
    ctx->pc = 0x1f7a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f7a9c: 0xc7b50170  lwc1        $f21, 0x170($sp)
    ctx->pc = 0x1f7a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f7aa0: 0xc7b40168  lwc1        $f20, 0x168($sp)
    ctx->pc = 0x1f7aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f7aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AA4u;
        // 0x1f7aa8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7AACu;
    // 0x1f7aac: 0x0  nop
    ctx->pc = 0x1f7aacu;
    // NOP
    ctx->pc = 0x1f7ab0u;
}

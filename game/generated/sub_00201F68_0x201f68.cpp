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

// Function: sub_00201F68
// Address: 0x201f68 - 0x2026a0
void sub_00201F68_0x201f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201F68_0x201f68");
#endif

    switch (ctx->pc) {
        case 0x202020u: goto label_202020;
        case 0x20202cu: goto label_20202c;
        case 0x202040u: goto label_202040;
        case 0x202054u: goto label_202054;
        case 0x202064u: goto label_202064;
        case 0x202074u: goto label_202074;
        case 0x2020a8u: goto label_2020a8;
        case 0x202100u: goto label_202100;
        case 0x202128u: goto label_202128;
        case 0x202140u: goto label_202140;
        case 0x202158u: goto label_202158;
        case 0x20216cu: goto label_20216c;
        case 0x202174u: goto label_202174;
        case 0x202184u: goto label_202184;
        case 0x202198u: goto label_202198;
        case 0x2021a8u: goto label_2021a8;
        case 0x2021c0u: goto label_2021c0;
        case 0x2021d4u: goto label_2021d4;
        case 0x2021e8u: goto label_2021e8;
        case 0x2021fcu: goto label_2021fc;
        case 0x20220cu: goto label_20220c;
        case 0x202240u: goto label_202240;
        case 0x202264u: goto label_202264;
        case 0x2022d0u: goto label_2022d0;
        case 0x2022f4u: goto label_2022f4;
        case 0x202318u: goto label_202318;
        case 0x202384u: goto label_202384;
        case 0x2023a4u: goto label_2023a4;
        case 0x2023c8u: goto label_2023c8;
        case 0x2023f8u: goto label_2023f8;
        case 0x202418u: goto label_202418;
        case 0x202450u: goto label_202450;
        case 0x20246cu: goto label_20246c;
        case 0x2024c0u: goto label_2024c0;
        case 0x202540u: goto label_202540;
        case 0x2025f8u: goto label_2025f8;
        case 0x202638u: goto label_202638;
        default: break;
    }

    ctx->pc = 0x201f68u;

    // 0x201f68: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x201f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x201f6c: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x201f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
    // 0x201f70: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x201f70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f74: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x201f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x201f78: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x201f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x201f7c: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x201f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x201f80: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x201f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x201f84: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x201f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x201f88: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x201f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x201f8c: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x201f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x201f90: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x201f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x201f94: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x201f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x201f98: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x201f98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x201f9c: 0x8ee30048  lw          $v1, 0x48($s7)
    ctx->pc = 0x201f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x201fa0: 0x1460017f  bnez        $v1, . + 4 + (0x17F << 2)
    ctx->pc = 0x201FA0u;
    {
        const bool branch_taken_0x201fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FA0u;
        // 0x201fa4: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fa0) {
            ctx->pc = 0x2025A0u;
            goto label_2025a0;
        }
    }
    ctx->pc = 0x201FA8u;
    // 0x201fa8: 0x96e4003c  lhu         $a0, 0x3C($s7)
    ctx->pc = 0x201fa8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 60)));
    // 0x201fac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x201facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x201fb0: 0x8ee30894  lw          $v1, 0x894($s7)
    ctx->pc = 0x201fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2196)));
    // 0x201fb4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x201fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x201fb8: 0x86e8003e  lh          $t0, 0x3E($s7)
    ctx->pc = 0x201fb8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 62)));
    // 0x201fbc: 0x8c7e0020  lw          $fp, 0x20($v1)
    ctx->pc = 0x201fbcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x201fc0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x201fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x201fc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x201fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x201fc8: 0x27c30070  addiu       $v1, $fp, 0x70
    ctx->pc = 0x201fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    // 0x201fcc: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x201fccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x201fd0: 0x26d6a540  addiu       $s6, $s6, -0x5AC0
    ctx->pc = 0x201fd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944064));
    // 0x201fd4: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x201fd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x201fd8: 0x1505002b  bne         $t0, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x201FD8u;
    {
        const bool branch_taken_0x201fd8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x201FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FD8u;
        // 0x201fdc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fd8) {
            ctx->pc = 0x202088u;
            goto label_202088;
        }
    }
    ctx->pc = 0x201FE0u;
    // 0x201fe0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x201fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x201fe4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x201fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x201fe8: 0x24633cb0  addiu       $v1, $v1, 0x3CB0
    ctx->pc = 0x201fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15536));
    // 0x201fec: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x201fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
    // 0x201ff0: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x201ff0u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x463CB8u));
    // 0x201ff4: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x201ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x201ff8: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x201ff8u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x463CA8u));
    // 0x201ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202000: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x202000u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x463CA0u));
    // 0x202004: 0x27d20700  addiu       $s2, $fp, 0x700
    ctx->pc = 0x202004u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 1792));
    // 0x202008: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x202008u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x463CB0u));
    // 0x20200c: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x20200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
    // 0x202010: 0xffa60028  sd          $a2, 0x28($sp)
    ctx->pc = 0x202010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 6));
    // 0x202014: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x202014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x202018: 0xc0849c0  jal         func_212700
    ctx->pc = 0x202018u;
    SET_GPR_U32(ctx, 31, 0x202020u);
    ctx->pc = 0x20201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202018u;
    // 0x20201c: 0xffa70038  sd          $a3, 0x38($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x202018u, 0x202020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202020u;
label_202020:
    // 0x202020: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x202020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x202024: 0xc0849c0  jal         func_212700
    ctx->pc = 0x202024u;
    SET_GPR_U32(ctx, 31, 0x20202Cu);
    ctx->pc = 0x202028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202024u;
    // 0x202028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x202024u, 0x20202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20202Cu;
label_20202c:
    // 0x20202c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20202cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202030: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x202030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x202034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202038: 0xc0849a0  jal         func_212680
    ctx->pc = 0x202038u;
    SET_GPR_U32(ctx, 31, 0x202040u);
    ctx->pc = 0x20203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202038u;
    // 0x20203c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212680u, 0x202038u, 0x202040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202040u;
label_202040:
    // 0x202040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202044: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x202044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20204c: 0xc0849a0  jal         func_212680
    ctx->pc = 0x20204Cu;
    SET_GPR_U32(ctx, 31, 0x202054u);
    ctx->pc = 0x202050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20204Cu;
    // 0x202050: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212680u, 0x20204Cu, 0x202054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202054u;
label_202054:
    // 0x202054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202058: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x202058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20205c: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x20205Cu;
    SET_GPR_U32(ctx, 31, 0x202064u);
    ctx->pc = 0x202060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20205Cu;
    // 0x202060: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x20205Cu, 0x202064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202064u;
label_202064:
    // 0x202064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202068: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20206c: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x20206Cu;
    SET_GPR_U32(ctx, 31, 0x202074u);
    ctx->pc = 0x202070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20206Cu;
    // 0x202070: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x20206Cu, 0x202074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202074u;
label_202074:
    // 0x202074: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x202074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x202078: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x202078u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20207c: 0x7ec20020  sq          $v0, 0x20($s6)
    ctx->pc = 0x20207cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), GPR_VEC(ctx, 2));
    // 0x202080: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x202080u;
    {
        const bool branch_taken_0x202080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202080u;
        // 0x202084: 0x7ec30030  sq          $v1, 0x30($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202080) {
            ctx->pc = 0x202240u;
            goto label_202240;
        }
    }
    ctx->pc = 0x202088u;
label_202088:
    // 0x202088: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x202088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20208c: 0x55020008  bnel        $t0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20208Cu;
    {
        const bool branch_taken_0x20208c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x20208c) {
            ctx->pc = 0x202090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20208Cu;
            // 0x202090: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2020B0u;
            goto label_2020b0;
        }
    }
    ctx->pc = 0x202094u;
    // 0x202094: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x202094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x202098: 0x26c40020  addiu       $a0, $s6, 0x20
    ctx->pc = 0x202098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x20209c: 0x24c6b5e0  addiu       $a2, $a2, -0x4A20
    ctx->pc = 0x20209cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948320));
    // 0x2020a0: 0xc08491e  jal         func_212478
    ctx->pc = 0x2020A0u;
    SET_GPR_U32(ctx, 31, 0x2020A8u);
    ctx->pc = 0x2020A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2020A0u;
    // 0x2020a4: 0x27c50790  addiu       $a1, $fp, 0x790 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2020A0u, 0x2020A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2020A8u;
label_2020a8:
    // 0x2020a8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2020A8u;
    {
        const bool branch_taken_0x2020a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2020ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020A8u;
        // 0x2020ac: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020a8) {
            ctx->pc = 0x202244u;
            goto label_202244;
        }
    }
    ctx->pc = 0x2020B0u;
label_2020b0:
    // 0x2020b0: 0x15020015  bne         $t0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2020B0u;
    {
        const bool branch_taken_0x2020b0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2020B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020B0u;
        // 0x2020b4: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020b0) {
            ctx->pc = 0x202108u;
            goto label_202108;
        }
    }
    ctx->pc = 0x2020B8u;
    // 0x2020b8: 0xc6c10050  lwc1        $f1, 0x50($s6)
    ctx->pc = 0x2020b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2020bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2020bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2020c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2020c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2020c4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2020c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2020c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2020c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2020cc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2020ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2020d0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2020d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2020d4: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x2020d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2020d8: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x2020d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2020dc: 0x86c4004a  lh          $a0, 0x4A($s6)
    ctx->pc = 0x2020dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 74)));
    // 0x2020e0: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x2020e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x2020e4: 0x14800056  bnez        $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2020E4u;
    {
        const bool branch_taken_0x2020e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2020E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020E4u;
        // 0x2020e8: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020e4) {
            ctx->pc = 0x202240u;
            goto label_202240;
        }
    }
    ctx->pc = 0x2020ECu;
    // 0x2020ec: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2020ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2020f0: 0x26c40020  addiu       $a0, $s6, 0x20
    ctx->pc = 0x2020f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x2020f4: 0x27c50280  addiu       $a1, $fp, 0x280
    ctx->pc = 0x2020f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 640));
    // 0x2020f8: 0xc08491e  jal         func_212478
    ctx->pc = 0x2020F8u;
    SET_GPR_U32(ctx, 31, 0x202100u);
    ctx->pc = 0x2020FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2020F8u;
    // 0x2020fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2020F8u, 0x202100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202100u;
label_202100:
    // 0x202100: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x202100u;
    {
        const bool branch_taken_0x202100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202100u;
        // 0x202104: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202100) {
            ctx->pc = 0x202244u;
            goto label_202244;
        }
    }
    ctx->pc = 0x202108u;
label_202108:
    // 0x202108: 0x55020043  bnel        $t0, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x202108u;
    {
        const bool branch_taken_0x202108 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x202108) {
            ctx->pc = 0x20210Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202108u;
            // 0x20210c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202218u;
            goto label_202218;
        }
    }
    ctx->pc = 0x202110u;
    // 0x202110: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x202110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x202114: 0x26d20030  addiu       $s2, $s6, 0x30
    ctx->pc = 0x202114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x202118: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x202118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x20211c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20211cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x202120: 0xc0849c0  jal         func_212700
    ctx->pc = 0x202120u;
    SET_GPR_U32(ctx, 31, 0x202128u);
    ctx->pc = 0x202124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202120u;
    // 0x202124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x202120u, 0x202128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202128u;
label_202128:
    // 0x202128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20212c: 0xc78c82e8  lwc1        $f12, -0x7D18($gp)
    ctx->pc = 0x20212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x202130: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202134: 0x26d50040  addiu       $s5, $s6, 0x40
    ctx->pc = 0x202134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x202138: 0xc084a62  jal         func_212988
    ctx->pc = 0x202138u;
    SET_GPR_U32(ctx, 31, 0x202140u);
    ctx->pc = 0x20213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202138u;
    // 0x20213c: 0x26d30020  addiu       $s3, $s6, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x202138u, 0x202140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202140u;
label_202140:
    // 0x202140: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202144: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x202144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202148: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x202148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20214c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20214cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202150: 0xc08491e  jal         func_212478
    ctx->pc = 0x202150u;
    SET_GPR_U32(ctx, 31, 0x202158u);
    ctx->pc = 0x202154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202150u;
    // 0x202154: 0x26d40050  addiu       $s4, $s6, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x202150u, 0x202158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202158u;
label_202158:
    // 0x202158: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x202158u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20215c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x20215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202164: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x202164u;
    SET_GPR_U32(ctx, 31, 0x20216Cu);
    ctx->pc = 0x202168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202164u;
    // 0x202168: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x202164u, 0x20216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20216Cu;
label_20216c:
    // 0x20216c: 0xc0849c0  jal         func_212700
    ctx->pc = 0x20216Cu;
    SET_GPR_U32(ctx, 31, 0x202174u);
    ctx->pc = 0x202170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20216Cu;
    // 0x202170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x20216Cu, 0x202174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202174u;
label_202174:
    // 0x202174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202178: 0xc78c82ec  lwc1        $f12, -0x7D14($gp)
    ctx->pc = 0x202178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20217c: 0xc084a62  jal         func_212988
    ctx->pc = 0x20217Cu;
    SET_GPR_U32(ctx, 31, 0x202184u);
    ctx->pc = 0x202180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20217Cu;
    // 0x202180: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x20217Cu, 0x202184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202184u;
label_202184:
    // 0x202184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202188: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x202188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20218c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20218cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202190: 0xc08491e  jal         func_212478
    ctx->pc = 0x202190u;
    SET_GPR_U32(ctx, 31, 0x202198u);
    ctx->pc = 0x202194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202190u;
    // 0x202194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x202190u, 0x202198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202198u;
label_202198:
    // 0x202198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20219c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20219cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021a0: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x2021A0u;
    SET_GPR_U32(ctx, 31, 0x2021A8u);
    ctx->pc = 0x2021A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021A0u;
    // 0x2021a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x2021A0u, 0x2021A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021A8u;
label_2021a8:
    // 0x2021a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2021a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021ac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2021acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2021b0: 0x3c01c448  lui         $at, 0xC448
    ctx->pc = 0x2021b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50248 << 16));
    // 0x2021b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2021b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2021b8: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x2021B8u;
    SET_GPR_U32(ctx, 31, 0x2021C0u);
    ctx->pc = 0x2021BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021B8u;
    // 0x2021bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x2021B8u, 0x2021C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021C0u;
label_2021c0:
    // 0x2021c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2021c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021c4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2021c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2021c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2021c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021cc: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x2021CCu;
    SET_GPR_U32(ctx, 31, 0x2021D4u);
    ctx->pc = 0x2021D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021CCu;
    // 0x2021d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x2021CCu, 0x2021D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021D4u;
label_2021d4:
    // 0x2021d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2021d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021d8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2021d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2021dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2021dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021e0: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x2021E0u;
    SET_GPR_U32(ctx, 31, 0x2021E8u);
    ctx->pc = 0x2021E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021E0u;
    // 0x2021e4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x2021E0u, 0x2021E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021E8u;
label_2021e8:
    // 0x2021e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2021e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021ec: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2021ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2021f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2021f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021f4: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x2021F4u;
    SET_GPR_U32(ctx, 31, 0x2021FCu);
    ctx->pc = 0x2021F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021F4u;
    // 0x2021f8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x2021F4u, 0x2021FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021FCu;
label_2021fc:
    // 0x2021fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2021fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202200: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x202200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202204: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x202204u;
    SET_GPR_U32(ctx, 31, 0x20220Cu);
    ctx->pc = 0x202208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202204u;
    // 0x202208: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x202204u, 0x20220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20220Cu;
label_20220c:
    // 0x20220c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20220Cu;
    {
        const bool branch_taken_0x20220c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20220Cu;
        // 0x202210: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20220c) {
            ctx->pc = 0x202244u;
            goto label_202244;
        }
    }
    ctx->pc = 0x202214u;
    // 0x202214: 0x0  nop
    ctx->pc = 0x202214u;
    // NOP
label_202218:
    // 0x202218: 0x26c40020  addiu       $a0, $s6, 0x20
    ctx->pc = 0x202218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x20221c: 0x24423cc0  addiu       $v0, $v0, 0x3CC0
    ctx->pc = 0x20221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15552));
    // 0x202220: 0x27c50bb0  addiu       $a1, $fp, 0xBB0
    ctx->pc = 0x202220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 2992));
    // 0x202224: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x202224u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x202228: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x202228u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20222c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x20222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x202230: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x202230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202234: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x202234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x202238: 0xc084784  jal         func_211E10
    ctx->pc = 0x202238u;
    SET_GPR_U32(ctx, 31, 0x202240u);
    ctx->pc = 0x20223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202238u;
    // 0x20223c: 0xffa70020  sd          $a3, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x202238u, 0x202240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202240u;
label_202240:
    // 0x202240: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x202240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_202244:
    // 0x202244: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x202244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202248: 0x24423cd0  addiu       $v0, $v0, 0x3CD0
    ctx->pc = 0x202248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15568));
    // 0x20224c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20224cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202250: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x202250u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202254: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x202254u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x202258: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x202258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
    // 0x20225c: 0xc0849c0  jal         func_212700
    ctx->pc = 0x20225Cu;
    SET_GPR_U32(ctx, 31, 0x202264u);
    ctx->pc = 0x202260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20225Cu;
    // 0x202260: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x20225Cu, 0x202264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202264u;
label_202264:
    // 0x202264: 0x86e2007a  lh          $v0, 0x7A($s7)
    ctx->pc = 0x202264u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 122)));
    // 0x202268: 0xc78282f0  lwc1        $f2, -0x7D10($gp)
    ctx->pc = 0x202268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20226c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20226cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202270: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202274: 0xc78182f4  lwc1        $f1, -0x7D0C($gp)
    ctx->pc = 0x202274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202278: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x202278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x20227c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20227cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x202280: 0x0  nop
    ctx->pc = 0x202280u;
    // NOP
    // 0x202284: 0x0  nop
    ctx->pc = 0x202284u;
    // NOP
    // 0x202288: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x202288u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x20228c: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x20228cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202290: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x202290u;
    {
        const bool branch_taken_0x202290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202290) {
            ctx->pc = 0x2022A8u;
            goto label_2022a8;
        }
    }
    ctx->pc = 0x202298u;
    // 0x202298: 0xc78082f8  lwc1        $f0, -0x7D08($gp)
    ctx->pc = 0x202298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20229c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20229Cu;
    {
        const bool branch_taken_0x20229c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20229Cu;
        // 0x2022a0: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20229c) {
            ctx->pc = 0x2022C0u;
            goto label_2022c0;
        }
    }
    ctx->pc = 0x2022A4u;
    // 0x2022a4: 0x0  nop
    ctx->pc = 0x2022a4u;
    // NOP
label_2022a8:
    // 0x2022a8: 0xc78082fc  lwc1        $f0, -0x7D04($gp)
    ctx->pc = 0x2022a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022ac: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2022acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2022b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2022B0u;
    {
        const bool branch_taken_0x2022b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2022B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022B0u;
        // 0x2022b4: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022b0) {
            ctx->pc = 0x2022C4u;
            goto label_2022c4;
        }
    }
    ctx->pc = 0x2022B8u;
    // 0x2022b8: 0xc7808300  lwc1        $f0, -0x7D00($gp)
    ctx->pc = 0x2022b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2022bc: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2022bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2022c0:
    // 0x2022c0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2022c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2022c4:
    // 0x2022c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2022c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022c8: 0xc084a62  jal         func_212988
    ctx->pc = 0x2022C8u;
    SET_GPR_U32(ctx, 31, 0x2022D0u);
    ctx->pc = 0x2022CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022C8u;
    // 0x2022cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x2022C8u, 0x2022D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022D0u;
label_2022d0:
    // 0x2022d0: 0x7bc20cd0  lq          $v0, 0xCD0($fp)
    ctx->pc = 0x2022d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 3280)));
    // 0x2022d4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2022d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2022d8: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2022d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2022dc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2022dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022e0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2022e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2022e4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2022e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2022e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2022e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022ec: 0xc08491e  jal         func_212478
    ctx->pc = 0x2022ECu;
    SET_GPR_U32(ctx, 31, 0x2022F4u);
    ctx->pc = 0x2022F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022ECu;
    // 0x2022f0: 0x26c40010  addiu       $a0, $s6, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2022ECu, 0x2022F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022F4u;
label_2022f4:
    // 0x2022f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2022f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2022f8: 0x24423ce0  addiu       $v0, $v0, 0x3CE0
    ctx->pc = 0x2022f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15584));
    // 0x2022fc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2022fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202300: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x202300u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x463CE0u));
    // 0x202304: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x202304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202308: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x202308u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x463CE8u));
    // 0x20230c: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x20230cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
    // 0x202310: 0xc0849c0  jal         func_212700
    ctx->pc = 0x202310u;
    SET_GPR_U32(ctx, 31, 0x202318u);
    ctx->pc = 0x202314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202310u;
    // 0x202314: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x202310u, 0x202318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202318u;
label_202318:
    // 0x202318: 0x86e2007a  lh          $v0, 0x7A($s7)
    ctx->pc = 0x202318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 122)));
    // 0x20231c: 0xc7828304  lwc1        $f2, -0x7CFC($gp)
    ctx->pc = 0x20231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202324: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202328: 0xc7818308  lwc1        $f1, -0x7CF8($gp)
    ctx->pc = 0x202328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20232c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20232cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x202330: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x202330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x202334: 0x0  nop
    ctx->pc = 0x202334u;
    // NOP
    // 0x202338: 0x0  nop
    ctx->pc = 0x202338u;
    // NOP
    // 0x20233c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x20233cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x202340: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x202340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202344: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x202344u;
    {
        const bool branch_taken_0x202344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202344) {
            ctx->pc = 0x202358u;
            goto label_202358;
        }
    }
    ctx->pc = 0x20234Cu;
    // 0x20234c: 0xc780830c  lwc1        $f0, -0x7CF4($gp)
    ctx->pc = 0x20234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202350: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x202350u;
    {
        const bool branch_taken_0x202350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202350u;
        // 0x202354: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202350) {
            ctx->pc = 0x202370u;
            goto label_202370;
        }
    }
    ctx->pc = 0x202358u;
label_202358:
    // 0x202358: 0xc7808310  lwc1        $f0, -0x7CF0($gp)
    ctx->pc = 0x202358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20235c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x20235cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202360: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x202360u;
    {
        const bool branch_taken_0x202360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x202364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202360u;
        // 0x202364: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202360) {
            ctx->pc = 0x202374u;
            goto label_202374;
        }
    }
    ctx->pc = 0x202368u;
    // 0x202368: 0xc7808314  lwc1        $f0, -0x7CEC($gp)
    ctx->pc = 0x202368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20236c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x20236cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_202370:
    // 0x202370: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x202370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_202374:
    // 0x202374: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x202374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20237c: 0xc084a62  jal         func_212988
    ctx->pc = 0x20237Cu;
    SET_GPR_U32(ctx, 31, 0x202384u);
    ctx->pc = 0x202380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20237Cu;
    // 0x202380: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x20237Cu, 0x202384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202384u;
label_202384:
    // 0x202384: 0x7bc20190  lq          $v0, 0x190($fp)
    ctx->pc = 0x202384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 400)));
    // 0x202388: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x202388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20238c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20238cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202390: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x202390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202394: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x202394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x202398: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x202398u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x20239c: 0xc08491e  jal         func_212478
    ctx->pc = 0x20239Cu;
    SET_GPR_U32(ctx, 31, 0x2023A4u);
    ctx->pc = 0x2023A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20239Cu;
    // 0x2023a0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x20239Cu, 0x2023A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2023A4u;
label_2023a4:
    // 0x2023a4: 0x8ee200c4  lw          $v0, 0xC4($s7)
    ctx->pc = 0x2023a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 196)));
    // 0x2023a8: 0x92e30196  lbu         $v1, 0x196($s7)
    ctx->pc = 0x2023a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 406)));
    // 0x2023ac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2023acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2023b0: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2023B0u;
    {
        const bool branch_taken_0x2023b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2023B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023B0u;
        // 0x2023b4: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023b0) {
            ctx->pc = 0x202494u;
            goto label_202494;
        }
    }
    ctx->pc = 0x2023B8u;
    // 0x2023b8: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2023b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2023bc: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x2023bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2023c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2023c4: 0x0  nop
    ctx->pc = 0x2023c4u;
    // NOP
label_2023c8:
    // 0x2023c8: 0x138040  sll         $s0, $s3, 1
    ctx->pc = 0x2023c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2023cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2023ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023d0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2023d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023d4: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x2023d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2023d8: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x2023d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2023dc: 0x92320000  lbu         $s2, 0x0($s1)
    ctx->pc = 0x2023dcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2023e0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2023e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023e4: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x2023e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2023e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2023e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2023ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2023ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023f0: 0xc080768  jal         func_201DA0
    ctx->pc = 0x2023F0u;
    SET_GPR_U32(ctx, 31, 0x2023F8u);
    ctx->pc = 0x2023F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2023F0u;
    // 0x2023f4: 0x2f08021  addu        $s0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201DA0u, 0x2023F0u, 0x2023F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2023F8u;
label_2023f8:
    // 0x2023f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2023f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2023fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202400: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202404: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x202404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202408: 0x26100318  addiu       $s0, $s0, 0x318
    ctx->pc = 0x202408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
    // 0x20240c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x20240cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202410: 0xc080734  jal         func_201CD0
    ctx->pc = 0x202410u;
    SET_GPR_U32(ctx, 31, 0x202418u);
    ctx->pc = 0x202414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202410u;
    // 0x202414: 0x7ea20000  sq          $v0, 0x0($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201CD0u, 0x202410u, 0x202418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202418u;
label_202418:
    // 0x202418: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x202418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20241c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x20241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202420: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x202420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202424: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x202424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202428: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x202428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20242c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x20242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202430: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x202430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x202434: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x202434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x202438: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x202438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x20243c: 0x92320001  lbu         $s2, 0x1($s1)
    ctx->pc = 0x20243cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x202440: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x202440u;
    {
        const bool branch_taken_0x202440 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x202444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202440u;
        // 0x202444: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202440) {
            ctx->pc = 0x202484u;
            goto label_202484;
        }
    }
    ctx->pc = 0x202448u;
    // 0x202448: 0xc080768  jal         func_201DA0
    ctx->pc = 0x202448u;
    SET_GPR_U32(ctx, 31, 0x202450u);
    ctx->pc = 0x201DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201DA0u, 0x202448u, 0x202450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202450u;
label_202450:
    // 0x202450: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202454: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x202454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202458: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x202458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20245c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20245cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202460: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x202460u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202464: 0xc080734  jal         func_201CD0
    ctx->pc = 0x202464u;
    SET_GPR_U32(ctx, 31, 0x20246Cu);
    ctx->pc = 0x202468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202464u;
    // 0x202468: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201CD0u, 0x202464u, 0x20246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20246Cu;
label_20246c:
    // 0x20246c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x20246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202470: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x202470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x202474: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x202474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202478: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x202478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x20247c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20247cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x202480: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x202480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_202484:
    // 0x202484: 0x92e20196  lbu         $v0, 0x196($s7)
    ctx->pc = 0x202484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 406)));
    // 0x202488: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x202488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20248c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x20248Cu;
    {
        const bool branch_taken_0x20248c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20248Cu;
        // 0x202490: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20248c) {
            ctx->pc = 0x2023C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2023c8;
        }
    }
    ctx->pc = 0x202494u;
label_202494:
    // 0x202494: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x202494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x202498: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x202498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x20249c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20249cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2024a0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2024a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2024a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2024a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2024a8: 0x2448b4f8  addiu       $t0, $v0, -0x4B08
    ctx->pc = 0x2024a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948088));
    // 0x2024ac: 0x26e50378  addiu       $a1, $s7, 0x378
    ctx->pc = 0x2024acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 888));
    // 0x2024b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2024b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024b4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2024b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2024b8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2024b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2024bc: 0x0  nop
    ctx->pc = 0x2024bcu;
    // NOP
label_2024c0:
    // 0x2024c0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2024c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2024c4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2024c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2024c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2024c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2024cc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2024ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2024d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2024d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2024d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2024d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2024d8: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2024d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2024dc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2024dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2024e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2024e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2024e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2024e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2024e8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2024e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2024ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2024ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2024f0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2024f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2024f4: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2024f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2024f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2024f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2024fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2024fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202500: 0x16670003  bne         $s3, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x202500u;
    {
        const bool branch_taken_0x202500 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 7));
        ctx->pc = 0x202504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202500u;
        // 0x202504: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202500) {
            ctx->pc = 0x202510u;
            goto label_202510;
        }
    }
    ctx->pc = 0x202508u;
    // 0x202508: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x202508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x20250c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x20250cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_202510:
    // 0x202510: 0x16660004  bne         $s3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x202510u;
    {
        const bool branch_taken_0x202510 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 6));
        ctx->pc = 0x202514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202510u;
        // 0x202514: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202510) {
            ctx->pc = 0x202524u;
            goto label_202524;
        }
    }
    ctx->pc = 0x202518u;
    // 0x202518: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x202518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20251c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20251cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x202520: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x202520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_202524:
    // 0x202524: 0x2e62000e  sltiu       $v0, $s3, 0xE
    ctx->pc = 0x202524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x202528: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x202528u;
    {
        const bool branch_taken_0x202528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202528u;
        // 0x20252c: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202528) {
            ctx->pc = 0x2024C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2024c0;
        }
    }
    ctx->pc = 0x202530u;
    // 0x202530: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x202530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x202534: 0x26f00490  addiu       $s0, $s7, 0x490
    ctx->pc = 0x202534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 1168));
    // 0x202538: 0x2446b458  addiu       $a2, $v0, -0x4BA8
    ctx->pc = 0x202538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947928));
    // 0x20253c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20253cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202540:
    // 0x202540: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x202540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x202544: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x202544u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x202548: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x202548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20254c: 0x2e650008  sltiu       $a1, $s3, 0x8
    ctx->pc = 0x20254cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x202550: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x202550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202554: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x202554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x202558: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x202558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20255c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20255cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x202560: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x202560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x202564: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x202564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x202568: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x202568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x20256c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20256cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202570: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x202570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x202574: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x202574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202578: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x202578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20257c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x20257cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x202580: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x202580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202584: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x202584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202588: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x202588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x20258c: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x20258Cu;
    {
        const bool branch_taken_0x20258c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x202590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20258Cu;
        // 0x202590: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20258c) {
            ctx->pc = 0x202540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202540;
        }
    }
    ctx->pc = 0x202594u;
    // 0x202594: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x202594u;
    {
        const bool branch_taken_0x202594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202594u;
        // 0x202598: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202594) {
            ctx->pc = 0x202670u;
            goto label_202670;
        }
    }
    ctx->pc = 0x20259Cu;
    // 0x20259c: 0x0  nop
    ctx->pc = 0x20259cu;
    // NOP
label_2025a0:
    // 0x2025a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2025A0u;
    {
        const bool branch_taken_0x2025a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025A0u;
        // 0x2025a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025a0) {
            ctx->pc = 0x2025B4u;
            goto label_2025b4;
        }
    }
    ctx->pc = 0x2025A8u;
    // 0x2025a8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2025A8u;
    {
        const bool branch_taken_0x2025a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2025ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025A8u;
        // 0x2025ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025a8) {
            ctx->pc = 0x2025B4u;
            goto label_2025b4;
        }
    }
    ctx->pc = 0x2025B0u;
    // 0x2025b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2025b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2025b4:
    // 0x2025b4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2025B4u;
    {
        const bool branch_taken_0x2025b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025B4u;
        // 0x2025b8: 0x26e40750  addiu       $a0, $s7, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025b4) {
            ctx->pc = 0x20266Cu;
            goto label_20266c;
        }
    }
    ctx->pc = 0x2025BCu;
    // 0x2025bc: 0x26e50378  addiu       $a1, $s7, 0x378
    ctx->pc = 0x2025bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 888));
    // 0x2025c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2025c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2025c4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2025c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2025c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2025c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2025cc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2025ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2025d0: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x2025d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x2025d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2025d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2025d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2025d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2025dc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2025dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2025e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2025e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2025e4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2025e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2025e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2025e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2025ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2025ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2025f0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2025f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2025f4: 0x0  nop
    ctx->pc = 0x2025f4u;
    // NOP
label_2025f8:
    // 0x2025f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2025f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2025fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2025fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x202600: 0x2e63000e  sltiu       $v1, $s3, 0xE
    ctx->pc = 0x202600u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x202604: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x202604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202608: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x202608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x20260c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202610: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x202610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202614: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x202614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x202618: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x202618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20261c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202620: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x202620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x202624: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x202624u;
    {
        const bool branch_taken_0x202624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202624u;
        // 0x202628: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202624) {
            ctx->pc = 0x2025F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2025f8;
        }
    }
    ctx->pc = 0x20262Cu;
    // 0x20262c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20262cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x202630: 0x26f00490  addiu       $s0, $s7, 0x490
    ctx->pc = 0x202630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 1168));
    // 0x202634: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x202634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202638:
    // 0x202638: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x202638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20263c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20263cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x202640: 0x2e630008  sltiu       $v1, $s3, 0x8
    ctx->pc = 0x202640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x202644: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x202644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202648: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x202648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x20264c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202650: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x202650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202654: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x202654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x202658: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x202658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20265c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202660: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x202660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x202664: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x202664u;
    {
        const bool branch_taken_0x202664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202664u;
        // 0x202668: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202664) {
            ctx->pc = 0x202638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202638;
        }
    }
    ctx->pc = 0x20266Cu;
label_20266c:
    // 0x20266c: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x20266cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_202670:
    // 0x202670: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x202670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x202674: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x202674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x202678: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x202678u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x20267c: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x20267cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x202680: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x202680u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x202684: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x202684u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202688: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x202688u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20268c: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x20268cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x202690: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x202690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x202694: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x202694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x202698: 0x3e00008  jr          $ra
    ctx->pc = 0x202698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202698u;
        // 0x20269c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2026A0u;
}

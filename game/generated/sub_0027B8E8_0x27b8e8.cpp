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

// Function: sub_0027B8E8
// Address: 0x27b8e8 - 0x27bfc0
void sub_0027B8E8_0x27b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B8E8_0x27b8e8");
#endif

    switch (ctx->pc) {
        case 0x27b958u: goto label_27b958;
        case 0x27b990u: goto label_27b990;
        case 0x27b9e0u: goto label_27b9e0;
        case 0x27baecu: goto label_27baec;
        case 0x27bcf0u: goto label_27bcf0;
        case 0x27bd20u: goto label_27bd20;
        case 0x27bd34u: goto label_27bd34;
        case 0x27bd44u: goto label_27bd44;
        case 0x27bd5cu: goto label_27bd5c;
        case 0x27bd88u: goto label_27bd88;
        case 0x27bd98u: goto label_27bd98;
        case 0x27bda8u: goto label_27bda8;
        case 0x27bdb8u: goto label_27bdb8;
        case 0x27bdd8u: goto label_27bdd8;
        case 0x27bef4u: goto label_27bef4;
        case 0x27bf00u: goto label_27bf00;
        case 0x27bf18u: goto label_27bf18;
        default: break;
    }

    ctx->pc = 0x27b8e8u;

    // 0x27b8e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27b8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27b8ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b8f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b8f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27b8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27b8f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27b8f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b8fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27b8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27b900: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27b904: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27b908: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x27b908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x27b90c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27b910: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x27b910u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27b914: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x27b914u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27b918: 0xa200020b  sb          $zero, 0x20B($s0)
    ctx->pc = 0x27b918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 523), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b91c: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x27b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x27b920: 0x1440019b  bnez        $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x27B920u;
    {
        const bool branch_taken_0x27b920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B920u;
        // 0x27b924: 0xa200020c  sb          $zero, 0x20C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 524), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b920) {
            ctx->pc = 0x27BF90u;
            goto label_27bf90;
        }
    }
    ctx->pc = 0x27B928u;
    // 0x27b928: 0x860202c4  lh          $v0, 0x2C4($s0)
    ctx->pc = 0x27b928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x27b92c: 0x2842001a  slti        $v0, $v0, 0x1A
    ctx->pc = 0x27b92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x27b930: 0x50400198  beql        $v0, $zero, . + 4 + (0x198 << 2)
    ctx->pc = 0x27B930u;
    {
        const bool branch_taken_0x27b930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b930) {
            ctx->pc = 0x27B934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B930u;
            // 0x27b934: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BF94u;
            goto label_27bf94;
        }
    }
    ctx->pc = 0x27B938u;
    // 0x27b938: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x27b938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x27b93c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b940: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x27b940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x27b944: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27b944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b948: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x27b948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x27b94c: 0x86050096  lh          $a1, 0x96($s0)
    ctx->pc = 0x27b94cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x27b950: 0xc09e84e  jal         func_27A138
    ctx->pc = 0x27B950u;
    SET_GPR_U32(ctx, 31, 0x27B958u);
    ctx->pc = 0x27B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B950u;
    // 0x27b954: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A138u, 0x27B950u, 0x27B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B958u;
label_27b958:
    // 0x27b958: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27b958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b95c: 0x8f82ca84  lw          $v0, -0x357C($gp)
    ctx->pc = 0x27b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953604)));
    // 0x27b960: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B960u;
    {
        const bool branch_taken_0x27b960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b960) {
            ctx->pc = 0x27B964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B960u;
            // 0x27b964: 0x96230000  lhu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B974u;
            goto label_27b974;
        }
    }
    ctx->pc = 0x27B968u;
    // 0x27b968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b96c: 0xa202020b  sb          $v0, 0x20B($s0)
    ctx->pc = 0x27b96cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 523), (uint8_t)GPR_U32(ctx, 2));
    // 0x27b970: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x27b970u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_27b974:
    // 0x27b974: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x27b974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27b978: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x27B978u;
    {
        const bool branch_taken_0x27b978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B978u;
        // 0x27b97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b978) {
            ctx->pc = 0x27BA40u;
            goto label_27ba40;
        }
    }
    ctx->pc = 0x27B980u;
    // 0x27b980: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x27b980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27b984: 0xa6020304  sh          $v0, 0x304($s0)
    ctx->pc = 0x27b984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b988: 0xc09905e  jal         func_264178
    ctx->pc = 0x27B988u;
    SET_GPR_U32(ctx, 31, 0x27B990u);
    ctx->pc = 0x27B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B988u;
    // 0x27b98c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x27B988u, 0x27B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B990u;
label_27b990:
    // 0x27b990: 0x86030146  lh          $v1, 0x146($s0)
    ctx->pc = 0x27b990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
    // 0x27b994: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B994u;
    {
        const bool branch_taken_0x27b994 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x27B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B994u;
        // 0x27b998: 0xae020310  sw          $v0, 0x310($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b994) {
            ctx->pc = 0x27B9A8u;
            goto label_27b9a8;
        }
    }
    ctx->pc = 0x27B99Cu;
    // 0x27b99c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27B99Cu;
    {
        const bool branch_taken_0x27b99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B99Cu;
        // 0x27b9a0: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b99c) {
            ctx->pc = 0x27B9ACu;
            goto label_27b9ac;
        }
    }
    ctx->pc = 0x27B9A4u;
    // 0x27b9a4: 0x0  nop
    ctx->pc = 0x27b9a4u;
    // NOP
label_27b9a8:
    // 0x27b9a8: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x27b9a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_27b9ac:
    // 0x27b9ac: 0xa60202fe  sh          $v0, 0x2FE($s0)
    ctx->pc = 0x27b9acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b9b0: 0x860302fe  lh          $v1, 0x2FE($s0)
    ctx->pc = 0x27b9b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x27b9b4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27b9b8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B9B8u;
    {
        const bool branch_taken_0x27b9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27b9b8) {
            ctx->pc = 0x27B9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B9B8u;
            // 0x27b9bc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B9D0u;
            goto label_27b9d0;
        }
    }
    ctx->pc = 0x27B9C0u;
    // 0x27b9c0: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x27b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x27b9c4: 0x94430024  lhu         $v1, 0x24($v0)
    ctx->pc = 0x27b9c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x27b9c8: 0xa60302fe  sh          $v1, 0x2FE($s0)
    ctx->pc = 0x27b9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 3));
    // 0x27b9cc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x27b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_27b9d0:
    // 0x27b9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9d4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x27b9d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27b9d8: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27B9D8u;
    SET_GPR_U32(ctx, 31, 0x27B9E0u);
    ctx->pc = 0x27B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B9D8u;
    // 0x27b9dc: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27B9D8u, 0x27B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9E0u;
label_27b9e0:
    // 0x27b9e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27b9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b9e4: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27b9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b9e8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x27b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27b9ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b9f0: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x27b9f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x27b9f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27b9f8: 0xa202030d  sb          $v0, 0x30D($s0)
    ctx->pc = 0x27b9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 2));
    // 0x27b9fc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x27b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27ba00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27ba04: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x27ba04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x27ba08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27ba08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27ba0c: 0xa202030c  sb          $v0, 0x30C($s0)
    ctx->pc = 0x27ba0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 2));
    // 0x27ba10: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x27ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27ba14: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x27ba14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x27ba18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27ba18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27ba1c: 0xa202030e  sb          $v0, 0x30E($s0)
    ctx->pc = 0x27ba1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 2));
    // 0x27ba20: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x27ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27ba24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27ba28: 0xa2050190  sb          $a1, 0x190($s0)
    ctx->pc = 0x27ba28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 5));
    // 0x27ba2c: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x27ba2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x27ba30: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27ba30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27ba34: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x27BA34u;
    {
        const bool branch_taken_0x27ba34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA34u;
        // 0x27ba38: 0xa203030f  sb          $v1, 0x30F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba34) {
            ctx->pc = 0x27BF84u;
            goto label_27bf84;
        }
    }
    ctx->pc = 0x27BA3Cu;
    // 0x27ba3c: 0x0  nop
    ctx->pc = 0x27ba3cu;
    // NOP
label_27ba40:
    // 0x27ba40: 0x96060096  lhu         $a2, 0x96($s0)
    ctx->pc = 0x27ba40u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x27ba44: 0x96250010  lhu         $a1, 0x10($s1)
    ctx->pc = 0x27ba44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x27ba48: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x27ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x27ba4c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x27ba4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x27ba50: 0x24a2fffb  addiu       $v0, $a1, -0x5
    ctx->pc = 0x27ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x27ba54: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27ba54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27ba58: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27BA58u;
    {
        const bool branch_taken_0x27ba58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA58u;
        // 0x27ba5c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba58) {
            ctx->pc = 0x27BA90u;
            goto label_27ba90;
        }
    }
    ctx->pc = 0x27BA60u;
    // 0x27ba60: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x27ba60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27ba64: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27BA64u;
    {
        const bool branch_taken_0x27ba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA64u;
        // 0x27ba68: 0x96040146  lhu         $a0, 0x146($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba64) {
            ctx->pc = 0x27BAB0u;
            goto label_27bab0;
        }
    }
    ctx->pc = 0x27BA6Cu;
    // 0x27ba6c: 0x86020146  lh          $v0, 0x146($s0)
    ctx->pc = 0x27ba6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
    // 0x27ba70: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27BA70u;
    {
        const bool branch_taken_0x27ba70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA70u;
        // 0x27ba74: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba70) {
            ctx->pc = 0x27BA98u;
            goto label_27ba98;
        }
    }
    ctx->pc = 0x27BA78u;
    // 0x27ba78: 0x960206aa  lhu         $v0, 0x6AA($s0)
    ctx->pc = 0x27ba78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1706)));
    // 0x27ba7c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x27ba7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x27ba80: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x27BA80u;
    {
        const bool branch_taken_0x27ba80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ba80) {
            ctx->pc = 0x27BA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BA80u;
            // 0x27ba84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BAD8u;
            goto label_27bad8;
        }
    }
    ctx->pc = 0x27BA88u;
    // 0x27ba88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27BA88u;
    {
        const bool branch_taken_0x27ba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA88u;
        // 0x27ba8c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba88) {
            ctx->pc = 0x27BA98u;
            goto label_27ba98;
        }
    }
    ctx->pc = 0x27BA90u;
label_27ba90:
    // 0x27ba90: 0x96040146  lhu         $a0, 0x146($s0)
    ctx->pc = 0x27ba90u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
    // 0x27ba94: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x27ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_27ba98:
    // 0x27ba98: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27ba98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27ba9c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x27ba9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27baa0: 0x54400102  bnel        $v0, $zero, . + 4 + (0x102 << 2)
    ctx->pc = 0x27BAA0u;
    {
        const bool branch_taken_0x27baa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27baa0) {
            ctx->pc = 0x27BAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BAA0u;
            // 0x27baa4: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BEACu;
            goto label_27beac;
        }
    }
    ctx->pc = 0x27BAA8u;
    // 0x27baa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27BAA8u;
    {
        const bool branch_taken_0x27baa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAA8u;
        // 0x27baac: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27baa8) {
            ctx->pc = 0x27BAB4u;
            goto label_27bab4;
        }
    }
    ctx->pc = 0x27BAB0u;
label_27bab0:
    // 0x27bab0: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x27bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_27bab4:
    // 0x27bab4: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x27bab4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x27bab8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27bab8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27babc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x27babcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27bac0: 0x546000fa  bnel        $v1, $zero, . + 4 + (0xFA << 2)
    ctx->pc = 0x27BAC0u;
    {
        const bool branch_taken_0x27bac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bac0) {
            ctx->pc = 0x27BAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BAC0u;
            // 0x27bac4: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BEACu;
            goto label_27beac;
        }
    }
    ctx->pc = 0x27BAC8u;
    // 0x27bac8: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x27bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x27bacc: 0x584000f7  blezl       $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x27BACCu;
    {
        const bool branch_taken_0x27bacc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27bacc) {
            ctx->pc = 0x27BAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BACCu;
            // 0x27bad0: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BEACu;
            goto label_27beac;
        }
    }
    ctx->pc = 0x27BAD4u;
    // 0x27bad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bad8:
    // 0x27bad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27badc: 0xa202020c  sb          $v0, 0x20C($s0)
    ctx->pc = 0x27badcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 524), (uint8_t)GPR_U32(ctx, 2));
    // 0x27bae0: 0xa202020b  sb          $v0, 0x20B($s0)
    ctx->pc = 0x27bae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 523), (uint8_t)GPR_U32(ctx, 2));
    // 0x27bae4: 0xc09905e  jal         func_264178
    ctx->pc = 0x27BAE4u;
    SET_GPR_U32(ctx, 31, 0x27BAECu);
    ctx->pc = 0x27BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BAE4u;
    // 0x27bae8: 0x96250008  lhu         $a1, 0x8($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x27BAE4u, 0x27BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAECu;
label_27baec:
    // 0x27baec: 0x9603007a  lhu         $v1, 0x7A($s0)
    ctx->pc = 0x27baecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x27baf0: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x27baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x27baf4: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x27baf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x27baf8: 0x9482001a  lhu         $v0, 0x1A($a0)
    ctx->pc = 0x27baf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x27bafc: 0x8615007a  lh          $s5, 0x7A($s0)
    ctx->pc = 0x27bafcu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x27bb00: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x27bb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27bb04: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x27BB04u;
    {
        const bool branch_taken_0x27bb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB04u;
        // 0x27bb08: 0xc6150074  lwc1        $f21, 0x74($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb04) {
            ctx->pc = 0x27BC44u;
            goto label_27bc44;
        }
    }
    ctx->pc = 0x27BB0Cu;
    // 0x27bb0c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x27bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27bb10: 0xc7828c44  lwc1        $f2, -0x73BC($gp)
    ctx->pc = 0x27bb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27bb14: 0xa602007a  sh          $v0, 0x7A($s0)
    ctx->pc = 0x27bb14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x27bb18: 0xc7818c48  lwc1        $f1, -0x73B8($gp)
    ctx->pc = 0x27bb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bb1c: 0x8482001a  lh          $v0, 0x1A($a0)
    ctx->pc = 0x27bb1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x27bb20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bb20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bb24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27bb24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27bb28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27bb28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x27bb2c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27bb2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27bb30: 0x0  nop
    ctx->pc = 0x27bb30u;
    // NOP
    // 0x27bb34: 0x0  nop
    ctx->pc = 0x27bb34u;
    // NOP
    // 0x27bb38: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x27bb38u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x27bb3c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x27bb3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bb40: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27BB40u;
    {
        const bool branch_taken_0x27bb40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bb40) {
            ctx->pc = 0x27BB58u;
            goto label_27bb58;
        }
    }
    ctx->pc = 0x27BB48u;
    // 0x27bb48: 0xc7808c4c  lwc1        $f0, -0x73B4($gp)
    ctx->pc = 0x27bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bb4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27BB4Cu;
    {
        const bool branch_taken_0x27bb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB4Cu;
        // 0x27bb50: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb4c) {
            ctx->pc = 0x27BB70u;
            goto label_27bb70;
        }
    }
    ctx->pc = 0x27BB54u;
    // 0x27bb54: 0x0  nop
    ctx->pc = 0x27bb54u;
    // NOP
label_27bb58:
    // 0x27bb58: 0xc7808c50  lwc1        $f0, -0x73B0($gp)
    ctx->pc = 0x27bb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bb5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27bb5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bb60: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27BB60u;
    {
        const bool branch_taken_0x27bb60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bb60) {
            ctx->pc = 0x27BB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BB60u;
            // 0x27bb64: 0x4601a041  sub.s       $f1, $f20, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BB74u;
            goto label_27bb74;
        }
    }
    ctx->pc = 0x27BB68u;
    // 0x27bb68: 0xc7808c54  lwc1        $f0, -0x73AC($gp)
    ctx->pc = 0x27bb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bb6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27bb6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27bb70:
    // 0x27bb70: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x27bb70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_27bb74:
    // 0x27bb74: 0xc7808c58  lwc1        $f0, -0x73A8($gp)
    ctx->pc = 0x27bb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bb78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27bb78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bb7c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27BB7Cu;
    {
        const bool branch_taken_0x27bb7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bb7c) {
            ctx->pc = 0x27BB90u;
            goto label_27bb90;
        }
    }
    ctx->pc = 0x27BB84u;
    // 0x27bb84: 0xc7808c5c  lwc1        $f0, -0x73A4($gp)
    ctx->pc = 0x27bb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bb88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27BB88u;
    {
        const bool branch_taken_0x27bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB88u;
        // 0x27bb8c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb88) {
            ctx->pc = 0x27BBA8u;
            goto label_27bba8;
        }
    }
    ctx->pc = 0x27BB90u;
label_27bb90:
    // 0x27bb90: 0xc7808c60  lwc1        $f0, -0x73A0($gp)
    ctx->pc = 0x27bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bb94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27bb94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bb98: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27BB98u;
    {
        const bool branch_taken_0x27bb98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bb98) {
            ctx->pc = 0x27BB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BB98u;
            // 0x27bb9c: 0xe6010020  swc1        $f1, 0x20($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BBACu;
            goto label_27bbac;
        }
    }
    ctx->pc = 0x27BBA0u;
    // 0x27bba0: 0xc7808c64  lwc1        $f0, -0x739C($gp)
    ctx->pc = 0x27bba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bba4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27bba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27bba8:
    // 0x27bba8: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x27bba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_27bbac:
    // 0x27bbac: 0xc7828c68  lwc1        $f2, -0x7398($gp)
    ctx->pc = 0x27bbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27bbb0: 0x8482001a  lh          $v0, 0x1A($a0)
    ctx->pc = 0x27bbb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x27bbb4: 0xc7818c6c  lwc1        $f1, -0x7394($gp)
    ctx->pc = 0x27bbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bbb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bbbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27bbbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27bbc0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27bbc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x27bbc4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27bbc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27bbc8: 0x0  nop
    ctx->pc = 0x27bbc8u;
    // NOP
    // 0x27bbcc: 0x0  nop
    ctx->pc = 0x27bbccu;
    // NOP
    // 0x27bbd0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x27bbd0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x27bbd4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x27bbd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bbd8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27BBD8u;
    {
        const bool branch_taken_0x27bbd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bbd8) {
            ctx->pc = 0x27BBF0u;
            goto label_27bbf0;
        }
    }
    ctx->pc = 0x27BBE0u;
    // 0x27bbe0: 0xc7808c70  lwc1        $f0, -0x7390($gp)
    ctx->pc = 0x27bbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bbe4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27BBE4u;
    {
        const bool branch_taken_0x27bbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBE4u;
        // 0x27bbe8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbe4) {
            ctx->pc = 0x27BC08u;
            goto label_27bc08;
        }
    }
    ctx->pc = 0x27BBECu;
    // 0x27bbec: 0x0  nop
    ctx->pc = 0x27bbecu;
    // NOP
label_27bbf0:
    // 0x27bbf0: 0xc7808c74  lwc1        $f0, -0x738C($gp)
    ctx->pc = 0x27bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bbf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27bbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bbf8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27BBF8u;
    {
        const bool branch_taken_0x27bbf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bbf8) {
            ctx->pc = 0x27BBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BBF8u;
            // 0x27bbfc: 0x4601a841  sub.s       $f1, $f21, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BC0Cu;
            goto label_27bc0c;
        }
    }
    ctx->pc = 0x27BC00u;
    // 0x27bc00: 0xc7808c78  lwc1        $f0, -0x7388($gp)
    ctx->pc = 0x27bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27bc04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27bc08:
    // 0x27bc08: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x27bc08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_27bc0c:
    // 0x27bc0c: 0xc7808c7c  lwc1        $f0, -0x7384($gp)
    ctx->pc = 0x27bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27bc10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bc14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27BC14u;
    {
        const bool branch_taken_0x27bc14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bc14) {
            ctx->pc = 0x27BC28u;
            goto label_27bc28;
        }
    }
    ctx->pc = 0x27BC1Cu;
    // 0x27bc1c: 0xc7808c80  lwc1        $f0, -0x7380($gp)
    ctx->pc = 0x27bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27BC20u;
    {
        const bool branch_taken_0x27bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC20u;
        // 0x27bc24: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc20) {
            ctx->pc = 0x27BC40u;
            goto label_27bc40;
        }
    }
    ctx->pc = 0x27BC28u;
label_27bc28:
    // 0x27bc28: 0xc7808c84  lwc1        $f0, -0x737C($gp)
    ctx->pc = 0x27bc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27bc2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bc30: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27BC30u;
    {
        const bool branch_taken_0x27bc30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bc30) {
            ctx->pc = 0x27BC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BC30u;
            // 0x27bc34: 0xe6010074  swc1        $f1, 0x74($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BC44u;
            goto label_27bc44;
        }
    }
    ctx->pc = 0x27BC38u;
    // 0x27bc38: 0xc7808c88  lwc1        $f0, -0x7378($gp)
    ctx->pc = 0x27bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27bc3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27bc40:
    // 0x27bc40: 0xe6010074  swc1        $f1, 0x74($s0)
    ctx->pc = 0x27bc40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_27bc44:
    // 0x27bc44: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x27bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27bc48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27bc4c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x27bc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x27bc50: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x27BC50u;
    {
        const bool branch_taken_0x27bc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC50u;
        // 0x27bc54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc50) {
            ctx->pc = 0x27BCE8u;
            goto label_27bce8;
        }
    }
    ctx->pc = 0x27BC58u;
    // 0x27bc58: 0xc7818c8c  lwc1        $f1, -0x7374($gp)
    ctx->pc = 0x27bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bc5c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x27bc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc60: 0x9602007a  lhu         $v0, 0x7A($s0)
    ctx->pc = 0x27bc60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x27bc64: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x27bc64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27bc68: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x27bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x27bc6c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x27bc6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bc70: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27BC70u;
    {
        const bool branch_taken_0x27bc70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC70u;
        // 0x27bc74: 0xa602007a  sh          $v0, 0x7A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc70) {
            ctx->pc = 0x27BC88u;
            goto label_27bc88;
        }
    }
    ctx->pc = 0x27BC78u;
    // 0x27bc78: 0xc7808c90  lwc1        $f0, -0x7370($gp)
    ctx->pc = 0x27bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27BC7Cu;
    {
        const bool branch_taken_0x27bc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC7Cu;
        // 0x27bc80: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc7c) {
            ctx->pc = 0x27BCA4u;
            goto label_27bca4;
        }
    }
    ctx->pc = 0x27BC84u;
    // 0x27bc84: 0x0  nop
    ctx->pc = 0x27bc84u;
    // NOP
label_27bc88:
    // 0x27bc88: 0xc7808c94  lwc1        $f0, -0x736C($gp)
    ctx->pc = 0x27bc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc8c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27bc8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bc90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27BC90u;
    {
        const bool branch_taken_0x27bc90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bc90) {
            ctx->pc = 0x27BCA0u;
            goto label_27bca0;
        }
    }
    ctx->pc = 0x27BC98u;
    // 0x27bc98: 0xc7808c98  lwc1        $f0, -0x7368($gp)
    ctx->pc = 0x27bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc9c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27bc9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27bca0:
    // 0x27bca0: 0xc7818c9c  lwc1        $f1, -0x7364($gp)
    ctx->pc = 0x27bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bca4:
    // 0x27bca4: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x27bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bca8: 0xe6020020  swc1        $f2, 0x20($s0)
    ctx->pc = 0x27bca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x27bcac: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x27bcacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27bcb0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x27bcb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bcb4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27BCB4u;
    {
        const bool branch_taken_0x27bcb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bcb4) {
            ctx->pc = 0x27BCC8u;
            goto label_27bcc8;
        }
    }
    ctx->pc = 0x27BCBCu;
    // 0x27bcbc: 0xc7808ca0  lwc1        $f0, -0x7360($gp)
    ctx->pc = 0x27bcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bcc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27BCC0u;
    {
        const bool branch_taken_0x27bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCC0u;
        // 0x27bcc4: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcc0) {
            ctx->pc = 0x27BCE0u;
            goto label_27bce0;
        }
    }
    ctx->pc = 0x27BCC8u;
label_27bcc8:
    // 0x27bcc8: 0xc7808ca4  lwc1        $f0, -0x735C($gp)
    ctx->pc = 0x27bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bccc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27bcccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bcd0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27BCD0u;
    {
        const bool branch_taken_0x27bcd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bcd0) {
            ctx->pc = 0x27BCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BCD0u;
            // 0x27bcd4: 0xe6020074  swc1        $f2, 0x74($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BCE4u;
            goto label_27bce4;
        }
    }
    ctx->pc = 0x27BCD8u;
    // 0x27bcd8: 0xc7808ca8  lwc1        $f0, -0x7358($gp)
    ctx->pc = 0x27bcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bcdc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27bcdcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27bce0:
    // 0x27bce0: 0xe6020074  swc1        $f2, 0x74($s0)
    ctx->pc = 0x27bce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_27bce4:
    // 0x27bce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27bce8:
    // 0x27bce8: 0xc07d362  jal         func_1F4D88
    ctx->pc = 0x27BCE8u;
    SET_GPR_U32(ctx, 31, 0x27BCF0u);
    ctx->pc = 0x27BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BCE8u;
    // 0x27bcec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D88u, 0x27BCE8u, 0x27BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCF0u;
label_27bcf0:
    // 0x27bcf0: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x27bcf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27bcf4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x27bcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x27bcf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BCF8u;
    {
        const bool branch_taken_0x27bcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCF8u;
        // 0x27bcfc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcf8) {
            ctx->pc = 0x27BD08u;
            goto label_27bd08;
        }
    }
    ctx->pc = 0x27BD00u;
    // 0x27bd00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27BD00u;
    {
        const bool branch_taken_0x27bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD00u;
        // 0x27bd04: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd00) {
            ctx->pc = 0x27BD10u;
            goto label_27bd10;
        }
    }
    ctx->pc = 0x27BD08u;
label_27bd08:
    // 0x27bd08: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x27bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x27bd0c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27bd0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bd10:
    // 0x27bd10: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x27bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x27bd14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27bd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd18: 0xc080a68  jal         func_2029A0
    ctx->pc = 0x27BD18u;
    SET_GPR_U32(ctx, 31, 0x27BD20u);
    ctx->pc = 0x27BD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD18u;
    // 0x27bd1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2029A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2029A0u, 0x27BD18u, 0x27BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD20u;
label_27bd20:
    // 0x27bd20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27bd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27bd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27bd28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd2c: 0xc09e84e  jal         func_27A138
    ctx->pc = 0x27BD2Cu;
    SET_GPR_U32(ctx, 31, 0x27BD34u);
    ctx->pc = 0x27BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD2Cu;
    // 0x27bd30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A138u, 0x27BD2Cu, 0x27BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD34u;
label_27bd34:
    // 0x27bd34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27bd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27bd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd3c: 0xc080a68  jal         func_2029A0
    ctx->pc = 0x27BD3Cu;
    SET_GPR_U32(ctx, 31, 0x27BD44u);
    ctx->pc = 0x27BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD3Cu;
    // 0x27bd40: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2029A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2029A0u, 0x27BD3Cu, 0x27BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD44u;
label_27bd44:
    // 0x27bd44: 0xa615007a  sh          $s5, 0x7A($s0)
    ctx->pc = 0x27bd44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 21));
    // 0x27bd48: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x27bd48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x27bd4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd50: 0xe6150074  swc1        $f21, 0x74($s0)
    ctx->pc = 0x27bd50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x27bd54: 0xc07d362  jal         func_1F4D88
    ctx->pc = 0x27BD54u;
    SET_GPR_U32(ctx, 31, 0x27BD5Cu);
    ctx->pc = 0x27BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD54u;
    // 0x27bd58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D88u, 0x27BD54u, 0x27BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD5Cu;
label_27bd5c:
    // 0x27bd5c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x27bd5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27bd60: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x27bd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27bd64: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x27BD64u;
    {
        const bool branch_taken_0x27bd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD64u;
        // 0x27bd68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd64) {
            ctx->pc = 0x27BEA0u;
            goto label_27bea0;
        }
    }
    ctx->pc = 0x27BD6Cu;
    // 0x27bd6c: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x27bd6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x27bd70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27bd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27bd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd78: 0xa6030304  sh          $v1, 0x304($s0)
    ctx->pc = 0x27bd78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 3));
    // 0x27bd7c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x27bd7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27bd80: 0xc09ec0e  jal         func_27B038
    ctx->pc = 0x27BD80u;
    SET_GPR_U32(ctx, 31, 0x27BD88u);
    ctx->pc = 0x27BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD80u;
    // 0x27bd84: 0xa602017a  sh          $v0, 0x17A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 378), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B038u, 0x27BD80u, 0x27BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD88u;
label_27bd88:
    // 0x27bd88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27bd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bd90: 0xc09ec0e  jal         func_27B038
    ctx->pc = 0x27BD90u;
    SET_GPR_U32(ctx, 31, 0x27BD98u);
    ctx->pc = 0x27BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BD90u;
    // 0x27bd94: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B038u, 0x27BD90u, 0x27BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BD98u;
label_27bd98:
    // 0x27bd98: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BD98u;
    {
        const bool branch_taken_0x27bd98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BD98u;
        // 0x27bd9c: 0x96050304  lhu         $a1, 0x304($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd98) {
            ctx->pc = 0x27BDB0u;
            goto label_27bdb0;
        }
    }
    ctx->pc = 0x27BDA0u;
    // 0x27bda0: 0xc0990ca  jal         func_264328
    ctx->pc = 0x27BDA0u;
    SET_GPR_U32(ctx, 31, 0x27BDA8u);
    ctx->pc = 0x27BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDA0u;
    // 0x27bda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x27BDA0u, 0x27BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDA8u;
label_27bda8:
    // 0x27bda8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27BDA8u;
    {
        const bool branch_taken_0x27bda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDA8u;
        // 0x27bdac: 0xae020310  sw          $v0, 0x310($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bda8) {
            ctx->pc = 0x27BDBCu;
            goto label_27bdbc;
        }
    }
    ctx->pc = 0x27BDB0u;
label_27bdb0:
    // 0x27bdb0: 0xc09905e  jal         func_264178
    ctx->pc = 0x27BDB0u;
    SET_GPR_U32(ctx, 31, 0x27BDB8u);
    ctx->pc = 0x27BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDB0u;
    // 0x27bdb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x27BDB0u, 0x27BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDB8u;
label_27bdb8:
    // 0x27bdb8: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x27bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
label_27bdbc:
    // 0x27bdbc: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x27bdbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x27bdc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bdc4: 0xa60302fe  sh          $v1, 0x2FE($s0)
    ctx->pc = 0x27bdc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 3));
    // 0x27bdc8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x27bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x27bdcc: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x27bdccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27bdd0: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27BDD0u;
    SET_GPR_U32(ctx, 31, 0x27BDD8u);
    ctx->pc = 0x27BDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDD0u;
    // 0x27bdd4: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27BDD0u, 0x27BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDD8u;
label_27bdd8:
    // 0x27bdd8: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x27bdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x27bddc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27bddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bde0: 0xa6070300  sh          $a3, 0x300($s0)
    ctx->pc = 0x27bde0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 7));
    // 0x27bde4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x27bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x27bde8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x27bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27bdec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x27bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27bdf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27bdf4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x27bdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x27bdf8: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x27bdf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x27bdfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27bdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27be00: 0xa202030d  sb          $v0, 0x30D($s0)
    ctx->pc = 0x27be00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 2));
    // 0x27be04: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x27be04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27be08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27be0c: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x27be0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x27be10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27be10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27be14: 0xa202030c  sb          $v0, 0x30C($s0)
    ctx->pc = 0x27be14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 2));
    // 0x27be18: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x27be18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27be1c: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x27be1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x27be20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27be20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27be24: 0xa202030e  sb          $v0, 0x30E($s0)
    ctx->pc = 0x27be24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 2));
    // 0x27be28: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x27be28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27be2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27be30: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x27be30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x27be34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27be34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27be38: 0xa202030f  sb          $v0, 0x30F($s0)
    ctx->pc = 0x27be38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 2));
    // 0x27be3c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x27be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x27be40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27be44: 0x30443c00  andi        $a0, $v0, 0x3C00
    ctx->pc = 0x27be44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15360);
    // 0x27be48: 0x10860003  beq         $a0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BE48u;
    {
        const bool branch_taken_0x27be48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x27BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE48u;
        // 0x27be4c: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be48) {
            ctx->pc = 0x27BE58u;
            goto label_27be58;
        }
    }
    ctx->pc = 0x27BE50u;
    // 0x27be50: 0x5482000b  bnel        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27BE50u;
    {
        const bool branch_taken_0x27be50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x27be50) {
            ctx->pc = 0x27BE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BE50u;
            // 0x27be54: 0x8e0200c4  lw          $v0, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BE80u;
            goto label_27be80;
        }
    }
    ctx->pc = 0x27BE58u;
label_27be58:
    // 0x27be58: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x27be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27be5c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x27be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x27be60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27be60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27be64: 0x30633c00  andi        $v1, $v1, 0x3C00
    ctx->pc = 0x27be64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15360);
    // 0x27be68: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BE68u;
    {
        const bool branch_taken_0x27be68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27be68) {
            ctx->pc = 0x27BE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BE68u;
            // 0x27be6c: 0x8e0200c4  lw          $v0, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BE80u;
            goto label_27be80;
        }
    }
    ctx->pc = 0x27BE70u;
    // 0x27be70: 0x30e203ff  andi        $v0, $a3, 0x3FF
    ctx->pc = 0x27be70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1023);
    // 0x27be74: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x27be74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x27be78: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27be78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27be7c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x27be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_27be80:
    // 0x27be80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27be80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27be84: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x27be84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x27be88: 0xa6140306  sh          $s4, 0x306($s0)
    ctx->pc = 0x27be88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 20));
    // 0x27be8c: 0x31f82  srl         $v1, $v1, 30
    ctx->pc = 0x27be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 30));
    // 0x27be90: 0xa2040190  sb          $a0, 0x190($s0)
    ctx->pc = 0x27be90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 4));
    // 0x27be94: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27be94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27be98: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x27BE98u;
    {
        const bool branch_taken_0x27be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BE98u;
        // 0x27be9c: 0xa20301b9  sb          $v1, 0x1B9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 441), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be98) {
            ctx->pc = 0x27BF90u;
            goto label_27bf90;
        }
    }
    ctx->pc = 0x27BEA0u;
label_27bea0:
    // 0x27bea0: 0x96060096  lhu         $a2, 0x96($s0)
    ctx->pc = 0x27bea0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x27bea4: 0x96040146  lhu         $a0, 0x146($s0)
    ctx->pc = 0x27bea4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
    // 0x27bea8: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x27bea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_27beac:
    // 0x27beac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x27beacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x27beb0: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x27beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x27beb4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x27beb4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x27beb8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x27beb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x27bebc: 0x94a20024  lhu         $v0, 0x24($a1)
    ctx->pc = 0x27bebcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x27bec0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27bec4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27bec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27bec8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27BEC8u;
    {
        const bool branch_taken_0x27bec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bec8) {
            ctx->pc = 0x27BECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BEC8u;
            // 0x27becc: 0xa60602fe  sh          $a2, 0x2FE($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BEDCu;
            goto label_27bedc;
        }
    }
    ctx->pc = 0x27BED0u;
    // 0x27bed0: 0x5c600030  bgtzl       $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x27BED0u;
    {
        const bool branch_taken_0x27bed0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x27bed0) {
            ctx->pc = 0x27BED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BED0u;
            // 0x27bed4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BF94u;
            goto label_27bf94;
        }
    }
    ctx->pc = 0x27BED8u;
    // 0x27bed8: 0xa60602fe  sh          $a2, 0x2FE($s0)
    ctx->pc = 0x27bed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 6));
label_27bedc:
    // 0x27bedc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27bedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bee0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27bee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bee8: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x27bee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27beec: 0xc09ec0e  jal         func_27B038
    ctx->pc = 0x27BEECu;
    SET_GPR_U32(ctx, 31, 0x27BEF4u);
    ctx->pc = 0x27BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BEECu;
    // 0x27bef0: 0xa6020304  sh          $v0, 0x304($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B038u, 0x27BEECu, 0x27BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BEF4u;
label_27bef4:
    // 0x27bef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bef8: 0xc09905e  jal         func_264178
    ctx->pc = 0x27BEF8u;
    SET_GPR_U32(ctx, 31, 0x27BF00u);
    ctx->pc = 0x27BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BEF8u;
    // 0x27befc: 0x96050304  lhu         $a1, 0x304($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x27BEF8u, 0x27BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF00u;
label_27bf00:
    // 0x27bf00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27bf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bf04: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x27bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
    // 0x27bf08: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x27bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27bf0c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x27bf0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27bf10: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27BF10u;
    SET_GPR_U32(ctx, 31, 0x27BF18u);
    ctx->pc = 0x27BF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BF10u;
    // 0x27bf14: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27BF10u, 0x27BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF18u;
label_27bf18:
    // 0x27bf18: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x27bf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x27bf1c: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27bf1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27bf20: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27bf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27bf24: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x27bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27bf28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27bf2c: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x27bf2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x27bf30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27bf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27bf34: 0xa202030d  sb          $v0, 0x30D($s0)
    ctx->pc = 0x27bf34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 2));
    // 0x27bf38: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x27bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27bf3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27bf40: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x27bf40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x27bf44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27bf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27bf48: 0xa202030c  sb          $v0, 0x30C($s0)
    ctx->pc = 0x27bf48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 2));
    // 0x27bf4c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x27bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27bf50: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x27bf50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x27bf54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27bf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27bf58: 0xa202030e  sb          $v0, 0x30E($s0)
    ctx->pc = 0x27bf58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 2));
    // 0x27bf5c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x27bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27bf60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27bf64: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x27bf64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x27bf68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27bf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27bf6c: 0xa202030f  sb          $v0, 0x30F($s0)
    ctx->pc = 0x27bf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 2));
    // 0x27bf70: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x27bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x27bf74: 0xa2040190  sb          $a0, 0x190($s0)
    ctx->pc = 0x27bf74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 4));
    // 0x27bf78: 0x31f82  srl         $v1, $v1, 30
    ctx->pc = 0x27bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 30));
    // 0x27bf7c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27bf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27bf80: 0xa20301b9  sb          $v1, 0x1B9($s0)
    ctx->pc = 0x27bf80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 441), (uint8_t)GPR_U32(ctx, 3));
label_27bf84:
    // 0x27bf84: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x27bf84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27bf88: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x27bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x27bf8c: 0xa6020306  sh          $v0, 0x306($s0)
    ctx->pc = 0x27bf8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 2));
label_27bf90:
    // 0x27bf90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27bf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27bf94:
    // 0x27bf94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27bf94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27bf98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27bf98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bf9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27bf9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27bfa0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27bfa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bfa4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x27bfa4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27bfa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27bfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bfac: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x27bfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27bfb0: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x27bfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27bfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x27BFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFB4u;
        // 0x27bfb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BFBCu;
    // 0x27bfbc: 0x0  nop
    ctx->pc = 0x27bfbcu;
    // NOP
    ctx->pc = 0x27bfc0u;
}

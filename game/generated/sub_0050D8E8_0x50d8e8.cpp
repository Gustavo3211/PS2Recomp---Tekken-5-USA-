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

// Function: sub_0050D8E8
// Address: 0x50d8e8 - 0x50da90
void sub_0050D8E8_0x50d8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D8E8_0x50d8e8");
#endif

    switch (ctx->pc) {
        case 0x50d910u: goto label_50d910;
        case 0x50d930u: goto label_50d930;
        case 0x50d998u: goto label_50d998;
        case 0x50d9b4u: goto label_50d9b4;
        case 0x50d9d4u: goto label_50d9d4;
        case 0x50d9e8u: goto label_50d9e8;
        case 0x50d9f8u: goto label_50d9f8;
        case 0x50da14u: goto label_50da14;
        case 0x50da34u: goto label_50da34;
        case 0x50da48u: goto label_50da48;
        case 0x50da6cu: goto label_50da6c;
        default: break;
    }

    ctx->pc = 0x50d8e8u;

    // 0x50d8e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50d8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50d8ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x50d8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x50d8f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x50d8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d8f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x50d8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x50d8f8: 0x3c110090  lui         $s1, 0x90
    ctx->pc = 0x50d8f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)144 << 16));
    // 0x50d8fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x50d900: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x50d900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x50d904: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x50d904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x50d908: 0xc144ab4  jal         func_512AD0
    ctx->pc = 0x50D908u;
    SET_GPR_U32(ctx, 31, 0x50D910u);
    ctx->pc = 0x50D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D908u;
    // 0x50d90c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AD0u, 0x50D908u, 0x50D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D910u;
label_50d910:
    // 0x50d910: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x50d910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x50d914: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x50d914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x50d918: 0x2625f080  addiu       $a1, $s1, -0xF80
    ctx->pc = 0x50d918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
    // 0x50d91c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x50d91cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50d920: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x50d920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x50d924: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x50d924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50d928: 0x4400053  bltz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x50D928u;
    {
        const bool branch_taken_0x50d928 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D928u;
        // 0x50d92c: 0xa4a30080  sh          $v1, 0x80($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 128), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d928) {
            ctx->pc = 0x50DA78u;
            goto label_50da78;
        }
    }
    ctx->pc = 0x50D930u;
label_50d930:
    // 0x50d930: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x50d930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50d934: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x50d934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x50d938: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x50d938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x50d93c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x50d93cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50d940: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x50d940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x50d944: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x50d944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x50d948: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x50d948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x50d94c: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x50d94cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50d950: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x50d950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x50d954: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x50d954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x50d958: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x50d958u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x50d95c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x50d95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x50d960: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x50d960u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50d964: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x50d964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x50d968: 0x31c82  srl         $v1, $v1, 18
    ctx->pc = 0x50d968u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 18));
    // 0x50d96c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x50d96cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x50d970: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x50D970u;
    {
        const bool branch_taken_0x50d970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D970u;
        // 0x50d974: 0x2622f080  addiu       $v0, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d970) {
            ctx->pc = 0x50DA4Cu;
            goto label_50da4c;
        }
    }
    ctx->pc = 0x50D978u;
    // 0x50d978: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x50d978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x50d97c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x50d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x50d980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50d980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x50d984: 0x8c63d340  lw          $v1, -0x2CC0($v1)
    ctx->pc = 0x50d984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955840)));
    // 0x50d988: 0x600008  jr          $v1
    ctx->pc = 0x50D988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x50D990u: goto label_50d990;
            case 0x50D9A0u: goto label_50d9a0;
            case 0x50D9C0u: goto label_50d9c0;
            case 0x50D9E0u: goto label_50d9e0;
            case 0x50D9F0u: goto label_50d9f0;
            case 0x50DA00u: goto label_50da00;
            case 0x50DA20u: goto label_50da20;
            case 0x50DA40u: goto label_50da40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D988u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x50D990u;
label_50d990:
    // 0x50d990: 0xc141c4a  jal         func_507128
    ctx->pc = 0x50D990u;
    SET_GPR_U32(ctx, 31, 0x50D998u);
    ctx->pc = 0x50D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D990u;
    // 0x50d994: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507128u, 0x50D990u, 0x50D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D998u;
label_50d998:
    // 0x50d998: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x50D998u;
    {
        const bool branch_taken_0x50d998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D998u;
        // 0x50d99c: 0x2622f080  addiu       $v0, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d998) {
            ctx->pc = 0x50DA4Cu;
            goto label_50da4c;
        }
    }
    ctx->pc = 0x50D9A0u;
label_50d9a0:
    // 0x50d9a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x50d9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d9a4: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x50d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x50d9a8: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x50d9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x50d9ac: 0xc141f52  jal         func_507D48
    ctx->pc = 0x50D9ACu;
    SET_GPR_U32(ctx, 31, 0x50D9B4u);
    ctx->pc = 0x50D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D9ACu;
    // 0x50d9b0: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507D48u, 0x50D9ACu, 0x50D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D9B4u;
label_50d9b4:
    // 0x50d9b4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x50D9B4u;
    {
        const bool branch_taken_0x50d9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D9B4u;
        // 0x50d9b8: 0x2622f080  addiu       $v0, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d9b4) {
            ctx->pc = 0x50DA4Cu;
            goto label_50da4c;
        }
    }
    ctx->pc = 0x50D9BCu;
    // 0x50d9bc: 0x0  nop
    ctx->pc = 0x50d9bcu;
    // NOP
label_50d9c0:
    // 0x50d9c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x50d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d9c4: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x50d9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x50d9c8: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x50d9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x50d9cc: 0xc141ef0  jal         func_507BC0
    ctx->pc = 0x50D9CCu;
    SET_GPR_U32(ctx, 31, 0x50D9D4u);
    ctx->pc = 0x50D9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D9CCu;
    // 0x50d9d0: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507BC0u, 0x50D9CCu, 0x50D9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D9D4u;
label_50d9d4:
    // 0x50d9d4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x50D9D4u;
    {
        const bool branch_taken_0x50d9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D9D4u;
        // 0x50d9d8: 0x2622f080  addiu       $v0, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d9d4) {
            ctx->pc = 0x50DA4Cu;
            goto label_50da4c;
        }
    }
    ctx->pc = 0x50D9DCu;
    // 0x50d9dc: 0x0  nop
    ctx->pc = 0x50d9dcu;
    // NOP
label_50d9e0:
    // 0x50d9e0: 0xc141528  jal         func_5054A0
    ctx->pc = 0x50D9E0u;
    SET_GPR_U32(ctx, 31, 0x50D9E8u);
    ctx->pc = 0x50D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D9E0u;
    // 0x50d9e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5054A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5054A0u, 0x50D9E0u, 0x50D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D9E8u;
label_50d9e8:
    // 0x50d9e8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x50D9E8u;
    {
        const bool branch_taken_0x50d9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D9E8u;
        // 0x50d9ec: 0x2622f080  addiu       $v0, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d9e8) {
            ctx->pc = 0x50DA4Cu;
            goto label_50da4c;
        }
    }
    ctx->pc = 0x50D9F0u;
label_50d9f0:
    // 0x50d9f0: 0xc1424ba  jal         func_5092E8
    ctx->pc = 0x50D9F0u;
    SET_GPR_U32(ctx, 31, 0x50D9F8u);
    ctx->pc = 0x50D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D9F0u;
    // 0x50d9f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5092E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5092E8u, 0x50D9F0u, 0x50D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D9F8u;
label_50d9f8:
    // 0x50d9f8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x50D9F8u;
    {
        const bool branch_taken_0x50d9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D9F8u;
        // 0x50d9fc: 0x2622f080  addiu       $v0, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d9f8) {
            ctx->pc = 0x50DA4Cu;
            goto label_50da4c;
        }
    }
    ctx->pc = 0x50DA00u;
label_50da00:
    // 0x50da00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x50da00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50da04: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x50da04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x50da08: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x50da08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x50da0c: 0xc142f12  jal         func_50BC48
    ctx->pc = 0x50DA0Cu;
    SET_GPR_U32(ctx, 31, 0x50DA14u);
    ctx->pc = 0x50DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50DA0Cu;
    // 0x50da10: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50BC48u, 0x50DA0Cu, 0x50DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50DA14u;
label_50da14:
    // 0x50da14: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x50DA14u;
    {
        const bool branch_taken_0x50da14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50DA14u;
        // 0x50da18: 0x2622f080  addiu       $v0, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50da14) {
            ctx->pc = 0x50DA4Cu;
            goto label_50da4c;
        }
    }
    ctx->pc = 0x50DA1Cu;
    // 0x50da1c: 0x0  nop
    ctx->pc = 0x50da1cu;
    // NOP
label_50da20:
    // 0x50da20: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x50da20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50da24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x50da24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50da28: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x50da28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50da2c: 0xc141b9a  jal         func_506E68
    ctx->pc = 0x50DA2Cu;
    SET_GPR_U32(ctx, 31, 0x50DA34u);
    ctx->pc = 0x50DA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50DA2Cu;
    // 0x50da30: 0x8fa7000c  lw          $a3, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x506E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506E68u, 0x50DA2Cu, 0x50DA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50DA34u;
label_50da34:
    // 0x50da34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x50DA34u;
    {
        const bool branch_taken_0x50da34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50DA34u;
        // 0x50da38: 0x2622f080  addiu       $v0, $s1, -0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50da34) {
            ctx->pc = 0x50DA4Cu;
            goto label_50da4c;
        }
    }
    ctx->pc = 0x50DA3Cu;
    // 0x50da3c: 0x0  nop
    ctx->pc = 0x50da3cu;
    // NOP
label_50da40:
    // 0x50da40: 0xc142552  jal         func_509548
    ctx->pc = 0x50DA40u;
    SET_GPR_U32(ctx, 31, 0x50DA48u);
    ctx->pc = 0x509548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509548u, 0x50DA40u, 0x50DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50DA48u;
label_50da48:
    // 0x50da48: 0x2622f080  addiu       $v0, $s1, -0xF80
    ctx->pc = 0x50da48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963328));
label_50da4c:
    // 0x50da4c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x50da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x50da50: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x50da50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50da54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x50da54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x50da58: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x50da58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50da5c: 0x1480ffb4  bnez        $a0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x50DA5Cu;
    {
        const bool branch_taken_0x50da5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x50DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50DA5Cu;
        // 0x50da60: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50da5c) {
            ctx->pc = 0x50D930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50d930;
        }
    }
    ctx->pc = 0x50DA64u;
    // 0x50da64: 0xc144ab4  jal         func_512AD0
    ctx->pc = 0x50DA64u;
    SET_GPR_U32(ctx, 31, 0x50DA6Cu);
    ctx->pc = 0x512AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AD0u, 0x50DA64u, 0x50DA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50DA6Cu;
label_50da6c:
    // 0x50da6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x50da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50da70: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x50da70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x50da74: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x50da74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_50da78:
    // 0x50da78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x50da78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50da7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x50da7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50da80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50da80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50da84: 0x3e00008  jr          $ra
    ctx->pc = 0x50DA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50DA84u;
        // 0x50da88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50DA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50DA8Cu;
    // 0x50da8c: 0x0  nop
    ctx->pc = 0x50da8cu;
    // NOP
    ctx->pc = 0x50da90u;
}

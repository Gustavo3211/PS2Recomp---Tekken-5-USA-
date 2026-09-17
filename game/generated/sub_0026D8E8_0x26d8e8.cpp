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

// Function: sub_0026D8E8
// Address: 0x26d8e8 - 0x26dab8
void sub_0026D8E8_0x26d8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D8E8_0x26d8e8");
#endif

    switch (ctx->pc) {
        case 0x26d960u: goto label_26d960;
        case 0x26d9b0u: goto label_26d9b0;
        case 0x26d9d8u: goto label_26d9d8;
        case 0x26d9f4u: goto label_26d9f4;
        default: break;
    }

    ctx->pc = 0x26d8e8u;

    // 0x26d8e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26d8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26d8ec: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d8f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x26d8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x26d8f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26d8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26d8f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26d8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26d8fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26d900: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26d900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26d904: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x26d908: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x26d908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x26d90c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x26d90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x26d910: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26d910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26d914: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x26d914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
    // 0x26d918: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D918u;
    {
        const bool branch_taken_0x26d918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D918u;
        // 0x26d91c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d918) {
            ctx->pc = 0x26D930u;
            goto label_26d930;
        }
    }
    ctx->pc = 0x26D920u;
    // 0x26d920: 0xac600214  sw          $zero, 0x214($v1)
    ctx->pc = 0x26d920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 0));
    // 0x26d924: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x26D924u;
    {
        const bool branch_taken_0x26d924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D924u;
        // 0x26d928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d924) {
            ctx->pc = 0x26DA8Cu;
            goto label_26da8c;
        }
    }
    ctx->pc = 0x26D92Cu;
    // 0x26d92c: 0x0  nop
    ctx->pc = 0x26d92cu;
    // NOP
label_26d930:
    // 0x26d930: 0xac60024c  sw          $zero, 0x24C($v1)
    ctx->pc = 0x26d930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 588), GPR_U32(ctx, 0));
    // 0x26d934: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x26d934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26d938: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26d938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26d93c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x26d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x26d940: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x26d940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x26d944: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26d944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d948: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x26d948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x26d94c: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x26d94cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26d950: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26d950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26d954: 0x5064004c  beql        $v1, $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x26D954u;
    {
        const bool branch_taken_0x26d954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x26d954) {
            ctx->pc = 0x26D958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D954u;
            // 0x26d958: 0xacb5021c  sw          $s5, 0x21C($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DA88u;
            goto label_26da88;
        }
    }
    ctx->pc = 0x26D95Cu;
    // 0x26d95c: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x26d95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
label_26d960:
    // 0x26d960: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26D960u;
    {
        const bool branch_taken_0x26d960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d960) {
            ctx->pc = 0x26D964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D960u;
            // 0x26d964: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D990u;
            goto label_26d990;
        }
    }
    ctx->pc = 0x26D968u;
    // 0x26d968: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26d968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26d96c: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x26d96cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26d970: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x26d970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x26d974: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x26d974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x26d978: 0x96320014  lhu         $s2, 0x14($s1)
    ctx->pc = 0x26d978u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x26d97c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26d980: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x26d980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x26d984: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x26d984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x26d988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26D988u;
    {
        const bool branch_taken_0x26d988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D988u;
        // 0x26d98c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d988) {
            ctx->pc = 0x26D994u;
            goto label_26d994;
        }
    }
    ctx->pc = 0x26D990u;
label_26d990:
    // 0x26d990: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x26d990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d994:
    // 0x26d994: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x26D994u;
    {
        const bool branch_taken_0x26d994 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D994u;
        // 0x26d998: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d994) {
            ctx->pc = 0x26DA6Cu;
            goto label_26da6c;
        }
    }
    ctx->pc = 0x26D99Cu;
    // 0x26d99c: 0x3c140fff  lui         $s4, 0xFFF
    ctx->pc = 0x26d99cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4095 << 16));
    // 0x26d9a0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x26d9a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d9a4: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x26d9a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x26d9a8: 0x3c160010  lui         $s6, 0x10
    ctx->pc = 0x26d9a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16 << 16));
    // 0x26d9ac: 0x0  nop
    ctx->pc = 0x26d9acu;
    // NOP
label_26d9b0:
    // 0x26d9b0: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x26d9b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26d9b4: 0x5457002a  bnel        $v0, $s7, . + 4 + (0x2A << 2)
    ctx->pc = 0x26D9B4u;
    {
        const bool branch_taken_0x26d9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x26d9b4) {
            ctx->pc = 0x26D9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D9B4u;
            // 0x26d9b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DA60u;
            goto label_26da60;
        }
    }
    ctx->pc = 0x26D9BCu;
    // 0x26d9bc: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x26d9bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x26d9c0: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x26d9c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x26d9c4: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x26D9C4u;
    {
        const bool branch_taken_0x26d9c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d9c4) {
            ctx->pc = 0x26D9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D9C4u;
            // 0x26d9c8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DA60u;
            goto label_26da60;
        }
    }
    ctx->pc = 0x26D9CCu;
    // 0x26d9cc: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26d9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26d9d0: 0xc09905e  jal         func_264178
    ctx->pc = 0x26D9D0u;
    SET_GPR_U32(ctx, 31, 0x26D9D8u);
    ctx->pc = 0x26D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9D0u;
    // 0x26d9d4: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x26D9D0u, 0x26D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9D8u;
label_26d9d8:
    // 0x26d9d8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x26d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x26d9dc: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x26d9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x26d9e0: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x26d9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x26d9e4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26D9E4u;
    {
        const bool branch_taken_0x26d9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9E4u;
        // 0x26d9e8: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d9e4) {
            ctx->pc = 0x26DA18u;
            goto label_26da18;
        }
    }
    ctx->pc = 0x26D9ECu;
    // 0x26d9ec: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26D9ECu;
    SET_GPR_U32(ctx, 31, 0x26D9F4u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26D9ECu, 0x26D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9F4u;
label_26d9f4:
    // 0x26d9f4: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26d9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d9f8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26d9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26d9fc: 0x84a30380  lh          $v1, 0x380($a1)
    ctx->pc = 0x26d9fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x26da00: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26da00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26da04: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x26DA04u;
    {
        const bool branch_taken_0x26da04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26da04) {
            ctx->pc = 0x26DA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DA04u;
            // 0x26da08: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DA60u;
            goto label_26da60;
        }
    }
    ctx->pc = 0x26DA0Cu;
    // 0x26da0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26DA0Cu;
    {
        const bool branch_taken_0x26da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA0Cu;
        // 0x26da10: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da0c) {
            ctx->pc = 0x26DA1Cu;
            goto label_26da1c;
        }
    }
    ctx->pc = 0x26DA14u;
    // 0x26da14: 0x0  nop
    ctx->pc = 0x26da14u;
    // NOP
label_26da18:
    // 0x26da18: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x26da18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_26da1c:
    // 0x26da1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26da20: 0xac500220  sw          $s0, 0x220($v0)
    ctx->pc = 0x26da20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 16));
    // 0x26da24: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x26da24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x26da28: 0x2c63003c  sltiu       $v1, $v1, 0x3C
    ctx->pc = 0x26da28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x26da2c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x26DA2Cu;
    {
        const bool branch_taken_0x26da2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26da2c) {
            ctx->pc = 0x26DA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DA2Cu;
            // 0x26da30: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DA50u;
            goto label_26da50;
        }
    }
    ctx->pc = 0x26DA34u;
    // 0x26da34: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26da34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26da38: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x26da38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x26da3c: 0x8ca2024c  lw          $v0, 0x24C($a1)
    ctx->pc = 0x26da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 588)));
    // 0x26da40: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26da40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26da44: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26DA44u;
    {
        const bool branch_taken_0x26da44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26da44) {
            ctx->pc = 0x26DA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DA44u;
            // 0x26da48: 0xaca3024c  sw          $v1, 0x24C($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 588), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DA4Cu;
            goto label_26da4c;
        }
    }
    ctx->pc = 0x26DA4Cu;
label_26da4c:
    // 0x26da4c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26da4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_26da50:
    // 0x26da50: 0x2aa2000a  slti        $v0, $s5, 0xA
    ctx->pc = 0x26da50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x26da54: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x26DA54u;
    {
        const bool branch_taken_0x26da54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26da54) {
            ctx->pc = 0x26DA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DA54u;
            // 0x26da58: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DA84u;
            goto label_26da84;
        }
    }
    ctx->pc = 0x26DA5Cu;
    // 0x26da5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26da5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_26da60:
    // 0x26da60: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x26da60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x26da64: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x26DA64u;
    {
        const bool branch_taken_0x26da64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA64u;
        // 0x26da68: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da64) {
            ctx->pc = 0x26D9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d9b0;
        }
    }
    ctx->pc = 0x26DA6Cu;
label_26da6c:
    // 0x26da6c: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x26da6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x26da70: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26da70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26da74: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26da74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26da78: 0x1462ffb9  bne         $v1, $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x26DA78u;
    {
        const bool branch_taken_0x26da78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA78u;
        // 0x26da7c: 0x34028005  ori         $v0, $zero, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da78) {
            ctx->pc = 0x26D960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d960;
        }
    }
    ctx->pc = 0x26DA80u;
    // 0x26da80: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26da80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26da84:
    // 0x26da84: 0xacb5021c  sw          $s5, 0x21C($a1)
    ctx->pc = 0x26da84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 21));
label_26da88:
    // 0x26da88: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x26da88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26da8c:
    // 0x26da8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26da8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26da90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26da90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26da94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26da94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26da98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26da98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26da9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26da9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26daa0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x26daa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26daa4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x26daa4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26daa8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x26daa8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26daac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26daacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26dab0: 0x3e00008  jr          $ra
    ctx->pc = 0x26DAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAB0u;
        // 0x26dab4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DAB8u;
}

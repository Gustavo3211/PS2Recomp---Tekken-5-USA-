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

// Function: sub_00108228
// Address: 0x108228 - 0x108508
void sub_00108228_0x108228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108228_0x108228");
#endif

    switch (ctx->pc) {
        case 0x108260u: goto label_108260;
        case 0x108268u: goto label_108268;
        case 0x108284u: goto label_108284;
        case 0x108324u: goto label_108324;
        case 0x108348u: goto label_108348;
        case 0x108360u: goto label_108360;
        case 0x1083a0u: goto label_1083a0;
        case 0x108428u: goto label_108428;
        case 0x108484u: goto label_108484;
        case 0x1084a8u: goto label_1084a8;
        case 0x1084bcu: goto label_1084bc;
        default: break;
    }

    ctx->pc = 0x108228u;

    // 0x108228: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x108228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10822c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10822cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x108230: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x108230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x108234: 0x3c150015  lui         $s5, 0x15
    ctx->pc = 0x108234u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)21 << 16));
    // 0x108238: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x108238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10823c: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x10823cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
    // 0x108240: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x108240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108244: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x108244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x108248: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10824c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10824cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108250: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x108250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x108254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10825c: 0x0  nop
    ctx->pc = 0x10825cu;
    // NOP
label_108260:
    // 0x108260: 0xc042226  jal         func_108898
    ctx->pc = 0x108260u;
    SET_GPR_U32(ctx, 31, 0x108268u);
    ctx->pc = 0x108264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108260u;
    // 0x108264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x108260u, 0x108268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108268u;
label_108268:
    // 0x108268: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10826c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10826cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108270: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x108270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x108274: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x108274u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 20)); // MMIO: 0x10002000
    // 0x108278: 0xae34082c  sw          $s4, 0x82C($s1)
    ctx->pc = 0x108278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 20));
    // 0x10827c: 0xc042142  jal         func_108508
    ctx->pc = 0x10827Cu;
    SET_GPR_U32(ctx, 31, 0x108284u);
    ctx->pc = 0x108280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10827Cu;
    // 0x108280: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108508u, 0x10827Cu, 0x108284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108284u;
label_108284:
    // 0x108284: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108288: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10828c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10828cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108290: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x108290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x108294: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x108294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x108298: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x108298u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x10829c: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x10829cu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x1082a0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1082a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1082a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1082a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1082a8: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1082A8u;
    {
        const bool branch_taken_0x1082a8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1082ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082A8u;
        // 0x1082ac: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082a8) {
            ctx->pc = 0x1082C4u;
            goto label_1082c4;
        }
    }
    ctx->pc = 0x1082B0u;
    // 0x1082b0: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x1082b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1082b4: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1082b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1082b8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1082b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1082bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1082BCu;
    {
        const bool branch_taken_0x1082bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082BCu;
        // 0x1082c0: 0xae22084c  sw          $v0, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082bc) {
            ctx->pc = 0x1082C8u;
            goto label_1082c8;
        }
    }
    ctx->pc = 0x1082C4u;
label_1082c4:
    // 0x1082c4: 0xae33084c  sw          $s3, 0x84C($s1)
    ctx->pc = 0x1082c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 19));
label_1082c8:
    // 0x1082c8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1082c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1082cc: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1082ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1082d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1082d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1082d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1082d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1082d8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1082d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1082dc: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x1082dcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1082e0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1082e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1082e4: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1082E4u;
    {
        const bool branch_taken_0x1082e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1082E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082E4u;
        // 0x1082e8: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082e4) {
            ctx->pc = 0x108348u;
            goto label_108348;
        }
    }
    ctx->pc = 0x1082ECu;
    // 0x1082ec: 0x2e020023  sltiu       $v0, $s0, 0x23
    ctx->pc = 0x1082ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x1082f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1082F0u;
    {
        const bool branch_taken_0x1082f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082F0u;
        // 0x1082f4: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082f0) {
            ctx->pc = 0x108308u;
            goto label_108308;
        }
    }
    ctx->pc = 0x1082F8u;
    // 0x1082f8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1082F8u;
    {
        const bool branch_taken_0x1082f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082F8u;
        // 0x1082fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082f8) {
            ctx->pc = 0x10831Cu;
            goto label_10831c;
        }
    }
    ctx->pc = 0x108300u;
    // 0x108300: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x108300u;
    {
        const bool branch_taken_0x108300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108300u;
        // 0x108304: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108300) {
            ctx->pc = 0x108370u;
            goto label_108370;
        }
    }
    ctx->pc = 0x108308u;
label_108308:
    // 0x108308: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x108308u;
    {
        const bool branch_taken_0x108308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x108308) {
            ctx->pc = 0x10830Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108308u;
            // 0x10830c: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108370u;
            goto label_108370;
        }
    }
    ctx->pc = 0x108310u;
    // 0x108310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108314: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x108314u;
    {
        const bool branch_taken_0x108314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108314u;
        // 0x108318: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108314) {
            ctx->pc = 0x108374u;
            goto label_108374;
        }
    }
    ctx->pc = 0x10831Cu;
label_10831c:
    // 0x10831c: 0xc0421dc  jal         func_108770
    ctx->pc = 0x10831Cu;
    SET_GPR_U32(ctx, 31, 0x108324u);
    ctx->pc = 0x108320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10831Cu;
    // 0x108320: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108770u, 0x10831Cu, 0x108324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108324u;
label_108324:
    // 0x108324: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108328: 0x8e220858  lw          $v0, 0x858($s1)
    ctx->pc = 0x108328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x10832c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10832Cu;
    {
        const bool branch_taken_0x10832c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10832Cu;
        // 0x108330: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10832c) {
            ctx->pc = 0x108350u;
            goto label_108350;
        }
    }
    ctx->pc = 0x108334u;
    // 0x108334: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x108334u;
    {
        const bool branch_taken_0x108334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108334u;
        // 0x108338: 0x26a5dab0  addiu       $a1, $s5, -0x2550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108334) {
            ctx->pc = 0x108354u;
            goto label_108354;
        }
    }
    ctx->pc = 0x10833Cu;
    // 0x10833c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10833cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108340: 0xc042234  jal         func_1088D0
    ctx->pc = 0x108340u;
    SET_GPR_U32(ctx, 31, 0x108348u);
    ctx->pc = 0x108344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108340u;
    // 0x108344: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1088D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088D0u, 0x108340u, 0x108348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108348u;
label_108348:
    // 0x108348: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x108348u;
    {
        const bool branch_taken_0x108348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108348u;
        // 0x10834c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108348) {
            ctx->pc = 0x108374u;
            goto label_108374;
        }
    }
    ctx->pc = 0x108350u;
label_108350:
    // 0x108350: 0x26a5dab0  addiu       $a1, $s5, -0x2550
    ctx->pc = 0x108350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957744));
label_108354:
    // 0x108354: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x108354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108358: 0xc0417f2  jal         func_105FC8
    ctx->pc = 0x108358u;
    SET_GPR_U32(ctx, 31, 0x108360u);
    ctx->pc = 0x10835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108358u;
    // 0x10835c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105FC8u, 0x108358u, 0x108360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108360u;
label_108360:
    // 0x108360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108368: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108368u;
    {
        const bool branch_taken_0x108368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108368u;
        // 0x10836c: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108368) {
            ctx->pc = 0x10837Cu;
            goto label_10837c;
        }
    }
    ctx->pc = 0x108370u;
label_108370:
    // 0x108370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108374:
    // 0x108374: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x108374u;
    {
        const bool branch_taken_0x108374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108374u;
        // 0x108378: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108374) {
            ctx->pc = 0x108260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108260;
        }
    }
    ctx->pc = 0x10837Cu;
label_10837c:
    // 0x10837c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10837cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108380: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x108380u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108384: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x108384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108388: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10838c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10838cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108390: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108398: 0x3e00008  jr          $ra
    ctx->pc = 0x108398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108398u;
        // 0x10839c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1083A0u;
label_1083a0:
    // 0x1083a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1083a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1083a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1083a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1083a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1083a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1083ac: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1083acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1083b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1083b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1083b4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1083b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1083b8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1083b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1083bc: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1083bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1083c0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1083c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1083c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1083c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083c8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1083c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1083cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1083ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083d0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1083d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1083d4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1083d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1083d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1083d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1083dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1083dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1083e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1083e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1083e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1083e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x1083e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1083e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1083ec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1083ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1083f0: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1083F0u;
    {
        const bool branch_taken_0x1083f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1083f0) {
            ctx->pc = 0x1083F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1083F0u;
            // 0x1083f4: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1084D8u;
            goto label_1084d8;
        }
    }
    ctx->pc = 0x1083F8u;
    // 0x1083f8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x1083f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x1083fc: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x1083fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x108400: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x108400u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x108404: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x108404u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x108408: 0x36942020  ori         $s4, $s4, 0x2020
    ctx->pc = 0x108408u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8224);
    // 0x10840c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x10840cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x108410: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x108410u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x108414: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x108414u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x108418: 0x3673b420  ori         $s3, $s3, 0xB420
    ctx->pc = 0x108418u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46112);
    // 0x10841c: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x10841cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x108420: 0x36314000  ori         $s1, $s1, 0x4000
    ctx->pc = 0x108420u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x108424: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x108424u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_108428:
    // 0x108428: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x108428u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 20), 0))); // MMIO: 0x10002020
    // 0x10842c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x10842cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x108430: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x108430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x108434: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x108434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x108438: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x108438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x10843c: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x10843cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x108440: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x108440u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x108444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x108444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x108448: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x108448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x10844c: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x10844Cu;
    {
        const bool branch_taken_0x10844c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x108450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10844Cu;
        // 0x108450: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10844c) {
            ctx->pc = 0x108464u;
            goto label_108464;
        }
    }
    ctx->pc = 0x108454u;
    // 0x108454: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x108454u;
    {
        const bool branch_taken_0x108454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x108454) {
            ctx->pc = 0x108458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108454u;
            // 0x108458: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x108468u;
            goto label_108468;
        }
    }
    ctx->pc = 0x10845Cu;
    // 0x10845c: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x10845Cu;
    {
        const bool branch_taken_0x10845c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x10845c) {
            ctx->pc = 0x108460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10845Cu;
            // 0x108460: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108494u;
            goto label_108494;
        }
    }
    ctx->pc = 0x108464u;
label_108464:
    // 0x108464: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x108464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_108468:
    // 0x108468: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x108468u;
    {
        const bool branch_taken_0x108468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108468u;
        // 0x10846c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108468) {
            ctx->pc = 0x108494u;
            goto label_108494;
        }
    }
    ctx->pc = 0x108470u;
    // 0x108470: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x108470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x108474: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x108474u;
    {
        const bool branch_taken_0x108474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108474u;
        // 0x108478: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108474) {
            ctx->pc = 0x108494u;
            goto label_108494;
        }
    }
    ctx->pc = 0x10847Cu;
    // 0x10847c: 0xc0411a4  jal         func_104690
    ctx->pc = 0x10847Cu;
    SET_GPR_U32(ctx, 31, 0x108484u);
    ctx->pc = 0x108480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10847Cu;
    // 0x108480: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104690u, 0x10847Cu, 0x108484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108484u;
label_108484:
    // 0x108484: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x108484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x108488: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x108488u;
    {
        const bool branch_taken_0x108488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108488u;
        // 0x10848c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108488) {
            ctx->pc = 0x1084B4u;
            goto label_1084b4;
        }
    }
    ctx->pc = 0x108490u;
    // 0x108490: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x108490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_108494:
    // 0x108494: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x108494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x108498: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x108498u;
    {
        const bool branch_taken_0x108498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108498u;
        // 0x10849c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108498) {
            ctx->pc = 0x1084C4u;
            goto label_1084c4;
        }
    }
    ctx->pc = 0x1084A0u;
    // 0x1084a0: 0xc0411a4  jal         func_104690
    ctx->pc = 0x1084A0u;
    SET_GPR_U32(ctx, 31, 0x1084A8u);
    ctx->pc = 0x1084A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1084A0u;
    // 0x1084a4: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104690u, 0x1084A0u, 0x1084A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084A8u;
label_1084a8:
    // 0x1084a8: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x1084a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x1084ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1084ACu;
    {
        const bool branch_taken_0x1084ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084ACu;
        // 0x1084b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084ac) {
            ctx->pc = 0x1084C4u;
            goto label_1084c4;
        }
    }
    ctx->pc = 0x1084B4u;
label_1084b4:
    // 0x1084b4: 0xc041782  jal         func_105E08
    ctx->pc = 0x1084B4u;
    SET_GPR_U32(ctx, 31, 0x1084BCu);
    ctx->pc = 0x105E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E08u, 0x1084B4u, 0x1084BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084BCu;
label_1084bc:
    // 0x1084bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1084BCu;
    {
        const bool branch_taken_0x1084bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084BCu;
        // 0x1084c0: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084bc) {
            ctx->pc = 0x1084D8u;
            goto label_1084d8;
        }
    }
    ctx->pc = 0x1084C4u;
label_1084c4:
    // 0x1084c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1084c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1084c8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1084c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1084cc: 0x1055ffd6  beq         $v0, $s5, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1084CCu;
    {
        const bool branch_taken_0x1084cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1084cc) {
            ctx->pc = 0x108428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108428;
        }
    }
    ctx->pc = 0x1084D4u;
    // 0x1084d4: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x1084d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_1084d8:
    // 0x1084d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1084d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1084dc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1084dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1084e0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1084e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1084e4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1084e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1084e8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1084e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1084ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1084ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1084f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1084f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1084f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1084f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1084f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1084f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1084fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1084fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108500: 0x3e00008  jr          $ra
    ctx->pc = 0x108500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108500u;
        // 0x108504: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108508u;
}

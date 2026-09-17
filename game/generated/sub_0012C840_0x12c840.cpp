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

// Function: sub_0012C840
// Address: 0x12c840 - 0x12daa8
void sub_0012C840_0x12c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C840_0x12c840");
#endif

    switch (ctx->pc) {
        case 0x12c8b0u: goto label_12c8b0;
        case 0x12c970u: goto label_12c970;
        case 0x12c9b8u: goto label_12c9b8;
        case 0x12ca6cu: goto label_12ca6c;
        case 0x12ca88u: goto label_12ca88;
        case 0x12caccu: goto label_12cacc;
        case 0x12cae0u: goto label_12cae0;
        case 0x12caf4u: goto label_12caf4;
        case 0x12cb00u: goto label_12cb00;
        case 0x12cb14u: goto label_12cb14;
        case 0x12cb24u: goto label_12cb24;
        case 0x12cb34u: goto label_12cb34;
        case 0x12cb44u: goto label_12cb44;
        case 0x12cb54u: goto label_12cb54;
        case 0x12cb64u: goto label_12cb64;
        case 0x12cb98u: goto label_12cb98;
        case 0x12ccd8u: goto label_12ccd8;
        case 0x12cd04u: goto label_12cd04;
        case 0x12cd74u: goto label_12cd74;
        case 0x12cd88u: goto label_12cd88;
        case 0x12cda4u: goto label_12cda4;
        case 0x12cdc4u: goto label_12cdc4;
        case 0x12cdf8u: goto label_12cdf8;
        case 0x12ce08u: goto label_12ce08;
        case 0x12ce24u: goto label_12ce24;
        case 0x12ce54u: goto label_12ce54;
        case 0x12ce8cu: goto label_12ce8c;
        case 0x12ce98u: goto label_12ce98;
        case 0x12cea8u: goto label_12cea8;
        case 0x12cebcu: goto label_12cebc;
        case 0x12cf04u: goto label_12cf04;
        case 0x12cf18u: goto label_12cf18;
        case 0x12cf30u: goto label_12cf30;
        case 0x12cf40u: goto label_12cf40;
        case 0x12cf78u: goto label_12cf78;
        case 0x12cf88u: goto label_12cf88;
        case 0x12cf90u: goto label_12cf90;
        case 0x12cfa4u: goto label_12cfa4;
        case 0x12cfb8u: goto label_12cfb8;
        case 0x12cfc8u: goto label_12cfc8;
        case 0x12cfd4u: goto label_12cfd4;
        case 0x12cfe4u: goto label_12cfe4;
        case 0x12d000u: goto label_12d000;
        case 0x12d01cu: goto label_12d01c;
        case 0x12d02cu: goto label_12d02c;
        case 0x12d06cu: goto label_12d06c;
        case 0x12d070u: goto label_12d070;
        case 0x12d07cu: goto label_12d07c;
        case 0x12d088u: goto label_12d088;
        case 0x12d098u: goto label_12d098;
        case 0x12d0c4u: goto label_12d0c4;
        case 0x12d0d4u: goto label_12d0d4;
        case 0x12d0f0u: goto label_12d0f0;
        case 0x12d100u: goto label_12d100;
        case 0x12d110u: goto label_12d110;
        case 0x12d14cu: goto label_12d14c;
        case 0x12d1c4u: goto label_12d1c4;
        case 0x12d1d4u: goto label_12d1d4;
        case 0x12d1e8u: goto label_12d1e8;
        case 0x12d1f8u: goto label_12d1f8;
        case 0x12d204u: goto label_12d204;
        case 0x12d210u: goto label_12d210;
        case 0x12d220u: goto label_12d220;
        case 0x12d230u: goto label_12d230;
        case 0x12d254u: goto label_12d254;
        case 0x12d268u: goto label_12d268;
        case 0x12d280u: goto label_12d280;
        case 0x12d2a0u: goto label_12d2a0;
        case 0x12d2f0u: goto label_12d2f0;
        case 0x12d304u: goto label_12d304;
        case 0x12d3c4u: goto label_12d3c4;
        case 0x12d438u: goto label_12d438;
        case 0x12d44cu: goto label_12d44c;
        case 0x12d45cu: goto label_12d45c;
        case 0x12d480u: goto label_12d480;
        case 0x12d494u: goto label_12d494;
        case 0x12d4a4u: goto label_12d4a4;
        case 0x12d4c0u: goto label_12d4c0;
        case 0x12d52cu: goto label_12d52c;
        case 0x12d5c4u: goto label_12d5c4;
        case 0x12d5e4u: goto label_12d5e4;
        case 0x12d5fcu: goto label_12d5fc;
        case 0x12d618u: goto label_12d618;
        case 0x12d63cu: goto label_12d63c;
        case 0x12d680u: goto label_12d680;
        case 0x12d690u: goto label_12d690;
        case 0x12d6e0u: goto label_12d6e0;
        case 0x12d6fcu: goto label_12d6fc;
        case 0x12d71cu: goto label_12d71c;
        case 0x12d72cu: goto label_12d72c;
        case 0x12d748u: goto label_12d748;
        case 0x12d75cu: goto label_12d75c;
        case 0x12d784u: goto label_12d784;
        case 0x12d7a0u: goto label_12d7a0;
        case 0x12d7b8u: goto label_12d7b8;
        case 0x12d7ccu: goto label_12d7cc;
        case 0x12d7dcu: goto label_12d7dc;
        case 0x12d7f0u: goto label_12d7f0;
        case 0x12d80cu: goto label_12d80c;
        case 0x12d81cu: goto label_12d81c;
        case 0x12d880u: goto label_12d880;
        case 0x12d890u: goto label_12d890;
        case 0x12d910u: goto label_12d910;
        case 0x12d924u: goto label_12d924;
        case 0x12d938u: goto label_12d938;
        case 0x12d960u: goto label_12d960;
        case 0x12d970u: goto label_12d970;
        case 0x12d9a0u: goto label_12d9a0;
        case 0x12d9ecu: goto label_12d9ec;
        case 0x12da18u: goto label_12da18;
        case 0x12da3cu: goto label_12da3c;
        case 0x12da48u: goto label_12da48;
        case 0x12da54u: goto label_12da54;
        default: break;
    }

    ctx->pc = 0x12c840u;

    // 0x12c840: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12c844: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x12c844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x12c848: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x12c848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c84c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x12c84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x12c850: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12c850u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c854: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x12c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x12c858: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x12c858u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c85c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x12c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x12c860: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x12c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x12c864: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x12c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x12c868: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x12c868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x12c86c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x12c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x12c870: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x12c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x12c874: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x12c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x12c878: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x12c878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x12c87c: 0x8eeb0040  lw          $t3, 0x40($s7)
    ctx->pc = 0x12c87cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x12c880: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x12c880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x12c884: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x12c884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x12c888: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x12C888u;
    {
        const bool branch_taken_0x12c888 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C888u;
        // 0x12c88c: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c888) {
            ctx->pc = 0x12C8B4u;
            goto label_12c8b4;
        }
    }
    ctx->pc = 0x12C890u;
    // 0x12c890: 0x8ee60044  lw          $a2, 0x44($s7)
    ctx->pc = 0x12c890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x12c894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c898: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x12c898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c89c: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x12c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
    // 0x12c8a0: 0x8ee20044  lw          $v0, 0x44($s7)
    ctx->pc = 0x12c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x12c8a4: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x12c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x12c8a8: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12C8A8u;
    SET_GPR_U32(ctx, 31, 0x12C8B0u);
    ctx->pc = 0x12C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8A8u;
    // 0x12c8ac: 0xad630008  sw          $v1, 0x8($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12C8A8u, 0x12C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8B0u;
label_12c8b0:
    // 0x12c8b0: 0xaee00040  sw          $zero, 0x40($s7)
    ctx->pc = 0x12c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 0));
label_12c8b4:
    // 0x12c8b4: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x12c8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x12c8b8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x12c8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c8bc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x12c8bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12c8c0: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x12C8C0u;
    {
        const bool branch_taken_0x12c8c0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x12c8c0) {
            ctx->pc = 0x12C8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C8C0u;
            // 0x12c8c4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C8F4u;
            goto label_12c8f4;
        }
    }
    ctx->pc = 0x12C8C8u;
    // 0x12c8c8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x12c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x12c8cc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12c8d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12c8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12c8d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12c8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12c8d8: 0x283a024  and         $s4, $s4, $v1
    ctx->pc = 0x12c8d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x12c8dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12c8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12c8e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c8e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12c8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c8e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x12c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x12c8ec: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x12c8ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x12c8f0: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x12c8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
label_12c8f4:
    // 0x12c8f4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x12c8f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c8f8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x12c8f8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x12c8fc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x12c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x12c900: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x12c900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x12c904: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x12C904u;
    {
        const bool branch_taken_0x12c904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C904u;
        // 0x12c908: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c904) {
            ctx->pc = 0x12C960u;
            goto label_12c960;
        }
    }
    ctx->pc = 0x12C90Cu;
    // 0x12c90c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c910: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x12c910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x12c914: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x12c914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x12c918: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x12c918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x12c91c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C91Cu;
    {
        const bool branch_taken_0x12c91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C91Cu;
        // 0x12c920: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c91c) {
            ctx->pc = 0x12C930u;
            goto label_12c930;
        }
    }
    ctx->pc = 0x12C924u;
    // 0x12c924: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12c924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12c928: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12C928u;
    {
        const bool branch_taken_0x12c928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C928u;
        // 0x12c92c: 0x2455f8e0  addiu       $s5, $v0, -0x720 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c928) {
            ctx->pc = 0x12C938u;
            goto label_12c938;
        }
    }
    ctx->pc = 0x12C930u;
label_12c930:
    // 0x12c930: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12c930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12c934: 0x2455f8f0  addiu       $s5, $v0, -0x710
    ctx->pc = 0x12c934u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965488));
label_12c938:
    // 0x12c938: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12c93c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12C93Cu;
    {
        const bool branch_taken_0x12c93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C93Cu;
        // 0x12c940: 0x26a30008  addiu       $v1, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c93c) {
            ctx->pc = 0x12C9A0u;
            goto label_12c9a0;
        }
    }
    ctx->pc = 0x12C944u;
    // 0x12c944: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x12c944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x12c948: 0x26a40003  addiu       $a0, $s5, 0x3
    ctx->pc = 0x12c948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x12c94c: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x12c94cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x12c950: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x12c950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12c954: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12C954u;
    {
        const bool branch_taken_0x12c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C954u;
        // 0x12c958: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c954) {
            ctx->pc = 0x12C9A0u;
            goto label_12c9a0;
        }
    }
    ctx->pc = 0x12C95Cu;
    // 0x12c95c: 0x0  nop
    ctx->pc = 0x12c95cu;
    // NOP
label_12c960:
    // 0x12c960: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12c960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c968: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12C968u;
    SET_GPR_U32(ctx, 31, 0x12C970u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12C968u, 0x12C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C970u;
label_12c970:
    // 0x12c970: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12C970u;
    {
        const bool branch_taken_0x12c970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C970u;
        // 0x12c974: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c970) {
            ctx->pc = 0x12C9A8u;
            goto label_12c9a8;
        }
    }
    ctx->pc = 0x12C978u;
    // 0x12c978: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12c978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c97c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c980: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x12c980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x12c984: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12c984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x12c988: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12c98c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C98Cu;
    {
        const bool branch_taken_0x12c98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C98Cu;
        // 0x12c990: 0x2475f8f8  addiu       $s5, $v1, -0x708 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c98c) {
            ctx->pc = 0x12C9A0u;
            goto label_12c9a0;
        }
    }
    ctx->pc = 0x12C994u;
    // 0x12c994: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12c994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12c998: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x12c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12c99c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_12c9a0:
    // 0x12c9a0: 0x10000434  b           . + 4 + (0x434 << 2)
    ctx->pc = 0x12C9A0u;
    {
        const bool branch_taken_0x12c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9A0u;
        // 0x12c9a4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9a0) {
            ctx->pc = 0x12DA74u;
            goto label_12da74;
        }
    }
    ctx->pc = 0x12C9A8u;
label_12c9a8:
    // 0x12c9a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12c9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9b0: 0xc04be3a  jal         func_12F8E8
    ctx->pc = 0x12C9B0u;
    SET_GPR_U32(ctx, 31, 0x12C9B8u);
    ctx->pc = 0x12C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9B0u;
    // 0x12c9b4: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F8E8u, 0x12C9B0u, 0x12C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9B8u;
label_12c9b8:
    // 0x12c9b8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x12c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x12c9bc: 0x101502  srl         $v0, $s0, 20
    ctx->pc = 0x12c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x12c9c0: 0x305307ff  andi        $s3, $v0, 0x7FF
    ctx->pc = 0x12c9c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x12c9c4: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x12C9C4u;
    {
        const bool branch_taken_0x12c9c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9C4u;
        // 0x12c9c8: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9c4) {
            ctx->pc = 0x12CA18u;
            goto label_12ca18;
        }
    }
    ctx->pc = 0x12C9CCu;
    // 0x12c9cc: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x12c9ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9d0: 0x16183f  dsra32      $v1, $s6, 0
    ctx->pc = 0x12c9d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x12c9d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12c9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12c9d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12c9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12c9dc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x12c9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x12c9e0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x12c9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x12c9e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12c9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12c9e8: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x12c9e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x12c9ec: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x12c9ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x12c9f0: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x12c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x12c9f4: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x12c9f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x12c9f8: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x12c9f8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x12c9fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12c9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12ca00: 0x2673fc01  addiu       $s3, $s3, -0x3FF
    ctx->pc = 0x12ca00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966273));
    // 0x12ca04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12ca04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12ca08: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x12ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x12ca0c: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x12ca0cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x12ca10: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x12CA10u;
    {
        const bool branch_taken_0x12ca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA10u;
        // 0x12ca14: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca10) {
            ctx->pc = 0x12CAB8u;
            goto label_12cab8;
        }
    }
    ctx->pc = 0x12CA18u;
label_12ca18:
    // 0x12ca18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ca1c: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x12ca1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12ca20: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x12ca20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12ca24: 0x24930432  addiu       $s3, $a0, 0x432
    ctx->pc = 0x12ca24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
    // 0x12ca28: 0x2a620021  slti        $v0, $s3, 0x21
    ctx->pc = 0x12ca28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x12ca2c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12CA2Cu;
    {
        const bool branch_taken_0x12ca2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA2Cu;
        // 0x12ca30: 0x131023  negu        $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca2c) {
            ctx->pc = 0x12CA58u;
            goto label_12ca58;
        }
    }
    ctx->pc = 0x12CA34u;
    // 0x12ca34: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x12ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
    // 0x12ca38: 0x131823  negu        $v1, $s3
    ctx->pc = 0x12ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x12ca3c: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x12ca3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x12ca40: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12ca40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12ca44: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x12ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x12ca48: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x12ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x12ca4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12CA4Cu;
    {
        const bool branch_taken_0x12ca4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA4Cu;
        // 0x12ca50: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca4c) {
            ctx->pc = 0x12CA64u;
            goto label_12ca64;
        }
    }
    ctx->pc = 0x12CA54u;
    // 0x12ca54: 0x0  nop
    ctx->pc = 0x12ca54u;
    // NOP
label_12ca58:
    // 0x12ca58: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x12ca58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x12ca5c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x12ca5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12ca60: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x12ca60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_12ca64:
    // 0x12ca64: 0xc048dc6  jal         func_123718
    ctx->pc = 0x12CA64u;
    SET_GPR_U32(ctx, 31, 0x12CA6Cu);
    ctx->pc = 0x12CA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA64u;
    // 0x12ca68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x12CA64u, 0x12CA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA6Cu;
label_12ca6c:
    // 0x12ca6c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CA6Cu;
    {
        const bool branch_taken_0x12ca6c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x12ca6c) {
            ctx->pc = 0x12CA88u;
            goto label_12ca88;
        }
    }
    ctx->pc = 0x12CA74u;
    // 0x12ca74: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x12ca74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x12ca78: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x12ca78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x12ca7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca80: 0xc048c90  jal         func_123240
    ctx->pc = 0x12CA80u;
    SET_GPR_U32(ctx, 31, 0x12CA88u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12CA80u, 0x12CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA88u;
label_12ca88:
    // 0x12ca88: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12ca88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca8c: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x12ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x12ca90: 0x16183f  dsra32      $v1, $s6, 0
    ctx->pc = 0x12ca90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x12ca94: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x12ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x12ca98: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12ca98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x12ca9c: 0x2c4b024  and         $s6, $s6, $a0
    ctx->pc = 0x12ca9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
    // 0x12caa0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12caa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12caa8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x12caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x12caac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12caacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12cab0: 0x2673fbcd  addiu       $s3, $s3, -0x433
    ctx->pc = 0x12cab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966221));
    // 0x12cab4: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x12cab4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
label_12cab8:
    // 0x12cab8: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x12cab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x12cabc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12cabcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12cac0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12cac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cac4: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12CAC4u;
    SET_GPR_U32(ctx, 31, 0x12CACCu);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12CAC4u, 0x12CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CACCu;
label_12cacc:
    // 0x12cacc: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x12caccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x12cad0: 0xdc25f900  ld          $a1, -0x700($at)
    ctx->pc = 0x12cad0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x14F900u));
    // 0x12cad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cad8: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12CAD8u;
    SET_GPR_U32(ctx, 31, 0x12CAE0u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12CAD8u, 0x12CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAE0u;
label_12cae0:
    // 0x12cae0: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x12cae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x12cae4: 0xdc25f908  ld          $a1, -0x6F8($at)
    ctx->pc = 0x12cae4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x14F908u));
    // 0x12cae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caec: 0xc048c90  jal         func_123240
    ctx->pc = 0x12CAECu;
    SET_GPR_U32(ctx, 31, 0x12CAF4u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12CAECu, 0x12CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAF4u;
label_12caf4:
    // 0x12caf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12caf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caf8: 0xc048dc6  jal         func_123718
    ctx->pc = 0x12CAF8u;
    SET_GPR_U32(ctx, 31, 0x12CB00u);
    ctx->pc = 0x12CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAF8u;
    // 0x12cafc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x12CAF8u, 0x12CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB00u;
label_12cb00:
    // 0x12cb00: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x12cb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x12cb04: 0xdc25f910  ld          $a1, -0x6F0($at)
    ctx->pc = 0x12cb04u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x14F910u));
    // 0x12cb08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb0c: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12CB0Cu;
    SET_GPR_U32(ctx, 31, 0x12CB14u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12CB0Cu, 0x12CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB14u;
label_12cb14:
    // 0x12cb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb1c: 0xc048c90  jal         func_123240
    ctx->pc = 0x12CB1Cu;
    SET_GPR_U32(ctx, 31, 0x12CB24u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12CB1Cu, 0x12CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB24u;
label_12cb24:
    // 0x12cb24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12cb24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12cb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb2c: 0xc04c02c  jal         func_1300B0
    ctx->pc = 0x12CB2Cu;
    SET_GPR_U32(ctx, 31, 0x12CB34u);
    ctx->pc = 0x1300B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1300B0u, 0x12CB2Cu, 0x12CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB34u;
label_12cb34:
    // 0x12cb34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12cb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12cb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb3c: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12CB3Cu;
    SET_GPR_U32(ctx, 31, 0x12CB44u);
    ctx->pc = 0x12CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB3Cu;
    // 0x12cb40: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12CB3Cu, 0x12CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB44u;
label_12cb44:
    // 0x12cb44: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12CB44u;
    {
        const bool branch_taken_0x12cb44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB44u;
        // 0x12cb48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb44) {
            ctx->pc = 0x12CB70u;
            goto label_12cb70;
        }
    }
    ctx->pc = 0x12CB4Cu;
    // 0x12cb4c: 0xc048dc6  jal         func_123718
    ctx->pc = 0x12CB4Cu;
    SET_GPR_U32(ctx, 31, 0x12CB54u);
    ctx->pc = 0x12CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB4Cu;
    // 0x12cb50: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x12CB4Cu, 0x12CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB54u;
label_12cb54:
    // 0x12cb54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12cb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb5c: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12CB5Cu;
    SET_GPR_U32(ctx, 31, 0x12CB64u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12CB5Cu, 0x12CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB64u;
label_12cb64:
    // 0x12cb64: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x12cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x12cb68: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x12cb68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x12cb6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cb70:
    // 0x12cb70: 0x2fc20017  sltiu       $v0, $fp, 0x17
    ctx->pc = 0x12cb70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x12cb74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12CB74u;
    {
        const bool branch_taken_0x12cb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB74u;
        // 0x12cb78: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb74) {
            ctx->pc = 0x12CBA4u;
            goto label_12cba4;
        }
    }
    ctx->pc = 0x12CB7Cu;
    // 0x12cb7c: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x12cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x12cb80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb84: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x12cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x12cb88: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x12cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12cb8c: 0xdca5f990  ld          $a1, -0x670($a1)
    ctx->pc = 0x12cb8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294965648)));
    // 0x12cb90: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12CB90u;
    SET_GPR_U32(ctx, 31, 0x12CB98u);
    ctx->pc = 0x12CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB90u;
    // 0x12cb94: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12CB90u, 0x12CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB98u;
label_12cb98:
    // 0x12cb98: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x12cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x12cb9c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x12cb9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x12cba0: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x12cba0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
label_12cba4:
    // 0x12cba4: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x12cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x12cba8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x12cba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12cbac: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CBACu;
    {
        const bool branch_taken_0x12cbac = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x12cbac) {
            ctx->pc = 0x12CBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CBACu;
            // 0x12cbb0: 0x108023  negu        $s0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CBC0u;
            goto label_12cbc0;
        }
    }
    ctx->pc = 0x12CBB4u;
    // 0x12cbb4: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x12cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x12cbb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12CBB8u;
    {
        const bool branch_taken_0x12cbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBB8u;
        // 0x12cbbc: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbb8) {
            ctx->pc = 0x12CBC8u;
            goto label_12cbc8;
        }
    }
    ctx->pc = 0x12CBC0u;
label_12cbc0:
    // 0x12cbc0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x12cbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x12cbc4: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x12cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_12cbc8:
    // 0x12cbc8: 0x7c00007  bltz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CBC8u;
    {
        const bool branch_taken_0x12cbc8 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x12CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBC8u;
        // 0x12cbcc: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbc8) {
            ctx->pc = 0x12CBE8u;
            goto label_12cbe8;
        }
    }
    ctx->pc = 0x12CBD0u;
    // 0x12cbd0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x12cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x12cbd4: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x12cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x12cbd8: 0xafbe003c  sw          $fp, 0x3C($sp)
    ctx->pc = 0x12cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 30));
    // 0x12cbdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12CBDCu;
    {
        const bool branch_taken_0x12cbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBDCu;
        // 0x12cbe0: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbdc) {
            ctx->pc = 0x12CC00u;
            goto label_12cc00;
        }
    }
    ctx->pc = 0x12CBE4u;
    // 0x12cbe4: 0x0  nop
    ctx->pc = 0x12cbe4u;
    // NOP
label_12cbe8:
    // 0x12cbe8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cbec: 0x1e1823  negu        $v1, $fp
    ctx->pc = 0x12cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x12cbf0: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x12cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x12cbf4: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x12cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x12cbf8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x12cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x12cbfc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_12cc00:
    // 0x12cc00: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x12cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cc04: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12cc04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cc08: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x12cc08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12cc0c: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x12cc0cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x12cc10: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x12cc10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x12cc14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CC14u;
    {
        const bool branch_taken_0x12cc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC14u;
        // 0x12cc18: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc14) {
            ctx->pc = 0x12CC28u;
            goto label_12cc28;
        }
    }
    ctx->pc = 0x12CC1Cu;
    // 0x12cc1c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x12cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x12cc20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12cc20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc24: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x12cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_12cc28:
    // 0x12cc28: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cc2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cc30: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x12cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x12cc34: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x12cc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x12cc38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12cc3c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x12cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x12cc40: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12CC40u;
    {
        const bool branch_taken_0x12cc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC40u;
        // 0x12cc44: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc40) {
            ctx->pc = 0x12CCC4u;
            goto label_12ccc4;
        }
    }
    ctx->pc = 0x12CC48u;
    // 0x12cc48: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x12cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cc4c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x12cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12cc50: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x12cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x12cc54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12cc58: 0x8c63f920  lw          $v1, -0x6E0($v1)
    ctx->pc = 0x12cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965536)));
    // 0x12cc5c: 0x600008  jr          $v1
    ctx->pc = 0x12CC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CC68u: goto label_12cc68;
            case 0x12CC78u: goto label_12cc78;
            case 0x12CC7Cu: goto label_12cc7c;
            case 0x12CCA0u: goto label_12cca0;
            case 0x12CCA4u: goto label_12cca4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CC5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12CC64u;
    // 0x12cc64: 0x0  nop
    ctx->pc = 0x12cc64u;
    // NOP
label_12cc68:
    // 0x12cc68: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x12cc68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12cc6c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x12CC6Cu;
    {
        const bool branch_taken_0x12cc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC6Cu;
        // 0x12cc70: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc6c) {
            ctx->pc = 0x12CCC4u;
            goto label_12ccc4;
        }
    }
    ctx->pc = 0x12CC74u;
    // 0x12cc74: 0x0  nop
    ctx->pc = 0x12cc74u;
    // NOP
label_12cc78:
    // 0x12cc78: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x12cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_12cc7c:
    // 0x12cc7c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x12cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12cc80: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12cc80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cc84: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x12cc84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12cc88: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x12cc88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x12cc8c: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x12cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x12cc90: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x12cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x12cc94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12CC94u;
    {
        const bool branch_taken_0x12cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC94u;
        // 0x12cc98: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc94) {
            ctx->pc = 0x12CCC4u;
            goto label_12ccc4;
        }
    }
    ctx->pc = 0x12CC9Cu;
    // 0x12cc9c: 0x0  nop
    ctx->pc = 0x12cc9cu;
    // NOP
label_12cca0:
    // 0x12cca0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x12cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_12cca4:
    // 0x12cca4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x12cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12cca8: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x12cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x12ccac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ccb0: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x12ccb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ccb4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x12ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x12ccb8: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x12ccb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12ccbc: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x12ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x12ccc0: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x12ccc0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_12ccc4:
    // 0x12ccc4: 0x2e620018  sltiu       $v0, $s3, 0x18
    ctx->pc = 0x12ccc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x12ccc8: 0xaee00044  sw          $zero, 0x44($s7)
    ctx->pc = 0x12ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 0));
    // 0x12cccc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12CCCCu;
    {
        const bool branch_taken_0x12cccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCCCu;
        // 0x12ccd0: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cccc) {
            ctx->pc = 0x12CCF8u;
            goto label_12ccf8;
        }
    }
    ctx->pc = 0x12CCD4u;
    // 0x12ccd4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12ccd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ccd8:
    // 0x12ccd8: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x12ccd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x12ccdc: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x12ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x12cce0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x12cce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12cce4: 0x0  nop
    ctx->pc = 0x12cce4u;
    // NOP
    // 0x12cce8: 0x0  nop
    ctx->pc = 0x12cce8u;
    // NOP
    // 0x12ccec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12CCECu;
    {
        const bool branch_taken_0x12ccec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCECu;
        // 0x12ccf0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccec) {
            ctx->pc = 0x12CCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ccd8;
        }
    }
    ctx->pc = 0x12CCF4u;
    // 0x12ccf4: 0xaee30044  sw          $v1, 0x44($s7)
    ctx->pc = 0x12ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 3));
label_12ccf8:
    // 0x12ccf8: 0x8ee50044  lw          $a1, 0x44($s7)
    ctx->pc = 0x12ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x12ccfc: 0xc04bae6  jal         func_12EB98
    ctx->pc = 0x12CCFCu;
    SET_GPR_U32(ctx, 31, 0x12CD04u);
    ctx->pc = 0x12CD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CCFCu;
    // 0x12cd00: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB98u, 0x12CCFCu, 0x12CD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD04u;
label_12cd04:
    // 0x12cd04: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x12cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x12cd08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cd0c: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x12cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12cd10: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x12cd10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x12cd14: 0xaee40040  sw          $a0, 0x40($s7)
    ctx->pc = 0x12cd14u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 4));
    // 0x12cd18: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x12CD18u;
    {
        const bool branch_taken_0x12cd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD18u;
        // 0x12cd1c: 0x8fb50054  lw          $s5, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd18) {
            ctx->pc = 0x12D168u;
            goto label_12d168;
        }
    }
    ctx->pc = 0x12CD20u;
    // 0x12cd20: 0x52200112  beql        $s1, $zero, . + 4 + (0x112 << 2)
    ctx->pc = 0x12CD20u;
    {
        const bool branch_taken_0x12cd20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd20) {
            ctx->pc = 0x12CD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CD20u;
            // 0x12cd24: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D16Cu;
            goto label_12d16c;
        }
    }
    ctx->pc = 0x12CD28u;
    // 0x12cd28: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x12cd28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd2c: 0xafbe002c  sw          $fp, 0x2C($sp)
    ctx->pc = 0x12cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 30));
    // 0x12cd30: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x12cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x12cd34: 0x1bc00026  blez        $fp, . + 4 + (0x26 << 2)
    ctx->pc = 0x12CD34u;
    {
        const bool branch_taken_0x12cd34 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x12CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD34u;
        // 0x12cd38: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd34) {
            ctx->pc = 0x12CDD0u;
            goto label_12cdd0;
        }
    }
    ctx->pc = 0x12CD3Cu;
    // 0x12cd3c: 0x33c2000f  andi        $v0, $fp, 0xF
    ctx->pc = 0x12cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)15);
    // 0x12cd40: 0x1e8103  sra         $s0, $fp, 4
    ctx->pc = 0x12cd40u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 4));
    // 0x12cd44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12cd48: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x12cd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x12cd4c: 0x3c110015  lui         $s1, 0x15
    ctx->pc = 0x12cd4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)21 << 16));
    // 0x12cd50: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x12cd50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12cd54: 0xde31f990  ld          $s1, -0x670($s1)
    ctx->pc = 0x12cd54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 4294965648)));
    // 0x12cd58: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CD58u;
    {
        const bool branch_taken_0x12cd58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD58u;
        // 0x12cd5c: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd58) {
            ctx->pc = 0x12CD78u;
            goto label_12cd78;
        }
    }
    ctx->pc = 0x12CD60u;
    // 0x12cd60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd64: 0xdc45fa78  ld          $a1, -0x588($v0)
    ctx->pc = 0x12cd64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294965880)));
    // 0x12cd68: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x12cd68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x12cd6c: 0xc048d62  jal         func_123588
    ctx->pc = 0x12CD6Cu;
    SET_GPR_U32(ctx, 31, 0x12CD74u);
    ctx->pc = 0x12CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD6Cu;
    // 0x12cd70: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123588u, 0x12CD6Cu, 0x12CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD74u;
label_12cd74:
    // 0x12cd74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12cd74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12cd78:
    // 0x12cd78: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x12CD78u;
    {
        const bool branch_taken_0x12cd78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD78u;
        // 0x12cd7c: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd78) {
            ctx->pc = 0x12CDB4u;
            goto label_12cdb4;
        }
    }
    ctx->pc = 0x12CD80u;
    // 0x12cd80: 0x2452fa58  addiu       $s2, $v0, -0x5A8
    ctx->pc = 0x12cd80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965848));
    // 0x12cd84: 0x0  nop
    ctx->pc = 0x12cd84u;
    // NOP
label_12cd88:
    // 0x12cd88: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x12cd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x12cd8c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CD8Cu;
    {
        const bool branch_taken_0x12cd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd8c) {
            ctx->pc = 0x12CD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CD8Cu;
            // 0x12cd90: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CDACu;
            goto label_12cdac;
        }
    }
    ctx->pc = 0x12CD94u;
    // 0x12cd94: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x12cd94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12cd98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12cd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd9c: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12CD9Cu;
    SET_GPR_U32(ctx, 31, 0x12CDA4u);
    ctx->pc = 0x12CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD9Cu;
    // 0x12cda0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12CD9Cu, 0x12CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDA4u;
label_12cda4:
    // 0x12cda4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12cda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cda8: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x12cda8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_12cdac:
    // 0x12cdac: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12CDACu;
    {
        const bool branch_taken_0x12cdac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDACu;
        // 0x12cdb0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdac) {
            ctx->pc = 0x12CD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cd88;
        }
    }
    ctx->pc = 0x12CDB4u;
label_12cdb4:
    // 0x12cdb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cdb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12cdb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cdbc: 0xc048d62  jal         func_123588
    ctx->pc = 0x12CDBCu;
    SET_GPR_U32(ctx, 31, 0x12CDC4u);
    ctx->pc = 0x123588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123588u, 0x12CDBCu, 0x12CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDC4u;
label_12cdc4:
    // 0x12cdc4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x12CDC4u;
    {
        const bool branch_taken_0x12cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDC4u;
        // 0x12cdc8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdc4) {
            ctx->pc = 0x12CE34u;
            goto label_12ce34;
        }
    }
    ctx->pc = 0x12CDCCu;
    // 0x12cdcc: 0x0  nop
    ctx->pc = 0x12cdccu;
    // NOP
label_12cdd0:
    // 0x12cdd0: 0x1e8823  negu        $s1, $fp
    ctx->pc = 0x12cdd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x12cdd4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x12CDD4u;
    {
        const bool branch_taken_0x12cdd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDD4u;
        // 0x12cdd8: 0x3222000f  andi        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdd4) {
            ctx->pc = 0x12CE34u;
            goto label_12ce34;
        }
    }
    ctx->pc = 0x12CDDCu;
    // 0x12cddc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12cddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cde0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12cde4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x12cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x12cde8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x12cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12cdec: 0xdc84f990  ld          $a0, -0x670($a0)
    ctx->pc = 0x12cdecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294965648)));
    // 0x12cdf0: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12CDF0u;
    SET_GPR_U32(ctx, 31, 0x12CDF8u);
    ctx->pc = 0x12CDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CDF0u;
    // 0x12cdf4: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12CDF0u, 0x12CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDF8u;
label_12cdf8:
    // 0x12cdf8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x12CDF8u;
    {
        const bool branch_taken_0x12cdf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDF8u;
        // 0x12cdfc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdf8) {
            ctx->pc = 0x12CE34u;
            goto label_12ce34;
        }
    }
    ctx->pc = 0x12CE00u;
    // 0x12ce00: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12ce04: 0x2451fa58  addiu       $s1, $v0, -0x5A8
    ctx->pc = 0x12ce04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965848));
label_12ce08:
    // 0x12ce08: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x12ce08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x12ce0c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CE0Cu;
    {
        const bool branch_taken_0x12ce0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ce0c) {
            ctx->pc = 0x12CE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CE0Cu;
            // 0x12ce10: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CE2Cu;
            goto label_12ce2c;
        }
    }
    ctx->pc = 0x12CE14u;
    // 0x12ce14: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x12ce14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ce18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12ce18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce1c: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12CE1Cu;
    SET_GPR_U32(ctx, 31, 0x12CE24u);
    ctx->pc = 0x12CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CE1Cu;
    // 0x12ce20: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12CE1Cu, 0x12CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE24u;
label_12ce24:
    // 0x12ce24: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12ce24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce28: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x12ce28u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_12ce2c:
    // 0x12ce2c: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12CE2Cu;
    {
        const bool branch_taken_0x12ce2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE2Cu;
        // 0x12ce30: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce2c) {
            ctx->pc = 0x12CE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ce08;
        }
    }
    ctx->pc = 0x12CE34u;
label_12ce34:
    // 0x12ce34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x12ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ce38: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12CE38u;
    {
        const bool branch_taken_0x12ce38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ce38) {
            ctx->pc = 0x12CE90u;
            goto label_12ce90;
        }
    }
    ctx->pc = 0x12CE40u;
    // 0x12ce40: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x12ce40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x12ce44: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12ce44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12ce48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12ce48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce4c: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12CE4Cu;
    SET_GPR_U32(ctx, 31, 0x12CE54u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12CE4Cu, 0x12CE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE54u;
label_12ce54:
    // 0x12ce54: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12CE54u;
    {
        const bool branch_taken_0x12ce54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE54u;
        // 0x12ce58: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce54) {
            ctx->pc = 0x12CE90u;
            goto label_12ce90;
        }
    }
    ctx->pc = 0x12CE5Cu;
    // 0x12ce5c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12CE5Cu;
    {
        const bool branch_taken_0x12ce5c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE5Cu;
        // 0x12ce60: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce5c) {
            ctx->pc = 0x12CE90u;
            goto label_12ce90;
        }
    }
    ctx->pc = 0x12CE64u;
    // 0x12ce64: 0x188000bc  blez        $a0, . + 4 + (0xBC << 2)
    ctx->pc = 0x12CE64u;
    {
        const bool branch_taken_0x12ce64 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x12CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE64u;
        // 0x12ce68: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce64) {
            ctx->pc = 0x12D158u;
            goto label_12d158;
        }
    }
    ctx->pc = 0x12CE6Cu;
    // 0x12ce6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ce70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12ce70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce74: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x12ce74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x12ce78: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x12ce78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x12ce7c: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x12ce7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x12ce80: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x12ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x12ce84: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12CE84u;
    SET_GPR_U32(ctx, 31, 0x12CE8Cu);
    ctx->pc = 0x12CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CE84u;
    // 0x12ce88: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12CE84u, 0x12CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE8Cu;
label_12ce8c:
    // 0x12ce8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12ce8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ce90:
    // 0x12ce90: 0xc048dc6  jal         func_123718
    ctx->pc = 0x12CE90u;
    SET_GPR_U32(ctx, 31, 0x12CE98u);
    ctx->pc = 0x12CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CE90u;
    // 0x12ce94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x12CE90u, 0x12CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CE98u;
label_12ce98:
    // 0x12ce98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12ce98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cea0: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12CEA0u;
    SET_GPR_U32(ctx, 31, 0x12CEA8u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12CEA0u, 0x12CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CEA8u;
label_12cea8:
    // 0x12cea8: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x12cea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x12ceac: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x12ceacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x12ceb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ceb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ceb4: 0xc048c90  jal         func_123240
    ctx->pc = 0x12CEB4u;
    SET_GPR_U32(ctx, 31, 0x12CEBCu);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12CEB4u, 0x12CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CEBCu;
label_12cebc:
    // 0x12cebc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x12cebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x12cec0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12cec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x12cec4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12cec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cec8: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x12cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x12cecc: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x12ceccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x12ced0: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x12ced0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x12ced4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ced8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12ced8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12cedc: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x12cedcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x12cee0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cee4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x12CEE4u;
    {
        const bool branch_taken_0x12cee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEE4u;
        // 0x12cee8: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cee4) {
            ctx->pc = 0x12CF50u;
            goto label_12cf50;
        }
    }
    ctx->pc = 0x12CEECu;
    // 0x12ceec: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x12ceecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x12cef0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x12cef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x12cef4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cef8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x12cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x12cefc: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12CEFCu;
    SET_GPR_U32(ctx, 31, 0x12CF04u);
    ctx->pc = 0x12CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CEFCu;
    // 0x12cf00: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12CEFCu, 0x12CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF04u;
label_12cf04:
    // 0x12cf04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12cf04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf10: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12CF10u;
    SET_GPR_U32(ctx, 31, 0x12CF18u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12CF10u, 0x12CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF18u;
label_12cf18:
    // 0x12cf18: 0x1c4001e3  bgtz        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x12CF18u;
    {
        const bool branch_taken_0x12cf18 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF18u;
        // 0x12cf1c: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf18) {
            ctx->pc = 0x12D6A8u;
            goto label_12d6a8;
        }
    }
    ctx->pc = 0x12CF20u;
    // 0x12cf20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12cf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf28: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12CF28u;
    SET_GPR_U32(ctx, 31, 0x12CF30u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12CF28u, 0x12CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF30u;
label_12cf30:
    // 0x12cf30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf38: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12CF38u;
    SET_GPR_U32(ctx, 31, 0x12CF40u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12CF38u, 0x12CF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF40u;
label_12cf40:
    // 0x12cf40: 0x44001d5  bltz        $v0, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x12CF40u;
    {
        const bool branch_taken_0x12cf40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF40u;
        // 0x12cf44: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf40) {
            ctx->pc = 0x12D698u;
            goto label_12d698;
        }
    }
    ctx->pc = 0x12CF48u;
    // 0x12cf48: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x12CF48u;
    {
        const bool branch_taken_0x12cf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cf48) {
            ctx->pc = 0x12D158u;
            goto label_12d158;
        }
    }
    ctx->pc = 0x12CF50u;
label_12cf50:
    // 0x12cf50: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x12CF50u;
    {
        const bool branch_taken_0x12cf50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF50u;
        // 0x12cf54: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf50) {
            ctx->pc = 0x12D050u;
            goto label_12d050;
        }
    }
    ctx->pc = 0x12CF58u;
    // 0x12cf58: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x12cf58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x12cf5c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x12cf5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x12cf60: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x12cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x12cf64: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x12cf64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x12cf68: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x12cf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12cf6c: 0xdca5f988  ld          $a1, -0x678($a1)
    ctx->pc = 0x12cf6cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294965640)));
    // 0x12cf70: 0xc048d62  jal         func_123588
    ctx->pc = 0x12CF70u;
    SET_GPR_U32(ctx, 31, 0x12CF78u);
    ctx->pc = 0x12CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF70u;
    // 0x12cf74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123588u, 0x12CF70u, 0x12CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF78u;
label_12cf78:
    // 0x12cf78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf80: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12CF80u;
    SET_GPR_U32(ctx, 31, 0x12CF88u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12CF80u, 0x12CF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF88u;
label_12cf88:
    // 0x12cf88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12CF88u;
    {
        const bool branch_taken_0x12cf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF88u;
        // 0x12cf8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf88) {
            ctx->pc = 0x12CFBCu;
            goto label_12cfbc;
        }
    }
    ctx->pc = 0x12CF90u;
label_12cf90:
    // 0x12cf90: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x12cf90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x12cf94: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x12cf94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x12cf98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf9c: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12CF9Cu;
    SET_GPR_U32(ctx, 31, 0x12CFA4u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12CF9Cu, 0x12CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFA4u;
label_12cfa4:
    // 0x12cfa4: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x12cfa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x12cfa8: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x12cfa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x12cfac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12cfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfb0: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12CFB0u;
    SET_GPR_U32(ctx, 31, 0x12CFB8u);
    ctx->pc = 0x12CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CFB0u;
    // 0x12cfb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12CFB0u, 0x12CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFB8u;
label_12cfb8:
    // 0x12cfb8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12cfb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12cfbc:
    // 0x12cfbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfc0: 0xc04c02c  jal         func_1300B0
    ctx->pc = 0x12CFC0u;
    SET_GPR_U32(ctx, 31, 0x12CFC8u);
    ctx->pc = 0x1300B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1300B0u, 0x12CFC0u, 0x12CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFC8u;
label_12cfc8:
    // 0x12cfc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12cfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfcc: 0xc048dc6  jal         func_123718
    ctx->pc = 0x12CFCCu;
    SET_GPR_U32(ctx, 31, 0x12CFD4u);
    ctx->pc = 0x12CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CFCCu;
    // 0x12cfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x12CFCCu, 0x12CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFD4u;
label_12cfd4:
    // 0x12cfd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12cfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12cfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfdc: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12CFDCu;
    SET_GPR_U32(ctx, 31, 0x12CFE4u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12CFDCu, 0x12CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFE4u;
label_12cfe4:
    // 0x12cfe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12cfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12cfe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfec: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x12cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x12cff0: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x12cff0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12cff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12cff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cff8: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12CFF8u;
    SET_GPR_U32(ctx, 31, 0x12D000u);
    ctx->pc = 0x12CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CFF8u;
    // 0x12cffc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12CFF8u, 0x12D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D000u;
label_12d000:
    // 0x12d000: 0x4400292  bltz        $v0, . + 4 + (0x292 << 2)
    ctx->pc = 0x12D000u;
    {
        const bool branch_taken_0x12d000 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D000u;
        // 0x12d004: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d000) {
            ctx->pc = 0x12DA4Cu;
            goto label_12da4c;
        }
    }
    ctx->pc = 0x12D008u;
    // 0x12d008: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x12d008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x12d00c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x12d00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x12d010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d014: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12D014u;
    SET_GPR_U32(ctx, 31, 0x12D01Cu);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12D014u, 0x12D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D01Cu;
label_12d01c:
    // 0x12d01c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d020: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d024: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12D024u;
    SET_GPR_U32(ctx, 31, 0x12D02Cu);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12D024u, 0x12D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D02Cu;
label_12d02c:
    // 0x12d02c: 0x4400099  bltz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x12D02Cu;
    {
        const bool branch_taken_0x12d02c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D02Cu;
        // 0x12d030: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d02c) {
            ctx->pc = 0x12D294u;
            goto label_12d294;
        }
    }
    ctx->pc = 0x12D034u;
    // 0x12d034: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12d034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d038: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12d038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x12d03c: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x12d03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12d040: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x12D040u;
    {
        const bool branch_taken_0x12d040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D040u;
        // 0x12d044: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d040) {
            ctx->pc = 0x12CF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cf90;
        }
    }
    ctx->pc = 0x12D048u;
    // 0x12d048: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x12D048u;
    {
        const bool branch_taken_0x12d048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d048) {
            ctx->pc = 0x12D158u;
            goto label_12d158;
        }
    }
    ctx->pc = 0x12D050u;
label_12d050:
    // 0x12d050: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d054: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x12d054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x12d058: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x12d058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x12d05c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x12d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12d060: 0xdc84f988  ld          $a0, -0x678($a0)
    ctx->pc = 0x12d060u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294965640)));
    // 0x12d064: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12D064u;
    SET_GPR_U32(ctx, 31, 0x12D06Cu);
    ctx->pc = 0x12D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D064u;
    // 0x12d068: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12D064u, 0x12D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D06Cu;
label_12d06c:
    // 0x12d06c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12d06cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12d070:
    // 0x12d070: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12d070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d074: 0xc04c02c  jal         func_1300B0
    ctx->pc = 0x12D074u;
    SET_GPR_U32(ctx, 31, 0x12D07Cu);
    ctx->pc = 0x1300B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1300B0u, 0x12D074u, 0x12D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D07Cu;
label_12d07c:
    // 0x12d07c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12d07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d080: 0xc048dc6  jal         func_123718
    ctx->pc = 0x12D080u;
    SET_GPR_U32(ctx, 31, 0x12D088u);
    ctx->pc = 0x12D084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D080u;
    // 0x12d084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x12D080u, 0x12D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D088u;
label_12d088:
    // 0x12d088: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d08c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d090: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12D090u;
    SET_GPR_U32(ctx, 31, 0x12D098u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12D090u, 0x12D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D098u;
label_12d098:
    // 0x12d098: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d09c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x12d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x12d0a0: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x12d0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12d0a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d0a8: 0x16640023  bne         $s3, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x12D0A8u;
    {
        const bool branch_taken_0x12d0a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x12D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0A8u;
        // 0x12d0ac: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0a8) {
            ctx->pc = 0x12D138u;
            goto label_12d138;
        }
    }
    ctx->pc = 0x12D0B0u;
    // 0x12d0b0: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x12d0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x12d0b4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x12d0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x12d0b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0bc: 0xc048c90  jal         func_123240
    ctx->pc = 0x12D0BCu;
    SET_GPR_U32(ctx, 31, 0x12D0C4u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12D0BCu, 0x12D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0C4u;
label_12d0c4:
    // 0x12d0c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0cc: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12D0CCu;
    SET_GPR_U32(ctx, 31, 0x12D0D4u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12D0CCu, 0x12D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0D4u;
label_12d0d4:
    // 0x12d0d4: 0x1c40006f  bgtz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x12D0D4u;
    {
        const bool branch_taken_0x12d0d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0D4u;
        // 0x12d0d8: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0d4) {
            ctx->pc = 0x12D294u;
            goto label_12d294;
        }
    }
    ctx->pc = 0x12D0DCu;
    // 0x12d0dc: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x12d0dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x12d0e0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x12d0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x12d0e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0e8: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12D0E8u;
    SET_GPR_U32(ctx, 31, 0x12D0F0u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12D0E8u, 0x12D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0F0u;
label_12d0f0:
    // 0x12d0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0f8: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12D0F8u;
    SET_GPR_U32(ctx, 31, 0x12D100u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12D0F8u, 0x12D100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D100u;
label_12d100:
    // 0x12d100: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12D100u;
    {
        const bool branch_taken_0x12d100 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D100u;
        // 0x12d104: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d100) {
            ctx->pc = 0x12D158u;
            goto label_12d158;
        }
    }
    ctx->pc = 0x12D108u;
    // 0x12d108: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x12d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12d10c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12d10cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_12d110:
    // 0x12d110: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x12d110u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12d114: 0x0  nop
    ctx->pc = 0x12d114u;
    // NOP
    // 0x12d118: 0x0  nop
    ctx->pc = 0x12d118u;
    // NOP
    // 0x12d11c: 0x0  nop
    ctx->pc = 0x12d11cu;
    // NOP
    // 0x12d120: 0x0  nop
    ctx->pc = 0x12d120u;
    // NOP
    // 0x12d124: 0x5043fffa  beql        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D124u;
    {
        const bool branch_taken_0x12d124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12d124) {
            ctx->pc = 0x12D128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D124u;
            // 0x12d128: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d110;
        }
    }
    ctx->pc = 0x12D12Cu;
    // 0x12d12c: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x12D12Cu;
    {
        const bool branch_taken_0x12d12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D12Cu;
        // 0x12d130: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d12c) {
            ctx->pc = 0x12DA48u;
            goto label_12da48;
        }
    }
    ctx->pc = 0x12D134u;
    // 0x12d134: 0x0  nop
    ctx->pc = 0x12d134u;
    // NOP
label_12d138:
    // 0x12d138: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x12d138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x12d13c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x12d13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x12d140: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d144: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12D144u;
    SET_GPR_U32(ctx, 31, 0x12D14Cu);
    ctx->pc = 0x12D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D144u;
    // 0x12d148: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12D144u, 0x12D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D14Cu;
label_12d14c:
    // 0x12d14c: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x12D14Cu;
    {
        const bool branch_taken_0x12d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D14Cu;
        // 0x12d150: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d14c) {
            ctx->pc = 0x12D070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d070;
        }
    }
    ctx->pc = 0x12D154u;
    // 0x12d154: 0x0  nop
    ctx->pc = 0x12d154u;
    // NOP
label_12d158:
    // 0x12d158: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x12d158u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d15c: 0x8fbe002c  lw          $fp, 0x2C($sp)
    ctx->pc = 0x12d15cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x12d160: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x12d160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x12d164: 0x8fb50054  lw          $s5, 0x54($sp)
    ctx->pc = 0x12d164u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_12d168:
    // 0x12d168: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12d168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12d16c:
    // 0x12d16c: 0x460006a  bltz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x12D16Cu;
    {
        const bool branch_taken_0x12d16c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x12D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D16Cu;
        // 0x12d170: 0x2bc2000f  slti        $v0, $fp, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d16c) {
            ctx->pc = 0x12D318u;
            goto label_12d318;
        }
    }
    ctx->pc = 0x12D174u;
    // 0x12d174: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x12D174u;
    {
        const bool branch_taken_0x12d174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D174u;
        // 0x12d178: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d174) {
            ctx->pc = 0x12D31Cu;
            goto label_12d31c;
        }
    }
    ctx->pc = 0x12D17Cu;
    // 0x12d17c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x12d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12d180: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x12d180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x12d184: 0x3c110015  lui         $s1, 0x15
    ctx->pc = 0x12d184u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)21 << 16));
    // 0x12d188: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x12d188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12d18c: 0xde31f990  ld          $s1, -0x670($s1)
    ctx->pc = 0x12d18cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 4294965648)));
    // 0x12d190: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12D190u;
    {
        const bool branch_taken_0x12d190 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D190u;
        // 0x12d194: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d190) {
            ctx->pc = 0x12D1E8u;
            goto label_12d1e8;
        }
    }
    ctx->pc = 0x12D198u;
    // 0x12d198: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12d198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d19c: 0x1c800012  bgtz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12D19Cu;
    {
        const bool branch_taken_0x12d19c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x12d19c) {
            ctx->pc = 0x12D1E8u;
            goto label_12d1e8;
        }
    }
    ctx->pc = 0x12D1A4u;
    // 0x12d1a4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x12d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x12d1a8: 0x480013b  bltz        $a0, . + 4 + (0x13B << 2)
    ctx->pc = 0x12D1A8u;
    {
        const bool branch_taken_0x12d1a8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x12D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1A8u;
        // 0x12d1ac: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1a8) {
            ctx->pc = 0x12D698u;
            goto label_12d698;
        }
    }
    ctx->pc = 0x12D1B0u;
    // 0x12d1b0: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x12d1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x12d1b4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x12d1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x12d1b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1bc: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12D1BCu;
    SET_GPR_U32(ctx, 31, 0x12D1C4u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12D1BCu, 0x12D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D1C4u;
label_12d1c4:
    // 0x12d1c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12d1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1cc: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12D1CCu;
    SET_GPR_U32(ctx, 31, 0x12D1D4u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12D1CCu, 0x12D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D1D4u;
label_12d1d4:
    // 0x12d1d4: 0x18400131  blez        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x12D1D4u;
    {
        const bool branch_taken_0x12d1d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1D4u;
        // 0x12d1d8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1d4) {
            ctx->pc = 0x12D69Cu;
            goto label_12d69c;
        }
    }
    ctx->pc = 0x12D1DCu;
    // 0x12d1dc: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x12D1DCu;
    {
        const bool branch_taken_0x12d1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1DCu;
        // 0x12d1e0: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1dc) {
            ctx->pc = 0x12D6A8u;
            goto label_12d6a8;
        }
    }
    ctx->pc = 0x12D1E4u;
    // 0x12d1e4: 0x0  nop
    ctx->pc = 0x12d1e4u;
    // NOP
label_12d1e8:
    // 0x12d1e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12d1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1f0: 0xc048d62  jal         func_123588
    ctx->pc = 0x12D1F0u;
    SET_GPR_U32(ctx, 31, 0x12D1F8u);
    ctx->pc = 0x123588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123588u, 0x12D1F0u, 0x12D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D1F8u;
label_12d1f8:
    // 0x12d1f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1fc: 0xc04c02c  jal         func_1300B0
    ctx->pc = 0x12D1FCu;
    SET_GPR_U32(ctx, 31, 0x12D204u);
    ctx->pc = 0x1300B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1300B0u, 0x12D1FCu, 0x12D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D204u;
label_12d204:
    // 0x12d204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12d204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d208: 0xc048dc6  jal         func_123718
    ctx->pc = 0x12D208u;
    SET_GPR_U32(ctx, 31, 0x12D210u);
    ctx->pc = 0x12D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D208u;
    // 0x12d20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x12D208u, 0x12D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D210u;
label_12d210:
    // 0x12d210: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d218: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12D218u;
    SET_GPR_U32(ctx, 31, 0x12D220u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12D218u, 0x12D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D220u;
label_12d220:
    // 0x12d220: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d224: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d228: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12D228u;
    SET_GPR_U32(ctx, 31, 0x12D230u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12D228u, 0x12D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D230u;
label_12d230:
    // 0x12d230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d234: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x12d234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x12d238: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x12d238u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12d23c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d240: 0x16620027  bne         $s3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x12D240u;
    {
        const bool branch_taken_0x12d240 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x12D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D240u;
        // 0x12d244: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d240) {
            ctx->pc = 0x12D2E0u;
            goto label_12d2e0;
        }
    }
    ctx->pc = 0x12D248u;
    // 0x12d248: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d24c: 0xc048c90  jal         func_123240
    ctx->pc = 0x12D24Cu;
    SET_GPR_U32(ctx, 31, 0x12D254u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12D24Cu, 0x12D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D254u;
label_12d254:
    // 0x12d254: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d258: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12d258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d25c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d260: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12D260u;
    SET_GPR_U32(ctx, 31, 0x12D268u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12D260u, 0x12D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D268u;
label_12d268:
    // 0x12d268: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12D268u;
    {
        const bool branch_taken_0x12d268 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D268u;
        // 0x12d26c: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d268) {
            ctx->pc = 0x12D294u;
            goto label_12d294;
        }
    }
    ctx->pc = 0x12D270u;
    // 0x12d270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d274: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d278: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12D278u;
    SET_GPR_U32(ctx, 31, 0x12D280u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12D278u, 0x12D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D280u;
label_12d280:
    // 0x12d280: 0x144001f2  bnez        $v0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x12D280u;
    {
        const bool branch_taken_0x12d280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D280u;
        // 0x12d284: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d280) {
            ctx->pc = 0x12DA4Cu;
            goto label_12da4c;
        }
    }
    ctx->pc = 0x12D288u;
    // 0x12d288: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x12d288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x12d28c: 0x104001ef  beqz        $v0, . + 4 + (0x1EF << 2)
    ctx->pc = 0x12D28Cu;
    {
        const bool branch_taken_0x12d28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D28Cu;
        // 0x12d290: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d28c) {
            ctx->pc = 0x12DA4Cu;
            goto label_12da4c;
        }
    }
    ctx->pc = 0x12D294u;
label_12d294:
    // 0x12d294: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x12d294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12d298: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12d298u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x12d29c: 0x0  nop
    ctx->pc = 0x12d29cu;
    // NOP
label_12d2a0:
    // 0x12d2a0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x12d2a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12d2a4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x12D2A4u;
    {
        const bool branch_taken_0x12d2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2A4u;
        // 0x12d2a8: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2a4) {
            ctx->pc = 0x12D2D0u;
            goto label_12d2d0;
        }
    }
    ctx->pc = 0x12D2ACu;
    // 0x12d2ac: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x12d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12d2b0: 0x0  nop
    ctx->pc = 0x12d2b0u;
    // NOP
    // 0x12d2b4: 0x0  nop
    ctx->pc = 0x12d2b4u;
    // NOP
    // 0x12d2b8: 0x0  nop
    ctx->pc = 0x12d2b8u;
    // NOP
    // 0x12d2bc: 0x56a4fff8  bnel        $s5, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12D2BCu;
    {
        const bool branch_taken_0x12d2bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x12d2bc) {
            ctx->pc = 0x12D2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D2BCu;
            // 0x12d2c0: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d2a0;
        }
    }
    ctx->pc = 0x12D2C4u;
    // 0x12d2c4: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x12d2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x12d2c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12d2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2cc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12d2ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_12d2d0:
    // 0x12d2d0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x12d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12d2d4: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x12d2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12d2d8: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x12D2D8u;
    {
        const bool branch_taken_0x12d2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2D8u;
        // 0x12d2dc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2d8) {
            ctx->pc = 0x12DA48u;
            goto label_12da48;
        }
    }
    ctx->pc = 0x12D2E0u;
label_12d2e0:
    // 0x12d2e0: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x12d2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x12d2e4: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x12d2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x12d2e8: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12D2E8u;
    SET_GPR_U32(ctx, 31, 0x12D2F0u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12D2E8u, 0x12D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2F0u;
label_12d2f0:
    // 0x12d2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d2f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2fc: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12D2FCu;
    SET_GPR_U32(ctx, 31, 0x12D304u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12D2FCu, 0x12D304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D304u;
label_12d304:
    // 0x12d304: 0x104001d0  beqz        $v0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x12D304u;
    {
        const bool branch_taken_0x12d304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D304u;
        // 0x12d308: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d304) {
            ctx->pc = 0x12DA48u;
            goto label_12da48;
        }
    }
    ctx->pc = 0x12D30Cu;
    // 0x12d30c: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x12D30Cu;
    {
        const bool branch_taken_0x12d30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d30c) {
            ctx->pc = 0x12D1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d1e8;
        }
    }
    ctx->pc = 0x12D314u;
    // 0x12d314: 0x0  nop
    ctx->pc = 0x12d314u;
    // NOP
label_12d318:
    // 0x12d318: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x12d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12d31c:
    // 0x12d31c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x12d31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x12d320: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x12d320u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d324: 0x28560002  slti        $s6, $v0, 0x2
    ctx->pc = 0x12d324u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12d328: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x12d328u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12d32c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x12d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x12d330: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x12D330u;
    {
        const bool branch_taken_0x12d330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D330u;
        // 0x12d334: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d330) {
            ctx->pc = 0x12D3D4u;
            goto label_12d3d4;
        }
    }
    ctx->pc = 0x12D338u;
    // 0x12d338: 0x52c00009  beql        $s6, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D338u;
    {
        const bool branch_taken_0x12d338 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d338) {
            ctx->pc = 0x12D33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D338u;
            // 0x12d33c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D360u;
            goto label_12d360;
        }
    }
    ctx->pc = 0x12D340u;
    // 0x12d340: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x12d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d344: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12D344u;
    {
        const bool branch_taken_0x12d344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D344u;
        // 0x12d348: 0x24730433  addiu       $s3, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d344) {
            ctx->pc = 0x12D3ACu;
            goto label_12d3ac;
        }
    }
    ctx->pc = 0x12D34Cu;
    // 0x12d34c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12d350: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x12d350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x12d354: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x12D354u;
    {
        const bool branch_taken_0x12d354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D354u;
        // 0x12d358: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d354) {
            ctx->pc = 0x12D3ACu;
            goto label_12d3ac;
        }
    }
    ctx->pc = 0x12D35Cu;
    // 0x12d35c: 0x0  nop
    ctx->pc = 0x12d35cu;
    // NOP
label_12d360:
    // 0x12d360: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x12d360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12d364: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x12d364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d368: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x12d368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12d36c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D36Cu;
    {
        const bool branch_taken_0x12d36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D36Cu;
        // 0x12d370: 0x909023  subu        $s2, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d36c) {
            ctx->pc = 0x12D394u;
            goto label_12d394;
        }
    }
    ctx->pc = 0x12D374u;
    // 0x12d374: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x12d374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12d378: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12d378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d37c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x12d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12d380: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x12d380u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12d384: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12d388: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12d388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12d38c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x12d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x12d390: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x12d390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_12d394:
    // 0x12d394: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x12d394u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d398: 0x6610005  bgez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D398u;
    {
        const bool branch_taken_0x12d398 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x12D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D398u;
        // 0x12d39c: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d398) {
            ctx->pc = 0x12D3B0u;
            goto label_12d3b0;
        }
    }
    ctx->pc = 0x12D3A0u;
    // 0x12d3a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d3a4: 0x938823  subu        $s1, $a0, $s3
    ctx->pc = 0x12d3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x12d3a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12d3a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d3ac:
    // 0x12d3ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_12d3b0:
    // 0x12d3b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d3b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x12d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12d3bc: 0xc04bbfa  jal         func_12EFE8
    ctx->pc = 0x12D3BCu;
    SET_GPR_U32(ctx, 31, 0x12D3C4u);
    ctx->pc = 0x12D3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D3BCu;
    // 0x12d3c0: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFE8u, 0x12D3BCu, 0x12D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3C4u;
label_12d3c4:
    // 0x12d3c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d3c8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12d3cc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x12d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x12d3d0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d3d4:
    // 0x12d3d4: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x12D3D4u;
    {
        const bool branch_taken_0x12d3d4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3D4u;
        // 0x12d3d8: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3d4) {
            ctx->pc = 0x12D40Cu;
            goto label_12d40c;
        }
    }
    ctx->pc = 0x12D3DCu;
    // 0x12d3dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12d3e0: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x12D3E0u;
    {
        const bool branch_taken_0x12d3e0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x12D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3E0u;
        // 0x12d3e4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3e0) {
            ctx->pc = 0x12D40Cu;
            goto label_12d40c;
        }
    }
    ctx->pc = 0x12D3E8u;
    // 0x12d3e8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x12d3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12d3ec: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x12d3ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x12d3f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d3f4: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x12d3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x12d3f8: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x12d3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x12d3fc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x12d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12d400: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x12d400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x12d404: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12d404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12d408: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x12d408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_12d40c:
    // 0x12d40c: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x12D40Cu;
    {
        const bool branch_taken_0x12d40c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D40Cu;
        // 0x12d410: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d40c) {
            ctx->pc = 0x12D49Cu;
            goto label_12d49c;
        }
    }
    ctx->pc = 0x12D414u;
    // 0x12d414: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x12d414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x12d418: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12D418u;
    {
        const bool branch_taken_0x12d418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D418u;
        // 0x12d41c: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d418) {
            ctx->pc = 0x12D488u;
            goto label_12d488;
        }
    }
    ctx->pc = 0x12D420u;
    // 0x12d420: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x12D420u;
    {
        const bool branch_taken_0x12d420 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D420u;
        // 0x12d424: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d420) {
            ctx->pc = 0x12D464u;
            goto label_12d464;
        }
    }
    ctx->pc = 0x12D428u;
    // 0x12d428: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12d428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12d42c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d430: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x12D430u;
    SET_GPR_U32(ctx, 31, 0x12D438u);
    ctx->pc = 0x12D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D430u;
    // 0x12d434: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F230u, 0x12D430u, 0x12D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D438u;
label_12d438:
    // 0x12d438: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d43c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x12d43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d440: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d444: 0xc04bc08  jal         func_12F020
    ctx->pc = 0x12D444u;
    SET_GPR_U32(ctx, 31, 0x12D44Cu);
    ctx->pc = 0x12D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D444u;
    // 0x12d448: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F020u, 0x12D444u, 0x12D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D44Cu;
label_12d44c:
    // 0x12d44c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d450: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x12d450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d454: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12D454u;
    SET_GPR_U32(ctx, 31, 0x12D45Cu);
    ctx->pc = 0x12D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D454u;
    // 0x12d458: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12D454u, 0x12D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D45Cu;
label_12d45c:
    // 0x12d45c: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x12d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
    // 0x12d460: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x12d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_12d464:
    // 0x12d464: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x12d464u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12d468: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x12D468u;
    {
        const bool branch_taken_0x12d468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d468) {
            ctx->pc = 0x12D46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D468u;
            // 0x12d46c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D49Cu;
            goto label_12d49c;
        }
    }
    ctx->pc = 0x12D470u;
    // 0x12d470: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x12d470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d474: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12d474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d478: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x12D478u;
    SET_GPR_U32(ctx, 31, 0x12D480u);
    ctx->pc = 0x12D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D478u;
    // 0x12d47c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F230u, 0x12D478u, 0x12D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D480u;
label_12d480:
    // 0x12d480: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12D480u;
    {
        const bool branch_taken_0x12d480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D480u;
        // 0x12d484: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d480) {
            ctx->pc = 0x12D498u;
            goto label_12d498;
        }
    }
    ctx->pc = 0x12D488u;
label_12d488:
    // 0x12d488: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d48c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x12D48Cu;
    SET_GPR_U32(ctx, 31, 0x12D494u);
    ctx->pc = 0x12D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D48Cu;
    // 0x12d490: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F230u, 0x12D48Cu, 0x12D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D494u;
label_12d494:
    // 0x12d494: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x12d494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_12d498:
    // 0x12d498: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12d49c:
    // 0x12d49c: 0xc04bbfa  jal         func_12EFE8
    ctx->pc = 0x12D49Cu;
    SET_GPR_U32(ctx, 31, 0x12D4A4u);
    ctx->pc = 0x12D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D49Cu;
    // 0x12d4a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFE8u, 0x12D49Cu, 0x12D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D4A4u;
label_12d4a4:
    // 0x12d4a4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x12d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12d4a8: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D4A8u;
    {
        const bool branch_taken_0x12d4a8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4A8u;
        // 0x12d4ac: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4a8) {
            ctx->pc = 0x12D4C4u;
            goto label_12d4c4;
        }
    }
    ctx->pc = 0x12D4B0u;
    // 0x12d4b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4b8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x12D4B8u;
    SET_GPR_U32(ctx, 31, 0x12D4C0u);
    ctx->pc = 0x12D4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D4B8u;
    // 0x12d4bc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F230u, 0x12D4B8u, 0x12D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D4C0u;
label_12d4c0:
    // 0x12d4c0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12d4c4:
    // 0x12d4c4: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x12D4C4u;
    {
        const bool branch_taken_0x12d4c4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4C4u;
        // 0x12d4c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4c4) {
            ctx->pc = 0x12D50Cu;
            goto label_12d50c;
        }
    }
    ctx->pc = 0x12D4CCu;
    // 0x12d4cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d4d0: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x12d4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x12d4d4: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x12d4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x12d4d8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12D4D8u;
    {
        const bool branch_taken_0x12d4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4D8u;
        // 0x12d4dc: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4d8) {
            ctx->pc = 0x12D510u;
            goto label_12d510;
        }
    }
    ctx->pc = 0x12D4E0u;
    // 0x12d4e0: 0x14103f  dsra32      $v0, $s4, 0
    ctx->pc = 0x12d4e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x12d4e4: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x12d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x12d4e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12d4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12d4ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D4ECu;
    {
        const bool branch_taken_0x12d4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4ECu;
        // 0x12d4f0: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4ec) {
            ctx->pc = 0x12D50Cu;
            goto label_12d50c;
        }
    }
    ctx->pc = 0x12D4F4u;
    // 0x12d4f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12d4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d4f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12d4fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12d4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12d500: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d504: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12d504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12d508: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x12d508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_12d50c:
    // 0x12d50c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x12d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_12d510:
    // 0x12d510: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D510u;
    {
        const bool branch_taken_0x12d510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D510u;
        // 0x12d514: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d510) {
            ctx->pc = 0x12D538u;
            goto label_12d538;
        }
    }
    ctx->pc = 0x12D518u;
    // 0x12d518: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12d518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12d51c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d520: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12d524: 0xc04bbaa  jal         func_12EEA8
    ctx->pc = 0x12D524u;
    SET_GPR_U32(ctx, 31, 0x12D52Cu);
    ctx->pc = 0x12D528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D524u;
    // 0x12d528: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EEA8u, 0x12D524u, 0x12D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D52Cu;
label_12d52c:
    // 0x12d52c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12d530: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12D530u;
    {
        const bool branch_taken_0x12d530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D530u;
        // 0x12d534: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d530) {
            ctx->pc = 0x12D540u;
            goto label_12d540;
        }
    }
    ctx->pc = 0x12D538u;
label_12d538:
    // 0x12d538: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12d538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12d53c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x12d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12d540:
    // 0x12d540: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x12d540u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12d544: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D544u;
    {
        const bool branch_taken_0x12d544 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D544u;
        // 0x12d548: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d544) {
            ctx->pc = 0x12D550u;
            goto label_12d550;
        }
    }
    ctx->pc = 0x12D54Cu;
    // 0x12d54c: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x12d54cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_12d550:
    // 0x12d550: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x12d550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x12d554: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12D554u;
    {
        const bool branch_taken_0x12d554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D554u;
        // 0x12d558: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d554) {
            ctx->pc = 0x12D580u;
            goto label_12d580;
        }
    }
    ctx->pc = 0x12D55Cu;
    // 0x12d55c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12d560: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x12d560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x12d564: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d568: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x12d568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x12d56c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x12d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12d570: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x12d570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x12d574: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x12d574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x12d578: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12D578u;
    {
        const bool branch_taken_0x12d578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D578u;
        // 0x12d57c: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d578) {
            ctx->pc = 0x12D5A8u;
            goto label_12d5a8;
        }
    }
    ctx->pc = 0x12D580u;
label_12d580:
    // 0x12d580: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12D580u;
    {
        const bool branch_taken_0x12d580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D580u;
        // 0x12d584: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d580) {
            ctx->pc = 0x12D5ACu;
            goto label_12d5ac;
        }
    }
    ctx->pc = 0x12D588u;
    // 0x12d588: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12d588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12d58c: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x12d58cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x12d590: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d594: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x12d594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x12d598: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x12d598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x12d59c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x12d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12d5a0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x12d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x12d5a4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_12d5a8:
    // 0x12d5a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d5ac:
    // 0x12d5ac: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D5ACu;
    {
        const bool branch_taken_0x12d5ac = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x12d5ac) {
            ctx->pc = 0x12D5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D5ACu;
            // 0x12d5b0: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D5CCu;
            goto label_12d5cc;
        }
    }
    ctx->pc = 0x12D5B4u;
    // 0x12d5b4: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x12d5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d5b8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x12d5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5bc: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x12D5BCu;
    SET_GPR_U32(ctx, 31, 0x12D5C4u);
    ctx->pc = 0x12D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5BCu;
    // 0x12d5c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x12D5BCu, 0x12D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5C4u;
label_12d5c4:
    // 0x12d5c4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x12d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x12d5c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_12d5cc:
    // 0x12d5cc: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D5CCu;
    {
        const bool branch_taken_0x12d5cc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x12D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5CCu;
        // 0x12d5d0: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5cc) {
            ctx->pc = 0x12D5ECu;
            goto label_12d5ec;
        }
    }
    ctx->pc = 0x12D5D4u;
    // 0x12d5d4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d5d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12d5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5dc: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x12D5DCu;
    SET_GPR_U32(ctx, 31, 0x12D5E4u);
    ctx->pc = 0x12D5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5DCu;
    // 0x12d5e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x12D5DCu, 0x12D5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5E4u;
label_12d5e4:
    // 0x12d5e4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x12d5e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x12d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_12d5ec:
    // 0x12d5ec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12D5ECu;
    {
        const bool branch_taken_0x12d5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5ECu;
        // 0x12d5f0: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5ec) {
            ctx->pc = 0x12D648u;
            goto label_12d648;
        }
    }
    ctx->pc = 0x12D5F4u;
    // 0x12d5f4: 0xc04bd22  jal         func_12F488
    ctx->pc = 0x12D5F4u;
    SET_GPR_U32(ctx, 31, 0x12D5FCu);
    ctx->pc = 0x12D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5F4u;
    // 0x12d5f8: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F488u, 0x12D5F4u, 0x12D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5FCu;
label_12d5fc:
    // 0x12d5fc: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12D5FCu;
    {
        const bool branch_taken_0x12d5fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12d5fc) {
            ctx->pc = 0x12D600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D5FCu;
            // 0x12d600: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D64Cu;
            goto label_12d64c;
        }
    }
    ctx->pc = 0x12D604u;
    // 0x12d604: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x12d604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d608: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d60c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12d60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12d610: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x12D610u;
    SET_GPR_U32(ctx, 31, 0x12D618u);
    ctx->pc = 0x12D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D610u;
    // 0x12d614: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC70u, 0x12D610u, 0x12D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D618u;
label_12d618:
    // 0x12d618: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x12d618u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x12d61c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x12d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x12d620: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D620u;
    {
        const bool branch_taken_0x12d620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D620u;
        // 0x12d624: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d620) {
            ctx->pc = 0x12D640u;
            goto label_12d640;
        }
    }
    ctx->pc = 0x12D628u;
    // 0x12d628: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12d628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12d62c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d630: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12d630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12d634: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x12D634u;
    SET_GPR_U32(ctx, 31, 0x12D63Cu);
    ctx->pc = 0x12D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D634u;
    // 0x12d638: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC70u, 0x12D634u, 0x12D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D63Cu;
label_12d63c:
    // 0x12d63c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_12d640:
    // 0x12d640: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12d640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d644: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12d644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_12d648:
    // 0x12d648: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12d64c:
    // 0x12d64c: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12D64Cu;
    {
        const bool branch_taken_0x12d64c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D64Cu;
        // 0x12d650: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d64c) {
            ctx->pc = 0x12D6C0u;
            goto label_12d6c0;
        }
    }
    ctx->pc = 0x12D654u;
    // 0x12d654: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12d654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d658: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x12d658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12d65c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12D65Cu;
    {
        const bool branch_taken_0x12d65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d65c) {
            ctx->pc = 0x12D6C0u;
            goto label_12d6c0;
        }
    }
    ctx->pc = 0x12D664u;
    // 0x12d664: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12d664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d668: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x12D668u;
    {
        const bool branch_taken_0x12d668 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x12D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D668u;
        // 0x12d66c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d668) {
            ctx->pc = 0x12D698u;
            goto label_12d698;
        }
    }
    ctx->pc = 0x12D670u;
    // 0x12d670: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d674: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x12d674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d678: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x12D678u;
    SET_GPR_U32(ctx, 31, 0x12D680u);
    ctx->pc = 0x12D67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D678u;
    // 0x12d67c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC70u, 0x12D678u, 0x12D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D680u;
label_12d680:
    // 0x12d680: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x12d680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d688: 0xc04bd22  jal         func_12F488
    ctx->pc = 0x12D688u;
    SET_GPR_U32(ctx, 31, 0x12D690u);
    ctx->pc = 0x12D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D688u;
    // 0x12d68c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F488u, 0x12D688u, 0x12D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D690u;
label_12d690:
    // 0x12d690: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D690u;
    {
        const bool branch_taken_0x12d690 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x12d690) {
            ctx->pc = 0x12D694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D690u;
            // 0x12d694: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D6A8u;
            goto label_12d6a8;
        }
    }
    ctx->pc = 0x12D698u;
label_12d698:
    // 0x12d698: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x12d698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_12d69c:
    // 0x12d69c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x12D69Cu;
    {
        const bool branch_taken_0x12d69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D69Cu;
        // 0x12d6a0: 0x2f027  nor         $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d69c) {
            ctx->pc = 0x12DA0Cu;
            goto label_12da0c;
        }
    }
    ctx->pc = 0x12D6A4u;
    // 0x12d6a4: 0x0  nop
    ctx->pc = 0x12d6a4u;
    // NOP
label_12d6a8:
    // 0x12d6a8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x12d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x12d6ac: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12d6acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12d6b0: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x12d6b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d6b4: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x12D6B4u;
    {
        const bool branch_taken_0x12d6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6B4u;
        // 0x12d6b8: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6b4) {
            ctx->pc = 0x12DA0Cu;
            goto label_12da0c;
        }
    }
    ctx->pc = 0x12D6BCu;
    // 0x12d6bc: 0x0  nop
    ctx->pc = 0x12d6bcu;
    // NOP
label_12d6c0:
    // 0x12d6c0: 0x1080009a  beqz        $a0, . + 4 + (0x9A << 2)
    ctx->pc = 0x12D6C0u;
    {
        const bool branch_taken_0x12d6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6C0u;
        // 0x12d6c4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6c0) {
            ctx->pc = 0x12D92Cu;
            goto label_12d92c;
        }
    }
    ctx->pc = 0x12D6C8u;
    // 0x12d6c8: 0x1a200007  blez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D6C8u;
    {
        const bool branch_taken_0x12d6c8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6C8u;
        // 0x12d6cc: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6c8) {
            ctx->pc = 0x12D6E8u;
            goto label_12d6e8;
        }
    }
    ctx->pc = 0x12D6D0u;
    // 0x12d6d0: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12d6d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12d6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6d8: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x12D6D8u;
    SET_GPR_U32(ctx, 31, 0x12D6E0u);
    ctx->pc = 0x12D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6D8u;
    // 0x12d6dc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x12D6D8u, 0x12D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6E0u;
label_12d6e0:
    // 0x12d6e0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12d6e4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x12d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_12d6e8:
    // 0x12d6e8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12D6E8u;
    {
        const bool branch_taken_0x12d6e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6E8u;
        // 0x12d6ec: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6e8) {
            ctx->pc = 0x12D730u;
            goto label_12d730;
        }
    }
    ctx->pc = 0x12D6F0u;
    // 0x12d6f0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x12d6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12d6f4: 0xc04bae6  jal         func_12EB98
    ctx->pc = 0x12D6F4u;
    SET_GPR_U32(ctx, 31, 0x12D6FCu);
    ctx->pc = 0x12D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6F4u;
    // 0x12d6f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB98u, 0x12D6F4u, 0x12D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6FCu;
label_12d6fc:
    // 0x12d6fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d700: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x12d700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x12d704: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12d704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12d708: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x12d708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x12d70c: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x12d70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12d710: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x12d710u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12d714: 0xc04a125  jal         func_128494
    ctx->pc = 0x12D714u;
    SET_GPR_U32(ctx, 31, 0x12D71Cu);
    ctx->pc = 0x12D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D714u;
    // 0x12d718: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x12D714u, 0x12D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D71Cu;
label_12d71c:
    // 0x12d71c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d720: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12d720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12d724: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x12D724u;
    SET_GPR_U32(ctx, 31, 0x12D72Cu);
    ctx->pc = 0x12D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D724u;
    // 0x12d728: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x12D724u, 0x12D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D72Cu;
label_12d72c:
    // 0x12d72c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_12d730:
    // 0x12d730: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x12d730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x12d734: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d734u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d738: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12d738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d73c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x12D73Cu;
    {
        const bool branch_taken_0x12d73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D73Cu;
        // 0x12d740: 0x30560001  andi        $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d73c) {
            ctx->pc = 0x12D7C0u;
            goto label_12d7c0;
        }
    }
    ctx->pc = 0x12D744u;
    // 0x12d744: 0x0  nop
    ctx->pc = 0x12d744u;
    // NOP
label_12d748:
    // 0x12d748: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x12d748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d74c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d750: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12d750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12d754: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x12D754u;
    SET_GPR_U32(ctx, 31, 0x12D75Cu);
    ctx->pc = 0x12D758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D754u;
    // 0x12d758: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC70u, 0x12D754u, 0x12D75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D75Cu;
label_12d75c:
    // 0x12d75c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x12d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x12d760: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d764: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x12d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12d768: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D768u;
    {
        const bool branch_taken_0x12d768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x12D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D768u;
        // 0x12d76c: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d768) {
            ctx->pc = 0x12D790u;
            goto label_12d790;
        }
    }
    ctx->pc = 0x12D770u;
    // 0x12d770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12d770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d774: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d778: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12d778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12d77c: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x12D77Cu;
    SET_GPR_U32(ctx, 31, 0x12D784u);
    ctx->pc = 0x12D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D77Cu;
    // 0x12d780: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC70u, 0x12D77Cu, 0x12D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D784u;
label_12d784:
    // 0x12d784: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12d784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12d788: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12D788u;
    {
        const bool branch_taken_0x12d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D788u;
        // 0x12d78c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d788) {
            ctx->pc = 0x12D7BCu;
            goto label_12d7bc;
        }
    }
    ctx->pc = 0x12D790u;
label_12d790:
    // 0x12d790: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12d790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12d794: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12d794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d798: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x12D798u;
    SET_GPR_U32(ctx, 31, 0x12D7A0u);
    ctx->pc = 0x12D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D798u;
    // 0x12d79c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC70u, 0x12D798u, 0x12D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7A0u;
label_12d7a0:
    // 0x12d7a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7a4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12d7a8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12d7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12d7ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12d7acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7b0: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x12D7B0u;
    SET_GPR_U32(ctx, 31, 0x12D7B8u);
    ctx->pc = 0x12D7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7B0u;
    // 0x12d7b4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC70u, 0x12D7B0u, 0x12D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7B8u;
label_12d7b8:
    // 0x12d7b8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_12d7bc:
    // 0x12d7bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12d7bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_12d7c0:
    // 0x12d7c0: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x12d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d7c4: 0xc04b184  jal         func_12C610
    ctx->pc = 0x12D7C4u;
    SET_GPR_U32(ctx, 31, 0x12D7CCu);
    ctx->pc = 0x12D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7C4u;
    // 0x12d7c8: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C610u, 0x12D7C4u, 0x12D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7CCu;
label_12d7cc:
    // 0x12d7cc: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x12d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d7d0: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x12d7d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d7d4: 0xc04bd22  jal         func_12F488
    ctx->pc = 0x12D7D4u;
    SET_GPR_U32(ctx, 31, 0x12D7DCu);
    ctx->pc = 0x12D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7D4u;
    // 0x12d7d8: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F488u, 0x12D7D4u, 0x12D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7DCu;
label_12d7dc:
    // 0x12d7dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7e0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12d7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d7e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12d7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7e8: 0xc04bd3c  jal         func_12F4F0
    ctx->pc = 0x12D7E8u;
    SET_GPR_U32(ctx, 31, 0x12D7F0u);
    ctx->pc = 0x12D7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7E8u;
    // 0x12d7ec: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F4F0u, 0x12D7E8u, 0x12D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7F0u;
label_12d7f0:
    // 0x12d7f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12d7f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7f4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x12d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12d7f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D7F8u;
    {
        const bool branch_taken_0x12d7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D7F8u;
        // 0x12d7fc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7f8) {
            ctx->pc = 0x12D810u;
            goto label_12d810;
        }
    }
    ctx->pc = 0x12D800u;
    // 0x12d800: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x12d800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d804: 0xc04bd22  jal         func_12F488
    ctx->pc = 0x12D804u;
    SET_GPR_U32(ctx, 31, 0x12D80Cu);
    ctx->pc = 0x12D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D804u;
    // 0x12d808: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F488u, 0x12D804u, 0x12D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D80Cu;
label_12d80c:
    // 0x12d80c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12d810:
    // 0x12d810: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d814: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12D814u;
    SET_GPR_U32(ctx, 31, 0x12D81Cu);
    ctx->pc = 0x12D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D814u;
    // 0x12d818: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12D814u, 0x12D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D81Cu;
label_12d81c:
    // 0x12d81c: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x12D81Cu;
    {
        const bool branch_taken_0x12d81c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D81Cu;
        // 0x12d820: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d81c) {
            ctx->pc = 0x12D848u;
            goto label_12d848;
        }
    }
    ctx->pc = 0x12D824u;
    // 0x12d824: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D824u;
    {
        const bool branch_taken_0x12d824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d824) {
            ctx->pc = 0x12D848u;
            goto label_12d848;
        }
    }
    ctx->pc = 0x12D82Cu;
    // 0x12d82c: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D82Cu;
    {
        const bool branch_taken_0x12d82c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D82Cu;
        // 0x12d830: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d82c) {
            ctx->pc = 0x12D848u;
            goto label_12d848;
        }
    }
    ctx->pc = 0x12D834u;
    // 0x12d834: 0x12840029  beq         $s4, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12D834u;
    {
        const bool branch_taken_0x12d834 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x12D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D834u;
        // 0x12d838: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d834) {
            ctx->pc = 0x12D8DCu;
            goto label_12d8dc;
        }
    }
    ctx->pc = 0x12D83Cu;
    // 0x12d83c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x12d83cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x12d840: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x12D840u;
    {
        const bool branch_taken_0x12d840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D840u;
        // 0x12d844: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d840) {
            ctx->pc = 0x12DA08u;
            goto label_12da08;
        }
    }
    ctx->pc = 0x12D848u;
label_12d848:
    // 0x12d848: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D848u;
    {
        const bool branch_taken_0x12d848 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x12d848) {
            ctx->pc = 0x12D868u;
            goto label_12d868;
        }
    }
    ctx->pc = 0x12D850u;
    // 0x12d850: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x12D850u;
    {
        const bool branch_taken_0x12d850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D850u;
        // 0x12d854: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d850) {
            ctx->pc = 0x12D8C8u;
            goto label_12d8c8;
        }
    }
    ctx->pc = 0x12D858u;
    // 0x12d858: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12D858u;
    {
        const bool branch_taken_0x12d858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d858) {
            ctx->pc = 0x12D8C8u;
            goto label_12d8c8;
        }
    }
    ctx->pc = 0x12D860u;
    // 0x12d860: 0x16c00019  bnez        $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x12D860u;
    {
        const bool branch_taken_0x12d860 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d860) {
            ctx->pc = 0x12D8C8u;
            goto label_12d8c8;
        }
    }
    ctx->pc = 0x12D868u;
label_12d868:
    // 0x12d868: 0x5a200067  blezl       $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x12D868u;
    {
        const bool branch_taken_0x12d868 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x12d868) {
            ctx->pc = 0x12D86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D868u;
            // 0x12d86c: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DA08u;
            goto label_12da08;
        }
    }
    ctx->pc = 0x12D870u;
    // 0x12d870: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x12d870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d874: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12d874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d878: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x12D878u;
    SET_GPR_U32(ctx, 31, 0x12D880u);
    ctx->pc = 0x12D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D878u;
    // 0x12d87c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x12D878u, 0x12D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D880u;
label_12d880:
    // 0x12d880: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12d880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d884: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d888: 0xc04bd22  jal         func_12F488
    ctx->pc = 0x12D888u;
    SET_GPR_U32(ctx, 31, 0x12D890u);
    ctx->pc = 0x12D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D888u;
    // 0x12d88c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F488u, 0x12D888u, 0x12D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D890u;
label_12d890:
    // 0x12d890: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12d890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d894: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D894u;
    {
        const bool branch_taken_0x12d894 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x12d894) {
            ctx->pc = 0x12D898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D894u;
            // 0x12d898: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D8B4u;
            goto label_12d8b4;
        }
    }
    ctx->pc = 0x12D89Cu;
    // 0x12d89c: 0x5620005a  bnel        $s1, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x12D89Cu;
    {
        const bool branch_taken_0x12d89c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d89c) {
            ctx->pc = 0x12D8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D89Cu;
            // 0x12d8a0: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DA08u;
            goto label_12da08;
        }
    }
    ctx->pc = 0x12D8A4u;
    // 0x12d8a4: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x12d8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x12d8a8: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x12D8A8u;
    {
        const bool branch_taken_0x12d8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d8a8) {
            ctx->pc = 0x12D8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D8A8u;
            // 0x12d8ac: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DA08u;
            goto label_12da08;
        }
    }
    ctx->pc = 0x12D8B0u;
    // 0x12d8b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12d8b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12d8b4:
    // 0x12d8b4: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x12d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x12d8b8: 0x52820009  beql        $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D8B8u;
    {
        const bool branch_taken_0x12d8b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x12d8b8) {
            ctx->pc = 0x12D8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D8B8u;
            // 0x12d8bc: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D8E0u;
            goto label_12d8e0;
        }
    }
    ctx->pc = 0x12D8C0u;
    // 0x12d8c0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x12D8C0u;
    {
        const bool branch_taken_0x12d8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8C0u;
        // 0x12d8c4: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8c0) {
            ctx->pc = 0x12DA08u;
            goto label_12da08;
        }
    }
    ctx->pc = 0x12D8C8u;
label_12d8c8:
    // 0x12d8c8: 0x5a20000b  blezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x12D8C8u;
    {
        const bool branch_taken_0x12d8c8 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x12d8c8) {
            ctx->pc = 0x12D8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D8C8u;
            // 0x12d8cc: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D8F8u;
            goto label_12d8f8;
        }
    }
    ctx->pc = 0x12D8D0u;
    // 0x12d8d0: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x12d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x12d8d4: 0x16830006  bne         $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D8D4u;
    {
        const bool branch_taken_0x12d8d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x12D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8D4u;
        // 0x12d8d8: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8d4) {
            ctx->pc = 0x12D8F0u;
            goto label_12d8f0;
        }
    }
    ctx->pc = 0x12D8DCu;
label_12d8dc:
    // 0x12d8dc: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x12d8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_12d8e0:
    // 0x12d8e0: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x12d8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12d8e4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x12D8E4u;
    {
        const bool branch_taken_0x12d8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8E4u;
        // 0x12d8e8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8e4) {
            ctx->pc = 0x12D990u;
            goto label_12d990;
        }
    }
    ctx->pc = 0x12D8ECu;
    // 0x12d8ec: 0x0  nop
    ctx->pc = 0x12d8ecu;
    // NOP
label_12d8f0:
    // 0x12d8f0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x12D8F0u;
    {
        const bool branch_taken_0x12d8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8F0u;
        // 0x12d8f4: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8f0) {
            ctx->pc = 0x12DA08u;
            goto label_12da08;
        }
    }
    ctx->pc = 0x12D8F8u;
label_12d8f8:
    // 0x12d8f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d8fc: 0x1662ff92  bne         $s3, $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x12D8FCu;
    {
        const bool branch_taken_0x12d8fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x12D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8FCu;
        // 0x12d900: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8fc) {
            ctx->pc = 0x12D748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d748;
        }
    }
    ctx->pc = 0x12D904u;
    // 0x12d904: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12D904u;
    {
        const bool branch_taken_0x12d904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D904u;
        // 0x12d908: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d904) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D90Cu;
    // 0x12d90c: 0x0  nop
    ctx->pc = 0x12d90cu;
    // NOP
label_12d910:
    // 0x12d910: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x12d910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d914: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12d914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d918: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12d918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12d91c: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x12D91Cu;
    SET_GPR_U32(ctx, 31, 0x12D924u);
    ctx->pc = 0x12D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D91Cu;
    // 0x12d920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC70u, 0x12D91Cu, 0x12D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D924u;
label_12d924:
    // 0x12d924: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12d924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x12d928: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x12d928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_12d92c:
    // 0x12d92c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x12d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12d930: 0xc04b184  jal         func_12C610
    ctx->pc = 0x12D930u;
    SET_GPR_U32(ctx, 31, 0x12D938u);
    ctx->pc = 0x12D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D930u;
    // 0x12d934: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C610u, 0x12D930u, 0x12D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D938u;
label_12d938:
    // 0x12d938: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12d938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d93c: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x12d93cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d940: 0xa2b40000  sb          $s4, 0x0($s5)
    ctx->pc = 0x12d940u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x12d944: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x12d944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12d948: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x12D948u;
    {
        const bool branch_taken_0x12d948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D948u;
        // 0x12d94c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d948) {
            ctx->pc = 0x12D910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d910;
        }
    }
    ctx->pc = 0x12D950u;
    // 0x12d950: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x12d950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_12d954:
    // 0x12d954: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12d954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d958: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x12D958u;
    SET_GPR_U32(ctx, 31, 0x12D960u);
    ctx->pc = 0x12D95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D958u;
    // 0x12d95c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x12D958u, 0x12D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D960u;
label_12d960:
    // 0x12d960: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12d960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d968: 0xc04bd22  jal         func_12F488
    ctx->pc = 0x12D968u;
    SET_GPR_U32(ctx, 31, 0x12D970u);
    ctx->pc = 0x12D96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D968u;
    // 0x12d96c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F488u, 0x12D968u, 0x12D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D970u;
label_12d970:
    // 0x12d970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12d970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d974: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D974u;
    {
        const bool branch_taken_0x12d974 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x12d974) {
            ctx->pc = 0x12D978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D974u;
            // 0x12d978: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D994u;
            goto label_12d994;
        }
    }
    ctx->pc = 0x12D97Cu;
    // 0x12d97c: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12D97Cu;
    {
        const bool branch_taken_0x12d97c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D97Cu;
        // 0x12d980: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d97c) {
            ctx->pc = 0x12D9E8u;
            goto label_12d9e8;
        }
    }
    ctx->pc = 0x12D984u;
    // 0x12d984: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x12d984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x12d988: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x12D988u;
    {
        const bool branch_taken_0x12d988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d988) {
            ctx->pc = 0x12D98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D988u;
            // 0x12d98c: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D9ECu;
            goto label_12d9ec;
        }
    }
    ctx->pc = 0x12D990u;
label_12d990:
    // 0x12d990: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12d990u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_12d994:
    // 0x12d994: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12D994u;
    {
        const bool branch_taken_0x12d994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D994u;
        // 0x12d998: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d994) {
            ctx->pc = 0x12D9B0u;
            goto label_12d9b0;
        }
    }
    ctx->pc = 0x12D99Cu;
    // 0x12d99c: 0x0  nop
    ctx->pc = 0x12d99cu;
    // NOP
label_12d9a0:
    // 0x12d9a0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x12d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12d9a4: 0x52a2000a  beql        $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12D9A4u;
    {
        const bool branch_taken_0x12d9a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x12d9a4) {
            ctx->pc = 0x12D9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D9A4u;
            // 0x12d9a8: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D9D0u;
            goto label_12d9d0;
        }
    }
    ctx->pc = 0x12D9ACu;
    // 0x12d9ac: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12d9acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_12d9b0:
    // 0x12d9b0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x12d9b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12d9b4: 0x0  nop
    ctx->pc = 0x12d9b4u;
    // NOP
    // 0x12d9b8: 0x0  nop
    ctx->pc = 0x12d9b8u;
    // NOP
    // 0x12d9bc: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12D9BCu;
    {
        const bool branch_taken_0x12d9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9BCu;
        // 0x12d9c0: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9bc) {
            ctx->pc = 0x12D9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d9a0;
        }
    }
    ctx->pc = 0x12D9C4u;
    // 0x12d9c4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x12d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12d9c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12D9C8u;
    {
        const bool branch_taken_0x12d9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9C8u;
        // 0x12d9cc: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9c8) {
            ctx->pc = 0x12DA08u;
            goto label_12da08;
        }
    }
    ctx->pc = 0x12D9D0u;
label_12d9d0:
    // 0x12d9d0: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x12d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x12d9d4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12d9d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12d9d8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x12d9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12d9dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12D9DCu;
    {
        const bool branch_taken_0x12d9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9DCu;
        // 0x12d9e0: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9dc) {
            ctx->pc = 0x12DA0Cu;
            goto label_12da0c;
        }
    }
    ctx->pc = 0x12D9E4u;
    // 0x12d9e4: 0x0  nop
    ctx->pc = 0x12d9e4u;
    // NOP
label_12d9e8:
    // 0x12d9e8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12d9e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_12d9ec:
    // 0x12d9ec: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x12d9ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12d9f0: 0x0  nop
    ctx->pc = 0x12d9f0u;
    // NOP
    // 0x12d9f4: 0x0  nop
    ctx->pc = 0x12d9f4u;
    // NOP
    // 0x12d9f8: 0x0  nop
    ctx->pc = 0x12d9f8u;
    // NOP
    // 0x12d9fc: 0x0  nop
    ctx->pc = 0x12d9fcu;
    // NOP
    // 0x12da00: 0x5043fffa  beql        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12DA00u;
    {
        const bool branch_taken_0x12da00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12da00) {
            ctx->pc = 0x12DA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DA00u;
            // 0x12da04: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D9ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d9ec;
        }
    }
    ctx->pc = 0x12DA08u;
label_12da08:
    // 0x12da08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12da08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12da0c:
    // 0x12da0c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12da0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12da10: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12DA10u;
    SET_GPR_U32(ctx, 31, 0x12DA18u);
    ctx->pc = 0x12DA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA10u;
    // 0x12da14: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12DA10u, 0x12DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA18u;
label_12da18:
    // 0x12da18: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x12da18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12da1c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x12DA1Cu;
    {
        const bool branch_taken_0x12da1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA1Cu;
        // 0x12da20: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da1c) {
            ctx->pc = 0x12DA48u;
            goto label_12da48;
        }
    }
    ctx->pc = 0x12DA24u;
    // 0x12da24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DA24u;
    {
        const bool branch_taken_0x12da24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA24u;
        // 0x12da28: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da24) {
            ctx->pc = 0x12DA40u;
            goto label_12da40;
        }
    }
    ctx->pc = 0x12DA2Cu;
    // 0x12da2c: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DA2Cu;
    {
        const bool branch_taken_0x12da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x12DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA2Cu;
        // 0x12da30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da2c) {
            ctx->pc = 0x12DA3Cu;
            goto label_12da3c;
        }
    }
    ctx->pc = 0x12DA34u;
    // 0x12da34: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12DA34u;
    SET_GPR_U32(ctx, 31, 0x12DA3Cu);
    ctx->pc = 0x12DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA34u;
    // 0x12da38: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12DA34u, 0x12DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA3Cu;
label_12da3c:
    // 0x12da3c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12da3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_12da40:
    // 0x12da40: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12DA40u;
    SET_GPR_U32(ctx, 31, 0x12DA48u);
    ctx->pc = 0x12DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA40u;
    // 0x12da44: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12DA40u, 0x12DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA48u;
label_12da48:
    // 0x12da48: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x12da48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_12da4c:
    // 0x12da4c: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12DA4Cu;
    SET_GPR_U32(ctx, 31, 0x12DA54u);
    ctx->pc = 0x12DA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA4Cu;
    // 0x12da50: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12DA4Cu, 0x12DA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA54u;
label_12da54:
    // 0x12da54: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x12da54u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12da58: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x12da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12da5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x12da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12da60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12da60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12da64: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x12da64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12da68: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12DA68u;
    {
        const bool branch_taken_0x12da68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12da68) {
            ctx->pc = 0x12DA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DA68u;
            // 0x12da6c: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DA70u;
            goto label_12da70;
        }
    }
    ctx->pc = 0x12DA70u;
label_12da70:
    // 0x12da70: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x12da70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_12da74:
    // 0x12da74: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x12da74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12da78: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x12da78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12da7c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x12da7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12da80: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x12da80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12da84: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x12da84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12da88: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x12da88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12da8c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x12da8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12da90: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x12da90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12da94: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x12da94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12da98: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x12da98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x12da9c: 0x3e00008  jr          $ra
    ctx->pc = 0x12DA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA9Cu;
        // 0x12daa0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DAA4u;
    // 0x12daa4: 0x0  nop
    ctx->pc = 0x12daa4u;
    // NOP
    ctx->pc = 0x12daa8u;
}

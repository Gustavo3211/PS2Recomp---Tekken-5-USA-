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

// Function: sub_00249478
// Address: 0x249478 - 0x2495a0
void sub_00249478_0x249478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249478_0x249478");
#endif

    switch (ctx->pc) {
        case 0x249498u: goto label_249498;
        case 0x2494e4u: goto label_2494e4;
        case 0x2494fcu: goto label_2494fc;
        case 0x249530u: goto label_249530;
        case 0x249570u: goto label_249570;
        default: break;
    }

    ctx->pc = 0x249478u;

    // 0x249478: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x249478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24947c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24947cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x249480: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x249484: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x249484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x249488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24948c: 0x9442719c  lhu         $v0, 0x719C($v0)
    ctx->pc = 0x24948cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 29084)));
    // 0x249490: 0x3e00008  jr          $ra
    ctx->pc = 0x249490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249498u;
label_249498:
    // 0x249498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24949c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x24949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2494a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2494a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2494a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2494a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2494a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2494a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2494ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2494acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2494b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2494b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2494b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2494b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2494b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2494b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2494bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2494bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2494c0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2494c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2494c4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2494c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2494c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2494c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2494cc: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x2494ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2494d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2494d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2494d4: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2494D4u;
    {
        const bool branch_taken_0x2494d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2494D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494D4u;
        // 0x2494d8: 0x24720010  addiu       $s2, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494d4) {
            ctx->pc = 0x2494F0u;
            goto label_2494f0;
        }
    }
    ctx->pc = 0x2494DCu;
    // 0x2494dc: 0xc0d6a1e  jal         func_35A878
    ctx->pc = 0x2494DCu;
    SET_GPR_U32(ctx, 31, 0x2494E4u);
    ctx->pc = 0x35A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A878u, 0x2494DCu, 0x2494E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2494E4u;
label_2494e4:
    // 0x2494e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2494e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2494e8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2494E8u;
    {
        const bool branch_taken_0x2494e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2494ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494E8u;
        // 0x2494ec: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494e8) {
            ctx->pc = 0x249584u;
            goto label_249584;
        }
    }
    ctx->pc = 0x2494F0u;
label_2494f0:
    // 0x2494f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2494f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2494f4: 0xc0d6a06  jal         func_35A818
    ctx->pc = 0x2494F4u;
    SET_GPR_U32(ctx, 31, 0x2494FCu);
    ctx->pc = 0x2494F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2494F4u;
    // 0x2494f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A818u, 0x2494F4u, 0x2494FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2494FCu;
label_2494fc:
    // 0x2494fc: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2494FCu;
    {
        const bool branch_taken_0x2494fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2494fc) {
            ctx->pc = 0x249500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2494FCu;
            // 0x249500: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249588u;
            goto label_249588;
        }
    }
    ctx->pc = 0x249504u;
    // 0x249504: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x249504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x249508: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x249508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x24950c: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x24950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x249510: 0x28830800  slti        $v1, $a0, 0x800
    ctx->pc = 0x249510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x249514: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x249514u;
    {
        const bool branch_taken_0x249514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249514u;
        // 0x249518: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249514) {
            ctx->pc = 0x249550u;
            goto label_249550;
        }
    }
    ctx->pc = 0x24951Cu;
    // 0x24951c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24951cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249524: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x249524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x249528: 0xc0d69ee  jal         func_35A7B8
    ctx->pc = 0x249528u;
    SET_GPR_U32(ctx, 31, 0x249530u);
    ctx->pc = 0x24952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249528u;
    // 0x24952c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A7B8u, 0x249528u, 0x249530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249530u;
label_249530:
    // 0x249530: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x249530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x249534: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x249534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x249538: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x249538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x24953c: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x24953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x249540: 0x2463f800  addiu       $v1, $v1, -0x800
    ctx->pc = 0x249540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
    // 0x249544: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x249544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x249548: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x249548u;
    {
        const bool branch_taken_0x249548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249548u;
        // 0x24954c: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249548) {
            ctx->pc = 0x249574u;
            goto label_249574;
        }
    }
    ctx->pc = 0x249550u;
label_249550:
    // 0x249550: 0x5c800009  bgtzl       $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x249550u;
    {
        const bool branch_taken_0x249550 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x249550) {
            ctx->pc = 0x249554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249550u;
            // 0x249554: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249578u;
            goto label_249578;
        }
    }
    ctx->pc = 0x249558u;
    // 0x249558: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x249558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x24955c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24955cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249560: 0x24a57480  addiu       $a1, $a1, 0x7480
    ctx->pc = 0x249560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29824));
    // 0x249564: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x249564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x249568: 0xc0d69ee  jal         func_35A7B8
    ctx->pc = 0x249568u;
    SET_GPR_U32(ctx, 31, 0x249570u);
    ctx->pc = 0x24956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249568u;
    // 0x24956c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A7B8u, 0x249568u, 0x249570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249570u;
label_249570:
    // 0x249570: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x249570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_249574:
    // 0x249574: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x249574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_249578:
    // 0x249578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x249578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24957c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x24957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x249580: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x249580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_249584:
    // 0x249584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249588:
    // 0x249588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24958c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24958cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249590: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x249590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x249594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249598: 0x3e00008  jr          $ra
    ctx->pc = 0x249598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249598u;
        // 0x24959c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2495A0u;
}

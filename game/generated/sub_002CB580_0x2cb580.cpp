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

// Function: sub_002CB580
// Address: 0x2cb580 - 0x2cb758
void sub_002CB580_0x2cb580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB580_0x2cb580");
#endif

    switch (ctx->pc) {
        case 0x2cb5f8u: goto label_2cb5f8;
        case 0x2cb61cu: goto label_2cb61c;
        case 0x2cb640u: goto label_2cb640;
        case 0x2cb654u: goto label_2cb654;
        case 0x2cb680u: goto label_2cb680;
        case 0x2cb690u: goto label_2cb690;
        case 0x2cb698u: goto label_2cb698;
        case 0x2cb6a4u: goto label_2cb6a4;
        case 0x2cb6b8u: goto label_2cb6b8;
        case 0x2cb6d0u: goto label_2cb6d0;
        case 0x2cb6d8u: goto label_2cb6d8;
        case 0x2cb6e4u: goto label_2cb6e4;
        case 0x2cb6f8u: goto label_2cb6f8;
        case 0x2cb704u: goto label_2cb704;
        case 0x2cb718u: goto label_2cb718;
        case 0x2cb720u: goto label_2cb720;
        default: break;
    }

    ctx->pc = 0x2cb580u;

    // 0x2cb580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb584: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cb584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cb588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb58c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb590: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cb590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cb594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cb594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cb598: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cb598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cb59c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb5a0: 0x82110023  lb          $s1, 0x23($s0)
    ctx->pc = 0x2cb5a0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x2cb5a4: 0x82070020  lb          $a3, 0x20($s0)
    ctx->pc = 0x2cb5a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2cb5a8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2cb5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2cb5ac: 0x5c3021  addu        $a2, $v0, $gp
    ctx->pc = 0x2cb5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2cb5b0: 0x8cc6a850  lw          $a2, -0x57B0($a2)
    ctx->pc = 0x2cb5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944848)));
    // 0x2cb5b4: 0x10e30056  beq         $a3, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x2CB5B4u;
    {
        const bool branch_taken_0x2cb5b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5B4u;
        // 0x2cb5b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5b4) {
            ctx->pc = 0x2CB710u;
            goto label_2cb710;
        }
    }
    ctx->pc = 0x2CB5BCu;
    // 0x2cb5bc: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x2cb5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cb5c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB5C0u;
    {
        const bool branch_taken_0x2cb5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5C0u;
        // 0x2cb5c4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5c0) {
            ctx->pc = 0x2CB5D8u;
            goto label_2cb5d8;
        }
    }
    ctx->pc = 0x2CB5C8u;
    // 0x2cb5c8: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB5C8u;
    {
        const bool branch_taken_0x2cb5c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5C8u;
        // 0x2cb5cc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5c8) {
            ctx->pc = 0x2CB5E8u;
            goto label_2cb5e8;
        }
    }
    ctx->pc = 0x2CB5D0u;
    // 0x2cb5d0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2CB5D0u;
    {
        const bool branch_taken_0x2cb5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5D0u;
        // 0x2cb5d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5d0) {
            ctx->pc = 0x2CB73Cu;
            goto label_2cb73c;
        }
    }
    ctx->pc = 0x2CB5D8u;
label_2cb5d8:
    // 0x2cb5d8: 0x10e20055  beq         $a3, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2CB5D8u;
    {
        const bool branch_taken_0x2cb5d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5D8u;
        // 0x2cb5dc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5d8) {
            ctx->pc = 0x2CB730u;
            goto label_2cb730;
        }
    }
    ctx->pc = 0x2CB5E0u;
    // 0x2cb5e0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2CB5E0u;
    {
        const bool branch_taken_0x2cb5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5E0u;
        // 0x2cb5e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb5e0) {
            ctx->pc = 0x2CB73Cu;
            goto label_2cb73c;
        }
    }
    ctx->pc = 0x2CB5E8u;
label_2cb5e8:
    // 0x2cb5e8: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x2cb5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb5ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cb5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5f0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x2cb5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2cb5f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2cb5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb5f8:
    // 0x2cb5f8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2cb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cb5fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2cb5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2cb600: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cb600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cb604: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x2cb604u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cb608: 0x0  nop
    ctx->pc = 0x2cb608u;
    // NOP
    // 0x2cb60c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CB60Cu;
    {
        const bool branch_taken_0x2cb60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB60Cu;
        // 0x2cb610: 0xac460040  sw          $a2, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb60c) {
            ctx->pc = 0x2CB5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb5f8;
        }
    }
    ctx->pc = 0x2CB614u;
    // 0x2cb614: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CB614u;
    SET_GPR_U32(ctx, 31, 0x2CB61Cu);
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CB614u, 0x2CB61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB61Cu;
label_2cb61c:
    // 0x2cb61c: 0x56220002  bnel        $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CB61Cu;
    {
        const bool branch_taken_0x2cb61c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cb61c) {
            ctx->pc = 0x2CB620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB61Cu;
            // 0x2cb620: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB628u;
            goto label_2cb628;
        }
    }
    ctx->pc = 0x2CB624u;
    // 0x2cb624: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cb624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cb628:
    // 0x2cb628: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x2cb628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cb62c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2cb62cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb630: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2cb630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2cb634: 0xae12003c  sw          $s2, 0x3C($s0)
    ctx->pc = 0x2cb634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 18));
    // 0x2cb638: 0xc086624  jal         func_219890
    ctx->pc = 0x2CB638u;
    SET_GPR_U32(ctx, 31, 0x2CB640u);
    ctx->pc = 0x2CB63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB638u;
    // 0x2cb63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x2CB638u, 0x2CB640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB640u;
label_2cb640:
    // 0x2cb640: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB640u;
    {
        const bool branch_taken_0x2cb640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb640) {
            ctx->pc = 0x2CB644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB640u;
            // 0x2cb644: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB660u;
            goto label_2cb660;
        }
    }
    ctx->pc = 0x2CB648u;
    // 0x2cb648: 0xae120040  sw          $s2, 0x40($s0)
    ctx->pc = 0x2cb648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 18));
    // 0x2cb64c: 0xc086644  jal         func_219910
    ctx->pc = 0x2CB64Cu;
    SET_GPR_U32(ctx, 31, 0x2CB654u);
    ctx->pc = 0x2CB650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB64Cu;
    // 0x2cb650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x2CB64Cu, 0x2CB654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB654u;
label_2cb654:
    // 0x2cb654: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB654u;
    {
        const bool branch_taken_0x2cb654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB654u;
        // 0x2cb658: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb654) {
            ctx->pc = 0x2CB664u;
            goto label_2cb664;
        }
    }
    ctx->pc = 0x2CB65Cu;
    // 0x2cb65c: 0x0  nop
    ctx->pc = 0x2cb65cu;
    // NOP
label_2cb660:
    // 0x2cb660: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2cb660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2cb664:
    // 0x2cb664: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cb664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cb668: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2cb668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2cb66c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2cb66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2cb670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb674: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2cb674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2cb678: 0xc086624  jal         func_219890
    ctx->pc = 0x2CB678u;
    SET_GPR_U32(ctx, 31, 0x2CB680u);
    ctx->pc = 0x2CB67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB678u;
    // 0x2cb67c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x2CB678u, 0x2CB680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB680u;
label_2cb680:
    // 0x2cb680: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CB680u;
    {
        const bool branch_taken_0x2cb680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb680) {
            ctx->pc = 0x2CB6B0u;
            goto label_2cb6b0;
        }
    }
    ctx->pc = 0x2CB688u;
    // 0x2cb688: 0xc086644  jal         func_219910
    ctx->pc = 0x2CB688u;
    SET_GPR_U32(ctx, 31, 0x2CB690u);
    ctx->pc = 0x2CB68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB688u;
    // 0x2cb68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x2CB688u, 0x2CB690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB690u;
label_2cb690:
    // 0x2cb690: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2CB690u;
    SET_GPR_U32(ctx, 31, 0x2CB698u);
    ctx->pc = 0x2CB694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB690u;
    // 0x2cb694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2CB690u, 0x2CB698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB698u;
label_2cb698:
    // 0x2cb698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb69c: 0xc086644  jal         func_219910
    ctx->pc = 0x2CB69Cu;
    SET_GPR_U32(ctx, 31, 0x2CB6A4u);
    ctx->pc = 0x2CB6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB69Cu;
    // 0x2cb6a0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x2CB69Cu, 0x2CB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6A4u;
label_2cb6a4:
    // 0x2cb6a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2CB6A4u;
    {
        const bool branch_taken_0x2cb6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6A4u;
        // 0x2cb6a8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6a4) {
            ctx->pc = 0x2CB6FCu;
            goto label_2cb6fc;
        }
    }
    ctx->pc = 0x2CB6ACu;
    // 0x2cb6ac: 0x0  nop
    ctx->pc = 0x2cb6acu;
    // NOP
label_2cb6b0:
    // 0x2cb6b0: 0xc092e94  jal         func_24BA50
    ctx->pc = 0x2CB6B0u;
    SET_GPR_U32(ctx, 31, 0x2CB6B8u);
    ctx->pc = 0x2CB6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6B0u;
    // 0x2cb6b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA50u, 0x2CB6B0u, 0x2CB6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6B8u;
label_2cb6b8:
    // 0x2cb6b8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2cb6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cb6bc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2cb6bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb6c0: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CB6C0u;
    {
        const bool branch_taken_0x2cb6c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cb6c0) {
            ctx->pc = 0x2CB6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB6C0u;
            // 0x2cb6c4: 0xae040008  sw          $a0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB6F0u;
            goto label_2cb6f0;
        }
    }
    ctx->pc = 0x2CB6C8u;
    // 0x2cb6c8: 0xc086644  jal         func_219910
    ctx->pc = 0x2CB6C8u;
    SET_GPR_U32(ctx, 31, 0x2CB6D0u);
    ctx->pc = 0x2CB6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6C8u;
    // 0x2cb6cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x2CB6C8u, 0x2CB6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6D0u;
label_2cb6d0:
    // 0x2cb6d0: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2CB6D0u;
    SET_GPR_U32(ctx, 31, 0x2CB6D8u);
    ctx->pc = 0x2CB6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6D0u;
    // 0x2cb6d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2CB6D0u, 0x2CB6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6D8u;
label_2cb6d8:
    // 0x2cb6d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6dc: 0xc086644  jal         func_219910
    ctx->pc = 0x2CB6DCu;
    SET_GPR_U32(ctx, 31, 0x2CB6E4u);
    ctx->pc = 0x2CB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6DCu;
    // 0x2cb6e0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x2CB6DCu, 0x2CB6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6E4u;
label_2cb6e4:
    // 0x2cb6e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB6E4u;
    {
        const bool branch_taken_0x2cb6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6E4u;
        // 0x2cb6e8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6e4) {
            ctx->pc = 0x2CB6FCu;
            goto label_2cb6fc;
        }
    }
    ctx->pc = 0x2CB6ECu;
    // 0x2cb6ec: 0x0  nop
    ctx->pc = 0x2cb6ecu;
    // NOP
label_2cb6f0:
    // 0x2cb6f0: 0xc086396  jal         func_218E58
    ctx->pc = 0x2CB6F0u;
    SET_GPR_U32(ctx, 31, 0x2CB6F8u);
    ctx->pc = 0x2CB6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6F0u;
    // 0x2cb6f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x2CB6F0u, 0x2CB6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6F8u;
label_2cb6f8:
    // 0x2cb6f8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2cb6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2cb6fc:
    // 0x2cb6fc: 0xc0b2d4c  jal         func_2CB530
    ctx->pc = 0x2CB6FCu;
    SET_GPR_U32(ctx, 31, 0x2CB704u);
    ctx->pc = 0x2CB700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6FCu;
    // 0x2cb700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB530u, 0x2CB6FCu, 0x2CB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB704u;
label_2cb704:
    // 0x2cb704: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CB704u;
    {
        const bool branch_taken_0x2cb704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB704u;
        // 0x2cb708: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb704) {
            ctx->pc = 0x2CB738u;
            goto label_2cb738;
        }
    }
    ctx->pc = 0x2CB70Cu;
    // 0x2cb70c: 0x0  nop
    ctx->pc = 0x2cb70cu;
    // NOP
label_2cb710:
    // 0x2cb710: 0xc0b2d1c  jal         func_2CB470
    ctx->pc = 0x2CB710u;
    SET_GPR_U32(ctx, 31, 0x2CB718u);
    ctx->pc = 0x2CB470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB470u, 0x2CB710u, 0x2CB718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB718u;
label_2cb718:
    // 0x2cb718: 0xc0b2d4c  jal         func_2CB530
    ctx->pc = 0x2CB718u;
    SET_GPR_U32(ctx, 31, 0x2CB720u);
    ctx->pc = 0x2CB71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB718u;
    // 0x2cb71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB530u, 0x2CB718u, 0x2CB720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB720u;
label_2cb720:
    // 0x2cb720: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB720u;
    {
        const bool branch_taken_0x2cb720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB720u;
        // 0x2cb724: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb720) {
            ctx->pc = 0x2CB734u;
            goto label_2cb734;
        }
    }
    ctx->pc = 0x2CB728u;
    // 0x2cb728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CB728u;
    {
        const bool branch_taken_0x2cb728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB728u;
        // 0x2cb72c: 0xa2020021  sb          $v0, 0x21($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb728) {
            ctx->pc = 0x2CB734u;
            goto label_2cb734;
        }
    }
    ctx->pc = 0x2CB730u;
label_2cb730:
    // 0x2cb730: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2cb730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb734:
    // 0x2cb734: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cb734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cb738:
    // 0x2cb738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb73c:
    // 0x2cb73c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cb73cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb740: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cb740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb744: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cb744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb748: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb74c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB74Cu;
        // 0x2cb750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB754u;
    // 0x2cb754: 0x0  nop
    ctx->pc = 0x2cb754u;
    // NOP
    ctx->pc = 0x2cb758u;
}

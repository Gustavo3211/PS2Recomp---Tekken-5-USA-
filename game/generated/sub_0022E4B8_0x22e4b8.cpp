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

// Function: sub_0022E4B8
// Address: 0x22e4b8 - 0x22e9e0
void sub_0022E4B8_0x22e4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E4B8_0x22e4b8");
#endif

    switch (ctx->pc) {
        case 0x22e4f4u: goto label_22e4f4;
        case 0x22e50cu: goto label_22e50c;
        case 0x22e548u: goto label_22e548;
        case 0x22e5e0u: goto label_22e5e0;
        case 0x22e5fcu: goto label_22e5fc;
        case 0x22e60cu: goto label_22e60c;
        case 0x22e648u: goto label_22e648;
        case 0x22e674u: goto label_22e674;
        case 0x22e6a4u: goto label_22e6a4;
        case 0x22e6c4u: goto label_22e6c4;
        case 0x22e70cu: goto label_22e70c;
        case 0x22e72cu: goto label_22e72c;
        case 0x22e73cu: goto label_22e73c;
        case 0x22e758u: goto label_22e758;
        case 0x22e778u: goto label_22e778;
        case 0x22e79cu: goto label_22e79c;
        case 0x22e7bcu: goto label_22e7bc;
        case 0x22e7dcu: goto label_22e7dc;
        case 0x22e7fcu: goto label_22e7fc;
        case 0x22e820u: goto label_22e820;
        case 0x22e850u: goto label_22e850;
        case 0x22e880u: goto label_22e880;
        case 0x22e890u: goto label_22e890;
        case 0x22e8b0u: goto label_22e8b0;
        case 0x22e914u: goto label_22e914;
        case 0x22e97cu: goto label_22e97c;
        default: break;
    }

    ctx->pc = 0x22e4b8u;

    // 0x22e4b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22e4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22e4bc: 0xaf80a530  sw          $zero, -0x5AD0($gp)
    ctx->pc = 0x22e4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944048), GPR_U32(ctx, 0));
    // 0x22e4c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22e4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22e4c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22e4c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22e4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22e4cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22e4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22e4d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22e4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22e4d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x22e4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x22e4d8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x22e4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x22e4dc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x22e4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x22e4e0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x22e4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x22e4e4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x22e4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x22e4e8: 0xaf80a534  sw          $zero, -0x5ACC($gp)
    ctx->pc = 0x22e4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944052), GPR_U32(ctx, 0));
    // 0x22e4ec: 0xc08b906  jal         func_22E418
    ctx->pc = 0x22E4ECu;
    SET_GPR_U32(ctx, 31, 0x22E4F4u);
    ctx->pc = 0x22E418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E418u, 0x22E4ECu, 0x22E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4F4u;
label_22e4f4:
    // 0x22e4f4: 0x8f82a534  lw          $v0, -0x5ACC($gp)
    ctx->pc = 0x22e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944052)));
    // 0x22e4f8: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x22e4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x22e4fc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E4FCu;
    {
        const bool branch_taken_0x22e4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e4fc) {
            ctx->pc = 0x22E500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E4FCu;
            // 0x22e500: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E524u;
            goto label_22e524;
        }
    }
    ctx->pc = 0x22E504u;
    // 0x22e504: 0xc084704  jal         func_211C10
    ctx->pc = 0x22E504u;
    SET_GPR_U32(ctx, 31, 0x22E50Cu);
    ctx->pc = 0x211C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211C10u, 0x22E504u, 0x22E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E50Cu;
label_22e50c:
    // 0x22e50c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E50Cu;
    {
        const bool branch_taken_0x22e50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E50Cu;
        // 0x22e510: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e50c) {
            ctx->pc = 0x22E524u;
            goto label_22e524;
        }
    }
    ctx->pc = 0x22E514u;
    // 0x22e514: 0x8f82a534  lw          $v0, -0x5ACC($gp)
    ctx->pc = 0x22e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944052)));
    // 0x22e518: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x22e518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x22e51c: 0xaf82a534  sw          $v0, -0x5ACC($gp)
    ctx->pc = 0x22e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944052), GPR_U32(ctx, 2));
    // 0x22e520: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22e520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_22e524:
    // 0x22e524: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x22e524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x22e528: 0x2457dc78  addiu       $s7, $v0, -0x2388
    ctx->pc = 0x22e528u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958200));
    // 0x22e52c: 0x24769338  addiu       $s6, $v1, -0x6CC8
    ctx->pc = 0x22e52cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939448));
    // 0x22e530: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22e530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e534: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x22e534u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x22e538: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x22e538u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e53c: 0x2793a530  addiu       $s3, $gp, -0x5AD0
    ctx->pc = 0x22e53cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944048));
    // 0x22e540: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x22e540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x22e544: 0x0  nop
    ctx->pc = 0x22e544u;
    // NOP
label_22e548:
    // 0x22e548: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x22e548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x22e54c: 0x24a588d0  addiu       $a1, $a1, -0x7730
    ctx->pc = 0x22e54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
    // 0x22e550: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x22e550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x22e554: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x22e554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22e558: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22e558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22e55c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x22e55cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e564: 0x52a023  subu        $s4, $v0, $s2
    ctx->pc = 0x22e564u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22e568: 0x86020040  lh          $v0, 0x40($s0)
    ctx->pc = 0x22e568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x22e56c: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E56Cu;
    {
        const bool branch_taken_0x22e56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E56Cu;
        // 0x22e570: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e56c) {
            ctx->pc = 0x22E590u;
            goto label_22e590;
        }
    }
    ctx->pc = 0x22E574u;
    // 0x22e574: 0x27c48858  addiu       $a0, $fp, -0x77A8
    ctx->pc = 0x22e574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936664));
    // 0x22e578: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22e578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22e57c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22e580: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E580u;
    {
        const bool branch_taken_0x22e580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E580u;
        // 0x22e584: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e580) {
            ctx->pc = 0x22E594u;
            goto label_22e594;
        }
    }
    ctx->pc = 0x22E588u;
    // 0x22e588: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x22e588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x22e58c: 0x2851001b  slti        $s1, $v0, 0x1B
    ctx->pc = 0x22e58cu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
label_22e590:
    // 0x22e590: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x22e590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_22e594:
    // 0x22e594: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x22e594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x22e598: 0x572821  addu        $a1, $v0, $s7
    ctx->pc = 0x22e598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x22e59c: 0x2463dc68  addiu       $v1, $v1, -0x2398
    ctx->pc = 0x22e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958184));
    // 0x22e5a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x22e5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22e5a4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x22e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22e5a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x22e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x22e5ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22e5b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22e5b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x22e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22e5b8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E5B8u;
    {
        const bool branch_taken_0x22e5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e5b8) {
            ctx->pc = 0x22E5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E5B8u;
            // 0x22e5bc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E5D4u;
            goto label_22e5d4;
        }
    }
    ctx->pc = 0x22E5C0u;
    // 0x22e5c0: 0xac950004  sw          $s5, 0x4($a0)
    ctx->pc = 0x22e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 21));
    // 0x22e5c4: 0xac950000  sw          $s5, 0x0($a0)
    ctx->pc = 0x22e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
    // 0x22e5c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x22e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22e5cc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22E5CCu;
    {
        const bool branch_taken_0x22e5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e5cc) {
            ctx->pc = 0x22E5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E5CCu;
            // 0x22e5d0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E5D4u;
            goto label_22e5d4;
        }
    }
    ctx->pc = 0x22E5D4u;
label_22e5d4:
    // 0x22e5d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e5d8: 0xc0898ee  jal         func_2263B8
    ctx->pc = 0x22E5D8u;
    SET_GPR_U32(ctx, 31, 0x22E5E0u);
    ctx->pc = 0x22E5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E5D8u;
    // 0x22e5dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2263B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2263B8u, 0x22E5D8u, 0x22E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5E0u;
label_22e5e0:
    // 0x22e5e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E5E0u;
    {
        const bool branch_taken_0x22e5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5E0u;
        // 0x22e5e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5e0) {
            ctx->pc = 0x22E5F4u;
            goto label_22e5f4;
        }
    }
    ctx->pc = 0x22E5E8u;
    // 0x22e5e8: 0x920201bb  lbu         $v0, 0x1BB($s0)
    ctx->pc = 0x22e5e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 443)));
    // 0x22e5ec: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x22E5ECu;
    {
        const bool branch_taken_0x22e5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e5ec) {
            ctx->pc = 0x22E5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E5ECu;
            // 0x22e5f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E690u;
            goto label_22e690;
        }
    }
    ctx->pc = 0x22E5F4u;
label_22e5f4:
    // 0x22e5f4: 0xc0898ee  jal         func_2263B8
    ctx->pc = 0x22E5F4u;
    SET_GPR_U32(ctx, 31, 0x22E5FCu);
    ctx->pc = 0x22E5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E5F4u;
    // 0x22e5f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2263B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2263B8u, 0x22E5F4u, 0x22E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5FCu;
label_22e5fc:
    // 0x22e5fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22E5FCu;
    {
        const bool branch_taken_0x22e5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5FCu;
        // 0x22e600: 0x2690006d  addiu       $s0, $s4, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5fc) {
            ctx->pc = 0x22E63Cu;
            goto label_22e63c;
        }
    }
    ctx->pc = 0x22E604u;
    // 0x22e604: 0xc08b8c2  jal         func_22E308
    ctx->pc = 0x22E604u;
    SET_GPR_U32(ctx, 31, 0x22E60Cu);
    ctx->pc = 0x22E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E604u;
    // 0x22e608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E308u, 0x22E604u, 0x22E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E60Cu;
label_22e60c:
    // 0x22e60c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x22e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22e610: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e614: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22e618: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x22e618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x22e61c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22e620: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E620u;
    {
        const bool branch_taken_0x22e620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E620u;
        // 0x22e624: 0x2690006d  addiu       $s0, $s4, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e620) {
            ctx->pc = 0x22E63Cu;
            goto label_22e63c;
        }
    }
    ctx->pc = 0x22E628u;
    // 0x22e628: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x22e628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22e62c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x22e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22e630: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x22e630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x22e634: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22e634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22e638: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x22e638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_22e63c:
    // 0x22e63c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22e63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e640: 0xc089622  jal         func_225888
    ctx->pc = 0x22E640u;
    SET_GPR_U32(ctx, 31, 0x22E648u);
    ctx->pc = 0x22E644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E640u;
    // 0x22e644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x22E640u, 0x22E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E648u;
label_22e648:
    // 0x22e648: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E648u;
    {
        const bool branch_taken_0x22e648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E648u;
        // 0x22e64c: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e648) {
            ctx->pc = 0x22E664u;
            goto label_22e664;
        }
    }
    ctx->pc = 0x22E650u;
    // 0x22e650: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22e650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22e654: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e658: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x22e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x22e65c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22e660: 0x3882b  sltu        $s1, $zero, $v1
    ctx->pc = 0x22e660u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22e664:
    // 0x22e664: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x22E664u;
    {
        const bool branch_taken_0x22e664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e664) {
            ctx->pc = 0x22E668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E664u;
            // 0x22e668: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E690u;
            goto label_22e690;
        }
    }
    ctx->pc = 0x22E66Cu;
    // 0x22e66c: 0xc09371c  jal         func_24DC70
    ctx->pc = 0x22E66Cu;
    SET_GPR_U32(ctx, 31, 0x22E674u);
    ctx->pc = 0x24DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DC70u, 0x22E66Cu, 0x22E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E674u;
label_22e674:
    // 0x22e674: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E674u;
    {
        const bool branch_taken_0x22e674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E674u;
        // 0x22e678: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e674) {
            ctx->pc = 0x22E68Cu;
            goto label_22e68c;
        }
    }
    ctx->pc = 0x22E67Cu;
    // 0x22e67c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x22e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22e680: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x22e680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x22e684: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22e684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22e688: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x22e688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_22e68c:
    // 0x22e68c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22e68cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22e690:
    // 0x22e690: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x22e690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22e694: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x22E694u;
    {
        const bool branch_taken_0x22e694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E694u;
        // 0x22e698: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e694) {
            ctx->pc = 0x22E548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e548;
        }
    }
    ctx->pc = 0x22E69Cu;
    // 0x22e69c: 0xc07c4c2  jal         func_1F1308
    ctx->pc = 0x22E69Cu;
    SET_GPR_U32(ctx, 31, 0x22E6A4u);
    ctx->pc = 0x1F1308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1308u, 0x22E69Cu, 0x22E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E6A4u;
label_22e6a4:
    // 0x22e6a4: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x22E6A4u;
    {
        const bool branch_taken_0x22e6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6A4u;
        // 0x22e6a8: 0x27d18858  addiu       $s1, $fp, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6a4) {
            ctx->pc = 0x22E8D4u;
            goto label_22e8d4;
        }
    }
    ctx->pc = 0x22E6ACu;
    // 0x22e6ac: 0x8f82a534  lw          $v0, -0x5ACC($gp)
    ctx->pc = 0x22e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944052)));
    // 0x22e6b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22e6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22e6b4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x22E6B4u;
    {
        const bool branch_taken_0x22e6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e6b4) {
            ctx->pc = 0x22E6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E6B4u;
            // 0x22e6b8: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E6F8u;
            goto label_22e6f8;
        }
    }
    ctx->pc = 0x22E6BCu;
    // 0x22e6bc: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x22E6BCu;
    SET_GPR_U32(ctx, 31, 0x22E6C4u);
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x22E6BCu, 0x22E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E6C4u;
label_22e6c4:
    // 0x22e6c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22E6C4u;
    {
        const bool branch_taken_0x22e6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6C4u;
        // 0x22e6c8: 0x3c030016  lui         $v1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6c4) {
            ctx->pc = 0x22E6F4u;
            goto label_22e6f4;
        }
    }
    ctx->pc = 0x22E6CCu;
    // 0x22e6cc: 0x24639338  addiu       $v1, $v1, -0x6CC8
    ctx->pc = 0x22e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939448));
    // 0x22e6d0: 0x8c620370  lw          $v0, 0x370($v1)
    ctx->pc = 0x22e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x22e6d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E6D4u;
    {
        const bool branch_taken_0x22e6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6D4u;
        // 0x22e6d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6d4) {
            ctx->pc = 0x22E6E4u;
            goto label_22e6e4;
        }
    }
    ctx->pc = 0x22E6DCu;
    // 0x22e6dc: 0x8c62037c  lw          $v0, 0x37C($v1)
    ctx->pc = 0x22e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 892)));
    // 0x22e6e0: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x22e6e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22e6e4:
    // 0x22e6e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E6E4u;
    {
        const bool branch_taken_0x22e6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6E4u;
        // 0x22e6e8: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6e4) {
            ctx->pc = 0x22E6F4u;
            goto label_22e6f4;
        }
    }
    ctx->pc = 0x22E6ECu;
    // 0x22e6ec: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x22e6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x22e6f0: 0xaf82a530  sw          $v0, -0x5AD0($gp)
    ctx->pc = 0x22e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944048), GPR_U32(ctx, 2));
label_22e6f4:
    // 0x22e6f4: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_22e6f8:
    // 0x22e6f8: 0x8c439714  lw          $v1, -0x68EC($v0)
    ctx->pc = 0x22e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940436)));
    // 0x22e6fc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22E6FCu;
    {
        const bool branch_taken_0x22e6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6FCu;
        // 0x22e700: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6fc) {
            ctx->pc = 0x22E750u;
            goto label_22e750;
        }
    }
    ctx->pc = 0x22E704u;
    // 0x22e704: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x22E704u;
    SET_GPR_U32(ctx, 31, 0x22E70Cu);
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x22E704u, 0x22E70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E70Cu;
label_22e70c:
    // 0x22e70c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22E70Cu;
    {
        const bool branch_taken_0x22e70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E70Cu;
        // 0x22e710: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e70c) {
            ctx->pc = 0x22E750u;
            goto label_22e750;
        }
    }
    ctx->pc = 0x22E714u;
    // 0x22e714: 0x8f82a534  lw          $v0, -0x5ACC($gp)
    ctx->pc = 0x22e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944052)));
    // 0x22e718: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x22e718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x22e71c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22E71Cu;
    {
        const bool branch_taken_0x22e71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e71c) {
            ctx->pc = 0x22E750u;
            goto label_22e750;
        }
    }
    ctx->pc = 0x22E724u;
    // 0x22e724: 0xc0899f8  jal         func_2267E0
    ctx->pc = 0x22E724u;
    SET_GPR_U32(ctx, 31, 0x22E72Cu);
    ctx->pc = 0x2267E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267E0u, 0x22E724u, 0x22E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E72Cu;
label_22e72c:
    // 0x22e72c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E72Cu;
    {
        const bool branch_taken_0x22e72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E72Cu;
        // 0x22e730: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e72c) {
            ctx->pc = 0x22E750u;
            goto label_22e750;
        }
    }
    ctx->pc = 0x22E734u;
    // 0x22e734: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x22E734u;
    SET_GPR_U32(ctx, 31, 0x22E73Cu);
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x22E734u, 0x22E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E73Cu;
label_22e73c:
    // 0x22e73c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E73Cu;
    {
        const bool branch_taken_0x22e73c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E73Cu;
        // 0x22e740: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e73c) {
            ctx->pc = 0x22E750u;
            goto label_22e750;
        }
    }
    ctx->pc = 0x22E744u;
    // 0x22e744: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x22e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x22e748: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x22e748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x22e74c: 0xaf82a530  sw          $v0, -0x5AD0($gp)
    ctx->pc = 0x22e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944048), GPR_U32(ctx, 2));
label_22e750:
    // 0x22e750: 0xc089622  jal         func_225888
    ctx->pc = 0x22E750u;
    SET_GPR_U32(ctx, 31, 0x22E758u);
    ctx->pc = 0x22E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E750u;
    // 0x22e754: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x22E750u, 0x22E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E758u;
label_22e758:
    // 0x22e758: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E758u;
    {
        const bool branch_taken_0x22e758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E758u;
        // 0x22e75c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e758) {
            ctx->pc = 0x22E768u;
            goto label_22e768;
        }
    }
    ctx->pc = 0x22E760u;
    // 0x22e760: 0x8c4394bc  lw          $v1, -0x6B44($v0)
    ctx->pc = 0x22e760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939836)));
    // 0x22e764: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x22e764u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22e768:
    // 0x22e768: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x22E768u;
    {
        const bool branch_taken_0x22e768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E768u;
        // 0x22e76c: 0x2404006d  addiu       $a0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e768) {
            ctx->pc = 0x22E794u;
            goto label_22e794;
        }
    }
    ctx->pc = 0x22E770u;
    // 0x22e770: 0xc09371c  jal         func_24DC70
    ctx->pc = 0x22E770u;
    SET_GPR_U32(ctx, 31, 0x22E778u);
    ctx->pc = 0x24DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DC70u, 0x22E770u, 0x22E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E778u;
label_22e778:
    // 0x22e778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E778u;
    {
        const bool branch_taken_0x22e778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E778u;
        // 0x22e77c: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e778) {
            ctx->pc = 0x22E790u;
            goto label_22e790;
        }
    }
    ctx->pc = 0x22E780u;
    // 0x22e780: 0x2784a530  addiu       $a0, $gp, -0x5AD0
    ctx->pc = 0x22e780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944048));
    // 0x22e784: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e788: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22e788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22e78c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_22e790:
    // 0x22e790: 0x2404006d  addiu       $a0, $zero, 0x6D
    ctx->pc = 0x22e790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_22e794:
    // 0x22e794: 0xc089622  jal         func_225888
    ctx->pc = 0x22E794u;
    SET_GPR_U32(ctx, 31, 0x22E79Cu);
    ctx->pc = 0x22E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E794u;
    // 0x22e798: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x22E794u, 0x22E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E79Cu;
label_22e79c:
    // 0x22e79c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E79Cu;
    {
        const bool branch_taken_0x22e79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E79Cu;
        // 0x22e7a0: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e79c) {
            ctx->pc = 0x22E7ACu;
            goto label_22e7ac;
        }
    }
    ctx->pc = 0x22E7A4u;
    // 0x22e7a4: 0x8c439858  lw          $v1, -0x67A8($v0)
    ctx->pc = 0x22e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940760)));
    // 0x22e7a8: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x22e7a8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22e7ac:
    // 0x22e7ac: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22E7ACu;
    {
        const bool branch_taken_0x22e7ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7ACu;
        // 0x22e7b0: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7ac) {
            ctx->pc = 0x22E814u;
            goto label_22e814;
        }
    }
    ctx->pc = 0x22E7B4u;
    // 0x22e7b4: 0xc089622  jal         func_225888
    ctx->pc = 0x22E7B4u;
    SET_GPR_U32(ctx, 31, 0x22E7BCu);
    ctx->pc = 0x22E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7B4u;
    // 0x22e7b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x22E7B4u, 0x22E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7BCu;
label_22e7bc:
    // 0x22e7bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E7BCu;
    {
        const bool branch_taken_0x22e7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7BCu;
        // 0x22e7c0: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7bc) {
            ctx->pc = 0x22E7CCu;
            goto label_22e7cc;
        }
    }
    ctx->pc = 0x22E7C4u;
    // 0x22e7c4: 0x8c43993c  lw          $v1, -0x66C4($v0)
    ctx->pc = 0x22e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940988)));
    // 0x22e7c8: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x22e7c8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22e7cc:
    // 0x22e7cc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22E7CCu;
    {
        const bool branch_taken_0x22e7cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7CCu;
        // 0x22e7d0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7cc) {
            ctx->pc = 0x22E814u;
            goto label_22e814;
        }
    }
    ctx->pc = 0x22E7D4u;
    // 0x22e7d4: 0xc089622  jal         func_225888
    ctx->pc = 0x22E7D4u;
    SET_GPR_U32(ctx, 31, 0x22E7DCu);
    ctx->pc = 0x22E7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7D4u;
    // 0x22e7d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x22E7D4u, 0x22E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7DCu;
label_22e7dc:
    // 0x22e7dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E7DCu;
    {
        const bool branch_taken_0x22e7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7DCu;
        // 0x22e7e0: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7dc) {
            ctx->pc = 0x22E7ECu;
            goto label_22e7ec;
        }
    }
    ctx->pc = 0x22E7E4u;
    // 0x22e7e4: 0x8c4394bc  lw          $v1, -0x6B44($v0)
    ctx->pc = 0x22e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939836)));
    // 0x22e7e8: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x22e7e8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22e7ec:
    // 0x22e7ec: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x22E7ECu;
    {
        const bool branch_taken_0x22e7ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7ECu;
        // 0x22e7f0: 0x24040057  addiu       $a0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7ec) {
            ctx->pc = 0x22E818u;
            goto label_22e818;
        }
    }
    ctx->pc = 0x22E7F4u;
    // 0x22e7f4: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x22E7F4u;
    SET_GPR_U32(ctx, 31, 0x22E7FCu);
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x22E7F4u, 0x22E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7FCu;
label_22e7fc:
    // 0x22e7fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E7FCu;
    {
        const bool branch_taken_0x22e7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7FCu;
        // 0x22e800: 0x24040057  addiu       $a0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7fc) {
            ctx->pc = 0x22E818u;
            goto label_22e818;
        }
    }
    ctx->pc = 0x22E804u;
    // 0x22e804: 0x2783a530  addiu       $v1, $gp, -0x5AD0
    ctx->pc = 0x22e804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944048));
    // 0x22e808: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22e808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e80c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22e80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22e810: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22e810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22e814:
    // 0x22e814: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x22e814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_22e818:
    // 0x22e818: 0xc089622  jal         func_225888
    ctx->pc = 0x22E818u;
    SET_GPR_U32(ctx, 31, 0x22E820u);
    ctx->pc = 0x22E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E818u;
    // 0x22e81c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x22E818u, 0x22E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E820u;
label_22e820:
    // 0x22e820: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E820u;
    {
        const bool branch_taken_0x22e820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E820u;
        // 0x22e824: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e820) {
            ctx->pc = 0x22E830u;
            goto label_22e830;
        }
    }
    ctx->pc = 0x22E828u;
    // 0x22e828: 0x8c439750  lw          $v1, -0x68B0($v0)
    ctx->pc = 0x22e828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940496)));
    // 0x22e82c: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x22e82cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22e830:
    // 0x22e830: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E830u;
    {
        const bool branch_taken_0x22e830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E830u;
        // 0x22e834: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e830) {
            ctx->pc = 0x22E848u;
            goto label_22e848;
        }
    }
    ctx->pc = 0x22E838u;
    // 0x22e838: 0x2783a530  addiu       $v1, $gp, -0x5AD0
    ctx->pc = 0x22e838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944048));
    // 0x22e83c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e840: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x22e840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x22e844: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22e844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22e848:
    // 0x22e848: 0xc089622  jal         func_225888
    ctx->pc = 0x22E848u;
    SET_GPR_U32(ctx, 31, 0x22E850u);
    ctx->pc = 0x22E84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E848u;
    // 0x22e84c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x22E848u, 0x22E850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E850u;
label_22e850:
    // 0x22e850: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E850u;
    {
        const bool branch_taken_0x22e850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E850u;
        // 0x22e854: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e850) {
            ctx->pc = 0x22E860u;
            goto label_22e860;
        }
    }
    ctx->pc = 0x22E858u;
    // 0x22e858: 0x8c43975c  lw          $v1, -0x68A4($v0)
    ctx->pc = 0x22e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940508)));
    // 0x22e85c: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x22e85cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22e860:
    // 0x22e860: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E860u;
    {
        const bool branch_taken_0x22e860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E860u;
        // 0x22e864: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e860) {
            ctx->pc = 0x22E878u;
            goto label_22e878;
        }
    }
    ctx->pc = 0x22E868u;
    // 0x22e868: 0x2784a530  addiu       $a0, $gp, -0x5AD0
    ctx->pc = 0x22e868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944048));
    // 0x22e86c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e870: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22e870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22e874: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22e874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_22e878:
    // 0x22e878: 0xc089622  jal         func_225888
    ctx->pc = 0x22E878u;
    SET_GPR_U32(ctx, 31, 0x22E880u);
    ctx->pc = 0x22E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E878u;
    // 0x22e87c: 0x24040057  addiu       $a0, $zero, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x22E878u, 0x22E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E880u;
label_22e880:
    // 0x22e880: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E880u;
    {
        const bool branch_taken_0x22e880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E880u;
        // 0x22e884: 0x24040059  addiu       $a0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e880) {
            ctx->pc = 0x22E8A8u;
            goto label_22e8a8;
        }
    }
    ctx->pc = 0x22E888u;
    // 0x22e888: 0xc08b872  jal         func_22E1C8
    ctx->pc = 0x22E888u;
    SET_GPR_U32(ctx, 31, 0x22E890u);
    ctx->pc = 0x22E88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E888u;
    // 0x22e88c: 0x24040057  addiu       $a0, $zero, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E1C8u, 0x22E888u, 0x22E890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E890u;
label_22e890:
    // 0x22e890: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E890u;
    {
        const bool branch_taken_0x22e890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E890u;
        // 0x22e894: 0x24040059  addiu       $a0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e890) {
            ctx->pc = 0x22E8A8u;
            goto label_22e8a8;
        }
    }
    ctx->pc = 0x22E898u;
    // 0x22e898: 0x2783a530  addiu       $v1, $gp, -0x5AD0
    ctx->pc = 0x22e898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944048));
    // 0x22e89c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e8a0: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x22e8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x22e8a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22e8a8:
    // 0x22e8a8: 0xc089622  jal         func_225888
    ctx->pc = 0x22E8A8u;
    SET_GPR_U32(ctx, 31, 0x22E8B0u);
    ctx->pc = 0x22E8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8A8u;
    // 0x22e8ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x22E8A8u, 0x22E8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8B0u;
label_22e8b0:
    // 0x22e8b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E8B0u;
    {
        const bool branch_taken_0x22e8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8B0u;
        // 0x22e8b4: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8b0) {
            ctx->pc = 0x22E8C0u;
            goto label_22e8c0;
        }
    }
    ctx->pc = 0x22E8B8u;
    // 0x22e8b8: 0x8c439768  lw          $v1, -0x6898($v0)
    ctx->pc = 0x22e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940520)));
    // 0x22e8bc: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x22e8bcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22e8c0:
    // 0x22e8c0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E8C0u;
    {
        const bool branch_taken_0x22e8c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8C0u;
        // 0x22e8c4: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8c0) {
            ctx->pc = 0x22E8D0u;
            goto label_22e8d0;
        }
    }
    ctx->pc = 0x22E8C8u;
    // 0x22e8c8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22e8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x22e8cc: 0xaf82a530  sw          $v0, -0x5AD0($gp)
    ctx->pc = 0x22e8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944048), GPR_U32(ctx, 2));
label_22e8d0:
    // 0x22e8d0: 0x27d18858  addiu       $s1, $fp, -0x77A8
    ctx->pc = 0x22e8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936664));
label_22e8d4:
    // 0x22e8d4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x22e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x22e8d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E8D8u;
    {
        const bool branch_taken_0x22e8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e8d8) {
            ctx->pc = 0x22E8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E8D8u;
            // 0x22e8dc: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E8F4u;
            goto label_22e8f4;
        }
    }
    ctx->pc = 0x22E8E0u;
    // 0x22e8e0: 0x2783a530  addiu       $v1, $gp, -0x5AD0
    ctx->pc = 0x22e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944048));
    // 0x22e8e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e8e8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x22e8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x22e8ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22e8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22e8f0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x22e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_22e8f4:
    // 0x22e8f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E8F4u;
    {
        const bool branch_taken_0x22e8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e8f4) {
            ctx->pc = 0x22E90Cu;
            goto label_22e90c;
        }
    }
    ctx->pc = 0x22E8FCu;
    // 0x22e8fc: 0x2783a530  addiu       $v1, $gp, -0x5AD0
    ctx->pc = 0x22e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944048));
    // 0x22e900: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22e900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e904: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x22e904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x22e908: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22e908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22e90c:
    // 0x22e90c: 0xc09d940  jal         func_276500
    ctx->pc = 0x22E90Cu;
    SET_GPR_U32(ctx, 31, 0x22E914u);
    ctx->pc = 0x22E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E90Cu;
    // 0x22e910: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x22E90Cu, 0x22E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E914u;
label_22e914:
    // 0x22e914: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x22E914u;
    {
        const bool branch_taken_0x22e914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E914u;
        // 0x22e918: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e914) {
            ctx->pc = 0x22E9A0u;
            goto label_22e9a0;
        }
    }
    ctx->pc = 0x22E91Cu;
    // 0x22e91c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x22e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x22e920: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22E920u;
    {
        const bool branch_taken_0x22e920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E920u;
        // 0x22e924: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e920) {
            ctx->pc = 0x22E9A0u;
            goto label_22e9a0;
        }
    }
    ctx->pc = 0x22E928u;
    // 0x22e928: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x22e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x22e92c: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x22e92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x22e930: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x22E930u;
    {
        const bool branch_taken_0x22e930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e930) {
            ctx->pc = 0x22E934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E930u;
            // 0x22e934: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E9A0u;
            goto label_22e9a0;
        }
    }
    ctx->pc = 0x22E938u;
    // 0x22e938: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22e938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22e93c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x22e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x22e940: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e944: 0x8c637990  lw          $v1, 0x7990($v1)
    ctx->pc = 0x22e944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31120)));
    // 0x22e948: 0x600008  jr          $v1
    ctx->pc = 0x22E948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E950u: goto label_22e950;
            case 0x22E990u: goto label_22e990;
            case 0x22E998u: goto label_22e998;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E948u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22E950u;
label_22e950:
    // 0x22e950: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22e950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22e954: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22e954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22e958: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x22e958u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x22e95c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E95Cu;
    {
        const bool branch_taken_0x22e95c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E95Cu;
        // 0x22e960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e95c) {
            ctx->pc = 0x22E970u;
            goto label_22e970;
        }
    }
    ctx->pc = 0x22E964u;
    // 0x22e964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22e964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e968: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E968u;
    {
        const bool branch_taken_0x22e968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e968) {
            ctx->pc = 0x22E974u;
            goto label_22e974;
        }
    }
    ctx->pc = 0x22E970u;
label_22e970:
    // 0x22e970: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22e970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e974:
    // 0x22e974: 0xc085f5c  jal         func_217D70
    ctx->pc = 0x22E974u;
    SET_GPR_U32(ctx, 31, 0x22E97Cu);
    ctx->pc = 0x22E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E974u;
    // 0x22e978: 0x2cb00001  sltiu       $s0, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x217D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D70u, 0x22E974u, 0x22E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E97Cu;
label_22e97c:
    // 0x22e97c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E97Cu;
    {
        const bool branch_taken_0x22e97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E97Cu;
        // 0x22e980: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e97c) {
            ctx->pc = 0x22E9A0u;
            goto label_22e9a0;
        }
    }
    ctx->pc = 0x22E984u;
    // 0x22e984: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22E984u;
    {
        const bool branch_taken_0x22e984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E984u;
        // 0x22e988: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e984) {
            ctx->pc = 0x22E99Cu;
            goto label_22e99c;
        }
    }
    ctx->pc = 0x22E98Cu;
    // 0x22e98c: 0x0  nop
    ctx->pc = 0x22e98cu;
    // NOP
label_22e990:
    // 0x22e990: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22E990u;
    {
        const bool branch_taken_0x22e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E990u;
        // 0x22e994: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e990) {
            ctx->pc = 0x22E99Cu;
            goto label_22e99c;
        }
    }
    ctx->pc = 0x22E998u;
label_22e998:
    // 0x22e998: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e99c:
    // 0x22e99c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x22e99cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e9a0:
    // 0x22e9a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E9A0u;
    {
        const bool branch_taken_0x22e9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9A0u;
        // 0x22e9a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9a0) {
            ctx->pc = 0x22E9B4u;
            goto label_22e9b4;
        }
    }
    ctx->pc = 0x22E9A8u;
    // 0x22e9a8: 0x8f82a534  lw          $v0, -0x5ACC($gp)
    ctx->pc = 0x22e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944052)));
    // 0x22e9ac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x22e9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x22e9b0: 0xaf82a534  sw          $v0, -0x5ACC($gp)
    ctx->pc = 0x22e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944052), GPR_U32(ctx, 2));
label_22e9b4:
    // 0x22e9b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22e9b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22e9b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22e9b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e9bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22e9bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e9c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22e9c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e9c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22e9c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22e9c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x22e9c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e9cc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x22e9ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22e9d0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x22e9d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e9d4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x22e9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x22E9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9D8u;
        // 0x22e9dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E9E0u;
}

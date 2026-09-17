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

// Function: sub_0035D538
// Address: 0x35d538 - 0x35d6a0
void sub_0035D538_0x35d538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D538_0x35d538");
#endif

    switch (ctx->pc) {
        case 0x35d590u: goto label_35d590;
        case 0x35d618u: goto label_35d618;
        case 0x35d63cu: goto label_35d63c;
        default: break;
    }

    ctx->pc = 0x35d538u;

    // 0x35d538: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35d538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35d53c: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x35d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x35d540: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x35d540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x35d544: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35d544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35d548: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35d548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35d54c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x35d54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x35d550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d554: 0x24b01378  addiu       $s0, $a1, 0x1378
    ctx->pc = 0x35d554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4984));
    // 0x35d558: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d55c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35d55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d560: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35d560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35d564: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x35d564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35d568: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35d568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35d56c: 0x24732ba8  addiu       $s3, $v1, 0x2BA8
    ctx->pc = 0x35d56cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 11176));
    // 0x35d570: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35d570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35d574: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x35d574u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35d578: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x35d578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35d57c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x35d57cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d580: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x35d580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x35d584: 0x24562ae8  addiu       $s6, $v0, 0x2AE8
    ctx->pc = 0x35d584u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 10984));
    // 0x35d588: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x35d588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x35d58c: 0x24972ab8  addiu       $s7, $a0, 0x2AB8
    ctx->pc = 0x35d58cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 10936));
label_35d590:
    // 0x35d590: 0xdf82c7d0  ld          $v0, -0x3830($gp)
    ctx->pc = 0x35d590u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294952912)));
    // 0x35d594: 0x2221017  dsrav       $v0, $v0, $s1
    ctx->pc = 0x35d594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 17) & 0x3F));
    // 0x35d598: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35d59c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35d5a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35d5a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35d5a4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x35D5A4u;
    {
        const bool branch_taken_0x35d5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D5A4u;
        // 0x35d5a8: 0x113080  sll         $a2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d5a4) {
            ctx->pc = 0x35D660u;
            goto label_35d660;
        }
    }
    ctx->pc = 0x35D5ACu;
    // 0x35d5ac: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x35d5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x35d5b0: 0xd61821  addu        $v1, $a2, $s6
    ctx->pc = 0x35d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x35d5b4: 0x2372021  addu        $a0, $s1, $s7
    ctx->pc = 0x35d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x35d5b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35d5bc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x35d5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x35d5c0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x35D5C0u;
    {
        const bool branch_taken_0x35d5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D5C0u;
        // 0x35d5c4: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d5c0) {
            ctx->pc = 0x35D660u;
            goto label_35d660;
        }
    }
    ctx->pc = 0x35D5C8u;
    // 0x35d5c8: 0x14750007  bne         $v1, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x35D5C8u;
    {
        const bool branch_taken_0x35d5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x35d5c8) {
            ctx->pc = 0x35D5E8u;
            goto label_35d5e8;
        }
    }
    ctx->pc = 0x35D5D0u;
    // 0x35d5d0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x35d5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x35d5d4: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x35D5D4u;
    {
        const bool branch_taken_0x35d5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x35d5d4) {
            ctx->pc = 0x35D5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D5D4u;
            // 0x35d5d8: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D5DCu;
            goto label_35d5dc;
        }
    }
    ctx->pc = 0x35D5DCu;
label_35d5dc:
    // 0x35d5dc: 0xd31021  addu        $v0, $a2, $s3
    ctx->pc = 0x35d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x35d5e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x35D5E0u;
    {
        const bool branch_taken_0x35d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D5E0u;
        // 0x35d5e4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d5e0) {
            ctx->pc = 0x35D660u;
            goto label_35d660;
        }
    }
    ctx->pc = 0x35D5E8u;
label_35d5e8:
    // 0x35d5e8: 0x1474000d  bne         $v1, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x35D5E8u;
    {
        const bool branch_taken_0x35d5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x35d5e8) {
            ctx->pc = 0x35D620u;
            goto label_35d620;
        }
    }
    ctx->pc = 0x35D5F0u;
    // 0x35d5f0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x35d5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x35d5f4: 0x1052001a  beq         $v0, $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x35D5F4u;
    {
        const bool branch_taken_0x35d5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x35D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D5F4u;
        // 0x35d5f8: 0xd31021  addu        $v0, $a2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d5f4) {
            ctx->pc = 0x35D660u;
            goto label_35d660;
        }
    }
    ctx->pc = 0x35D5FCu;
    // 0x35d5fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35d600: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35d604: 0x2864000a  slti        $a0, $v1, 0xA
    ctx->pc = 0x35d604u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x35d608: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35D608u;
    {
        const bool branch_taken_0x35d608 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D608u;
        // 0x35d60c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d608) {
            ctx->pc = 0x35D660u;
            goto label_35d660;
        }
    }
    ctx->pc = 0x35D610u;
    // 0x35d610: 0xc0d70fe  jal         func_35C3F8
    ctx->pc = 0x35D610u;
    SET_GPR_U32(ctx, 31, 0x35D618u);
    ctx->pc = 0x35D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D610u;
    // 0x35d614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C3F8u, 0x35D610u, 0x35D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D618u;
label_35d618:
    // 0x35d618: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x35D618u;
    {
        const bool branch_taken_0x35d618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D618u;
        // 0x35d61c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d618) {
            ctx->pc = 0x35D664u;
            goto label_35d664;
        }
    }
    ctx->pc = 0x35D620u;
label_35d620:
    // 0x35d620: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D620u;
    {
        const bool branch_taken_0x35d620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d620) {
            ctx->pc = 0x35D648u;
            goto label_35d648;
        }
    }
    ctx->pc = 0x35D628u;
    // 0x35d628: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x35d628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x35d62c: 0x5052000d  beql        $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x35D62Cu;
    {
        const bool branch_taken_0x35d62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x35d62c) {
            ctx->pc = 0x35D630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D62Cu;
            // 0x35d630: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D664u;
            goto label_35d664;
        }
    }
    ctx->pc = 0x35D634u;
    // 0x35d634: 0xc0d707a  jal         func_35C1E8
    ctx->pc = 0x35D634u;
    SET_GPR_U32(ctx, 31, 0x35D63Cu);
    ctx->pc = 0x35D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D634u;
    // 0x35d638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C1E8u, 0x35D634u, 0x35D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D63Cu;
label_35d63c:
    // 0x35d63c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35D63Cu;
    {
        const bool branch_taken_0x35d63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D63Cu;
        // 0x35d640: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d63c) {
            ctx->pc = 0x35D664u;
            goto label_35d664;
        }
    }
    ctx->pc = 0x35D644u;
    // 0x35d644: 0x0  nop
    ctx->pc = 0x35d644u;
    // NOP
label_35d648:
    // 0x35d648: 0x54720006  bnel        $v1, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D648u;
    {
        const bool branch_taken_0x35d648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x35d648) {
            ctx->pc = 0x35D64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D648u;
            // 0x35d64c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D664u;
            goto label_35d664;
        }
    }
    ctx->pc = 0x35D650u;
    // 0x35d650: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x35d650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x35d654: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35D654u;
    {
        const bool branch_taken_0x35d654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D654u;
        // 0x35d658: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d654) {
            ctx->pc = 0x35D660u;
            goto label_35d660;
        }
    }
    ctx->pc = 0x35D65Cu;
    // 0x35d65c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x35d65cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_35d660:
    // 0x35d660: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35d660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_35d664:
    // 0x35d664: 0x2a220030  slti        $v0, $s1, 0x30
    ctx->pc = 0x35d664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35d668: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x35D668u;
    {
        const bool branch_taken_0x35d668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D668u;
        // 0x35d66c: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d668) {
            ctx->pc = 0x35D590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d590;
        }
    }
    ctx->pc = 0x35D670u;
    // 0x35d670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d674: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d678: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35d678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d67c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35d67cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d680: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35d680u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d684: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35d684u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35d688: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x35d688u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d68c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x35d68cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35d690: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35d690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35d694: 0x3e00008  jr          $ra
    ctx->pc = 0x35D694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D694u;
        // 0x35d698: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D69Cu;
    // 0x35d69c: 0x0  nop
    ctx->pc = 0x35d69cu;
    // NOP
    ctx->pc = 0x35d6a0u;
}

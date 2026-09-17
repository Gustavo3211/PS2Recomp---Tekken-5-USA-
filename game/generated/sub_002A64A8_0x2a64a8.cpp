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

// Function: sub_002A64A8
// Address: 0x2a64a8 - 0x2a6658
void sub_002A64A8_0x2a64a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A64A8_0x2a64a8");
#endif

    switch (ctx->pc) {
        case 0x2a64d4u: goto label_2a64d4;
        case 0x2a64f8u: goto label_2a64f8;
        case 0x2a651cu: goto label_2a651c;
        case 0x2a6534u: goto label_2a6534;
        case 0x2a6544u: goto label_2a6544;
        case 0x2a6560u: goto label_2a6560;
        case 0x2a6574u: goto label_2a6574;
        case 0x2a65a8u: goto label_2a65a8;
        case 0x2a65d0u: goto label_2a65d0;
        case 0x2a660cu: goto label_2a660c;
        case 0x2a6630u: goto label_2a6630;
        default: break;
    }

    ctx->pc = 0x2a64a8u;

    // 0x2a64a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a64a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a64ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a64acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a64b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a64b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a64b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a64b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a64b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a64bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a64bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a64c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a64c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a64c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a64c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a64c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a64c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a64cc: 0xc0bbd40  jal         func_2EF500
    ctx->pc = 0x2A64CCu;
    SET_GPR_U32(ctx, 31, 0x2A64D4u);
    ctx->pc = 0x2A64D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A64CCu;
    // 0x2a64d0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF500u, 0x2A64CCu, 0x2A64D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64D4u;
label_2a64d4:
    // 0x2a64d4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2a64d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2a64d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a64d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64dc: 0x26500144  addiu       $s0, $s2, 0x144
    ctx->pc = 0x2a64dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 324));
    // 0x2a64e0: 0x2463e7b8  addiu       $v1, $v1, -0x1848
    ctx->pc = 0x2a64e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961080));
    // 0x2a64e4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2a64e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2a64e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a64e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64ec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a64ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2a64f0: 0xc0bbd88  jal         func_2EF620
    ctx->pc = 0x2A64F0u;
    SET_GPR_U32(ctx, 31, 0x2A64F8u);
    ctx->pc = 0x2A64F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A64F0u;
    // 0x2a64f4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF620u, 0x2A64F0u, 0x2A64F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64F8u;
label_2a64f8:
    // 0x2a64f8: 0x264300b8  addiu       $v1, $s2, 0xB8
    ctx->pc = 0x2a64f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
    // 0x2a64fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a64fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6500: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x2a6500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x2a6504: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a6504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6508: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2a6508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a650c: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x2a650cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2a6510: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2a6510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2a6514: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2A6514u;
    SET_GPR_U32(ctx, 31, 0x2A651Cu);
    ctx->pc = 0x2A6518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6514u;
    // 0x2a6518: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2A6514u, 0x2A651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A651Cu;
label_2a651c:
    // 0x2a651c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a651cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a6520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a6520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6524: 0x2442dee0  addiu       $v0, $v0, -0x2120
    ctx->pc = 0x2a6524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958816));
    // 0x2a6528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a652c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2A652Cu;
    SET_GPR_U32(ctx, 31, 0x2A6534u);
    ctx->pc = 0x2A6530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A652Cu;
    // 0x2a6530: 0xae420038  sw          $v0, 0x38($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2A652Cu, 0x2A6534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6534u;
label_2a6534:
    // 0x2a6534: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a6534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6538: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a6538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a653c: 0xc0a956e  jal         func_2A55B8
    ctx->pc = 0x2A653Cu;
    SET_GPR_U32(ctx, 31, 0x2A6544u);
    ctx->pc = 0x2A6540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A653Cu;
    // 0x2a6540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A55B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A55B8u, 0x2A653Cu, 0x2A6544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6544u;
label_2a6544:
    // 0x2a6544: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2a6544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2a6548: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2a6548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2a654c: 0x245578b0  addiu       $s5, $v0, 0x78B0
    ctx->pc = 0x2a654cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 30896));
    // 0x2a6550: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a6550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6554: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2a6554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2a6558: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a6558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2a655c: 0x0  nop
    ctx->pc = 0x2a655cu;
    // NOP
label_2a6560:
    // 0x2a6560: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2a6560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2a6564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a6564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a656c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2A656Cu;
    SET_GPR_U32(ctx, 31, 0x2A6574u);
    ctx->pc = 0x2A6570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A656Cu;
    // 0x2a6570: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2A656Cu, 0x2A6574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6574u;
label_2a6574:
    // 0x2a6574: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2a6574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a6578: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6578u;
    {
        const bool branch_taken_0x2a6578 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6578u;
        // 0x2a657c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6578) {
            ctx->pc = 0x2A6590u;
            goto label_2a6590;
        }
    }
    ctx->pc = 0x2A6580u;
    // 0x2a6580: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2a6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2a6584: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a6584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a6588: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6588u;
    {
        const bool branch_taken_0x2a6588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6588u;
        // 0x2a658c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6588) {
            ctx->pc = 0x2A65A0u;
            goto label_2a65a0;
        }
    }
    ctx->pc = 0x2A6590u;
label_2a6590:
    // 0x2a6590: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a6590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2a6594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a6594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6598: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2a6598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2a659c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a659cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a65a0:
    // 0x2a65a0: 0xc0a9670  jal         func_2A59C0
    ctx->pc = 0x2A65A0u;
    SET_GPR_U32(ctx, 31, 0x2A65A8u);
    ctx->pc = 0x2A65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A65A0u;
    // 0x2a65a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A59C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A59C0u, 0x2A65A0u, 0x2A65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65A8u;
label_2a65a8:
    // 0x2a65a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a65a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a65ac: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x2a65acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a65b0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2A65B0u;
    {
        const bool branch_taken_0x2a65b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65B0u;
        // 0x2a65b4: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a65b0) {
            ctx->pc = 0x2A6560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6560;
        }
    }
    ctx->pc = 0x2A65B8u;
    // 0x2a65b8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a65b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a65bc: 0xa2400140  sb          $zero, 0x140($s2)
    ctx->pc = 0x2a65bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 320), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a65c0: 0x2451b7c8  addiu       $s1, $v0, -0x4838
    ctx->pc = 0x2a65c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948808));
    // 0x2a65c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a65c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65c8: 0xc0a5070  jal         func_2941C0
    ctx->pc = 0x2A65C8u;
    SET_GPR_U32(ctx, 31, 0x2A65D0u);
    ctx->pc = 0x2A65CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A65C8u;
    // 0x2a65cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2941C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941C0u, 0x2A65C8u, 0x2A65D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65D0u;
label_2a65d0:
    // 0x2a65d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a65d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a65d8: 0xa2420141  sb          $v0, 0x141($s2)
    ctx->pc = 0x2a65d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 321), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a65dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a65dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a65e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A65E0u;
    {
        const bool branch_taken_0x2a65e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a65e0) {
            ctx->pc = 0x2A65E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A65E0u;
            // 0x2a65e4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A65FCu;
            goto label_2a65fc;
        }
    }
    ctx->pc = 0x2A65E8u;
    // 0x2a65e8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a65e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a65ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a65f0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A65F0u;
    {
        const bool branch_taken_0x2a65f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a65f0) {
            ctx->pc = 0x2A6604u;
            goto label_2a6604;
        }
    }
    ctx->pc = 0x2A65F8u;
    // 0x2a65f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2a65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2a65fc:
    // 0x2a65fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a65fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6600: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a6600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2a6604:
    // 0x2a6604: 0xc0a9648  jal         func_2A5920
    ctx->pc = 0x2A6604u;
    SET_GPR_U32(ctx, 31, 0x2A660Cu);
    ctx->pc = 0x2A6608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6604u;
    // 0x2a6608: 0x82450140  lb          $a1, 0x140($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5920u, 0x2A6604u, 0x2A660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A660Cu;
label_2a660c:
    // 0x2a660c: 0xa2400142  sb          $zero, 0x142($s2)
    ctx->pc = 0x2a660cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 322), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a6610: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6610u;
    {
        const bool branch_taken_0x2a6610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6610u;
        // 0x2a6614: 0xa2400143  sb          $zero, 0x143($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 323), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6610) {
            ctx->pc = 0x2A6630u;
            goto label_2a6630;
        }
    }
    ctx->pc = 0x2A6618u;
    // 0x2a6618: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a6618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a661c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a661cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a6620: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2a6620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2a6624: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x2a6624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x2a6628: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2A6628u;
    SET_GPR_U32(ctx, 31, 0x2A6630u);
    ctx->pc = 0x2A662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6628u;
    // 0x2a662c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2A6628u, 0x2A6630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6630u;
label_2a6630:
    // 0x2a6630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a6634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a6638: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a6638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a663c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a663cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a6640: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a6640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6644: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2a6644u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a6648: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a6648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a664c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A664Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A664Cu;
        // 0x2a6650: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A664Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6654u;
    // 0x2a6654: 0x0  nop
    ctx->pc = 0x2a6654u;
    // NOP
    ctx->pc = 0x2a6658u;
}

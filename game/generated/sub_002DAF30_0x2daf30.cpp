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

// Function: sub_002DAF30
// Address: 0x2daf30 - 0x2db098
void sub_002DAF30_0x2daf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAF30_0x2daf30");
#endif

    switch (ctx->pc) {
        case 0x2daf70u: goto label_2daf70;
        case 0x2daf94u: goto label_2daf94;
        case 0x2dafa4u: goto label_2dafa4;
        case 0x2dafb4u: goto label_2dafb4;
        case 0x2dafc8u: goto label_2dafc8;
        case 0x2dafd0u: goto label_2dafd0;
        case 0x2dafe8u: goto label_2dafe8;
        default: break;
    }

    ctx->pc = 0x2daf30u;

    // 0x2daf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2daf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2daf34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2daf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2daf38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2daf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2daf3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2daf3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2daf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2daf44: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2daf44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2daf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2daf4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2daf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2daf50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2daf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2daf54: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2daf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2daf58: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x2daf58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2daf5c: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x2daf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2daf60: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAF60u;
    {
        const bool branch_taken_0x2daf60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF60u;
        // 0x2daf64: 0x2445f2f0  addiu       $a1, $v0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf60) {
            ctx->pc = 0x2DAF78u;
            goto label_2daf78;
        }
    }
    ctx->pc = 0x2DAF68u;
    // 0x2daf68: 0xc0bf32c  jal         func_2FCCB0
    ctx->pc = 0x2DAF68u;
    SET_GPR_U32(ctx, 31, 0x2DAF70u);
    ctx->pc = 0x2FCCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCCB0u, 0x2DAF68u, 0x2DAF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF70u;
label_2daf70:
    // 0x2daf70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DAF70u;
    {
        const bool branch_taken_0x2daf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF70u;
        // 0x2daf74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf70) {
            ctx->pc = 0x2DAF7Cu;
            goto label_2daf7c;
        }
    }
    ctx->pc = 0x2DAF78u;
label_2daf78:
    // 0x2daf78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2daf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2daf7c:
    // 0x2daf7c: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2DAF7Cu;
    {
        const bool branch_taken_0x2daf7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF7Cu;
        // 0x2daf80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf7c) {
            ctx->pc = 0x2DB078u;
            goto label_2db078;
        }
    }
    ctx->pc = 0x2DAF84u;
    // 0x2daf84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2daf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2daf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf8c: 0xc0b6cf4  jal         func_2DB3D0
    ctx->pc = 0x2DAF8Cu;
    SET_GPR_U32(ctx, 31, 0x2DAF94u);
    ctx->pc = 0x2DAF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF8Cu;
    // 0x2daf90: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3D0u, 0x2DAF8Cu, 0x2DAF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF94u;
label_2daf94:
    // 0x2daf94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2daf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2daf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf9c: 0xc0b6cfe  jal         func_2DB3F8
    ctx->pc = 0x2DAF9Cu;
    SET_GPR_U32(ctx, 31, 0x2DAFA4u);
    ctx->pc = 0x2DAFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF9Cu;
    // 0x2dafa0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3F8u, 0x2DAF9Cu, 0x2DAFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFA4u;
label_2dafa4:
    // 0x2dafa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dafa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dafa8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dafa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dafac: 0xc0b6d08  jal         func_2DB420
    ctx->pc = 0x2DAFACu;
    SET_GPR_U32(ctx, 31, 0x2DAFB4u);
    ctx->pc = 0x2DAFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAFACu;
    // 0x2dafb0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB420u, 0x2DAFACu, 0x2DAFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFB4u;
label_2dafb4:
    // 0x2dafb4: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x2dafb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2dafb8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DAFB8u;
    {
        const bool branch_taken_0x2dafb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFB8u;
        // 0x2dafbc: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dafb8) {
            ctx->pc = 0x2DB058u;
            goto label_2db058;
        }
    }
    ctx->pc = 0x2DAFC0u;
    // 0x2dafc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dafc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dafc4: 0x0  nop
    ctx->pc = 0x2dafc4u;
    // NOP
label_2dafc8:
    // 0x2dafc8: 0xc0bf152  jal         func_2FC548
    ctx->pc = 0x2DAFC8u;
    SET_GPR_U32(ctx, 31, 0x2DAFD0u);
    ctx->pc = 0x2DAFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAFC8u;
    // 0x2dafcc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC548u, 0x2DAFC8u, 0x2DAFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFD0u;
label_2dafd0:
    // 0x2dafd0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2dafd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dafd4: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2dafd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2dafd8: 0x18c00019  blez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DAFD8u;
    {
        const bool branch_taken_0x2dafd8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2DAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFD8u;
        // 0x2dafdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dafd8) {
            ctx->pc = 0x2DB040u;
            goto label_2db040;
        }
    }
    ctx->pc = 0x2DAFE0u;
    // 0x2dafe0: 0x3c09f000  lui         $t1, 0xF000
    ctx->pc = 0x2dafe0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)61440 << 16));
    // 0x2dafe4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2dafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2dafe8:
    // 0x2dafe8: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x2dafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2dafec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2dafecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2daff0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2daff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2daff4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2daff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2daff8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2daff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2daffc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2daffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db000: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2db000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db004: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DB004u;
    {
        const bool branch_taken_0x2db004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DB008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB004u;
        // 0x2db008: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db004) {
            ctx->pc = 0x2DB034u;
            goto label_2db034;
        }
    }
    ctx->pc = 0x2DB00Cu;
    // 0x2db00c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2db00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db010: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x2db010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2db014: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2db014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2db018: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB018u;
    {
        const bool branch_taken_0x2db018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB018u;
        // 0x2db01c: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db018) {
            ctx->pc = 0x2DB038u;
            goto label_2db038;
        }
    }
    ctx->pc = 0x2DB020u;
    // 0x2db020: 0x891024  and         $v0, $a0, $t1
    ctx->pc = 0x2db020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x2db024: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB024u;
    {
        const bool branch_taken_0x2db024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB024u;
        // 0x2db028: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db024) {
            ctx->pc = 0x2DB038u;
            goto label_2db038;
        }
    }
    ctx->pc = 0x2DB02Cu;
    // 0x2db02c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2db02cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2db030: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2db030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2db034:
    // 0x2db034: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x2db034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2db038:
    // 0x2db038: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2DB038u;
    {
        const bool branch_taken_0x2db038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB038u;
        // 0x2db03c: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db038) {
            ctx->pc = 0x2DAFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dafe8;
        }
    }
    ctx->pc = 0x2DB040u;
label_2db040:
    // 0x2db040: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x2db040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2db044: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2db044u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2db048: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2db048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2db04c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2DB04Cu;
    {
        const bool branch_taken_0x2db04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB04Cu;
        // 0x2db050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db04c) {
            ctx->pc = 0x2DAFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dafc8;
        }
    }
    ctx->pc = 0x2DB054u;
    // 0x2db054: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2db054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2db058:
    // 0x2db058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2db058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db05c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2db05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2db060: 0x242188d0  addiu       $at, $at, -0x7730
    ctx->pc = 0x2db060u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294936784));
    // 0x2db064: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2db064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2db068: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2db068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db06c: 0xac650828  sw          $a1, 0x828($v1)
    ctx->pc = 0x2db06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2088), GPR_U32(ctx, 5));
    // 0x2db070: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2db070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db074: 0xac850878  sw          $a1, 0x878($a0)
    ctx->pc = 0x2db074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2168), GPR_U32(ctx, 5));
label_2db078:
    // 0x2db078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db07c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2db07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db080: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2db080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db084: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2db084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2db088: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2db088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db08c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2db08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db090: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB090u;
        // 0x2db094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB098u;
}

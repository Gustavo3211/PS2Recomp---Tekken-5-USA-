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

// Function: sub_0012F330
// Address: 0x12f330 - 0x12f488
void sub_0012F330_0x12f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F330_0x12f330");
#endif

    switch (ctx->pc) {
        case 0x12f380u: goto label_12f380;
        case 0x12f3a4u: goto label_12f3a4;
        case 0x12f3b8u: goto label_12f3b8;
        case 0x12f3f8u: goto label_12f3f8;
        case 0x12f430u: goto label_12f430;
        case 0x12f460u: goto label_12f460;
        default: break;
    }

    ctx->pc = 0x12f330u;

    // 0x12f330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f338: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12f338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f33c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12f33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12f340: 0x108943  sra         $s1, $s0, 5
    ctx->pc = 0x12f340u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 5));
    // 0x12f344: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12f344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12f348: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12f34c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12f34cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f350: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12f350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12f354: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12f354u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f358: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12f358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12f35c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f360: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x12f360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x12f364: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x12f364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12f368: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x12f368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x12f36c: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x12f36cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12f370: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x12f370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12f374: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F374u;
    {
        const bool branch_taken_0x12f374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F374u;
        // 0x12f378: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f374) {
            ctx->pc = 0x12F39Cu;
            goto label_12f39c;
        }
    }
    ctx->pc = 0x12F37Cu;
    // 0x12f37c: 0x0  nop
    ctx->pc = 0x12f37cu;
    // NOP
label_12f380:
    // 0x12f380: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x12f380u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x12f384: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x12f384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12f388: 0x0  nop
    ctx->pc = 0x12f388u;
    // NOP
    // 0x12f38c: 0x0  nop
    ctx->pc = 0x12f38cu;
    // NOP
    // 0x12f390: 0x0  nop
    ctx->pc = 0x12f390u;
    // NOP
    // 0x12f394: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F394u;
    {
        const bool branch_taken_0x12f394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F394u;
        // 0x12f398: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f394) {
            ctx->pc = 0x12F380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f380;
        }
    }
    ctx->pc = 0x12F39Cu;
label_12f39c:
    // 0x12f39c: 0xc04bae6  jal         func_12EB98
    ctx->pc = 0x12F39Cu;
    SET_GPR_U32(ctx, 31, 0x12F3A4u);
    ctx->pc = 0x12F3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F39Cu;
    // 0x12f3a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB98u, 0x12F39Cu, 0x12F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3A4u;
label_12f3a4:
    // 0x12f3a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12f3a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3a8: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x12F3A8u;
    {
        const bool branch_taken_0x12f3a8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3A8u;
        // 0x12f3ac: 0x26870014  addiu       $a3, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3a8) {
            ctx->pc = 0x12F3D4u;
            goto label_12f3d4;
        }
    }
    ctx->pc = 0x12F3B0u;
    // 0x12f3b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12f3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3b4: 0x0  nop
    ctx->pc = 0x12f3b4u;
    // NOP
label_12f3b8:
    // 0x12f3b8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12f3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12f3bc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x12f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x12f3c0: 0x0  nop
    ctx->pc = 0x12f3c0u;
    // NOP
    // 0x12f3c4: 0x0  nop
    ctx->pc = 0x12f3c4u;
    // NOP
    // 0x12f3c8: 0x0  nop
    ctx->pc = 0x12f3c8u;
    // NOP
    // 0x12f3cc: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F3CCu;
    {
        const bool branch_taken_0x12f3cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3CCu;
        // 0x12f3d0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3cc) {
            ctx->pc = 0x12F3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f3b8;
        }
    }
    ctx->pc = 0x12F3D4u;
label_12f3d4:
    // 0x12f3d4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x12f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x12f3d8: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x12f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x12f3dc: 0x3210001f  andi        $s0, $s0, 0x1F
    ctx->pc = 0x12f3dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x12f3e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12f3e4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12F3E4u;
    {
        const bool branch_taken_0x12f3e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3E4u;
        // 0x12f3e8: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3e4) {
            ctx->pc = 0x12F430u;
            goto label_12f430;
        }
    }
    ctx->pc = 0x12F3ECu;
    // 0x12f3ec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12f3f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12f3f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3f4: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x12f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_12f3f8:
    // 0x12f3f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12f3fc: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x12f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x12f400: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12f400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12f404: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x12f404u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x12f408: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x12f408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x12f40c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12f410: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12f410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12f414: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x12f414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x12f418: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12F418u;
    {
        const bool branch_taken_0x12f418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F418u;
        // 0x12f41c: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f418) {
            ctx->pc = 0x12F3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f3f8;
        }
    }
    ctx->pc = 0x12F420u;
    // 0x12f420: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x12F420u;
    {
        const bool branch_taken_0x12f420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F420u;
        // 0x12f424: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f420) {
            ctx->pc = 0x12F44Cu;
            goto label_12f44c;
        }
    }
    ctx->pc = 0x12F428u;
    // 0x12f428: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12F428u;
    {
        const bool branch_taken_0x12f428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F428u;
        // 0x12f42c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f428) {
            ctx->pc = 0x12F44Cu;
            goto label_12f44c;
        }
    }
    ctx->pc = 0x12F430u;
label_12f430:
    // 0x12f430: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12f434: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12f434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12f438: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x12f438u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x12f43c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x12f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x12f440: 0x0  nop
    ctx->pc = 0x12f440u;
    // NOP
    // 0x12f444: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F444u;
    {
        const bool branch_taken_0x12f444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F444u;
        // 0x12f448: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f444) {
            ctx->pc = 0x12F430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f430;
        }
    }
    ctx->pc = 0x12F44Cu;
label_12f44c:
    // 0x12f44c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x12f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x12f450: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12f450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f454: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x12f454u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x12f458: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12F458u;
    SET_GPR_U32(ctx, 31, 0x12F460u);
    ctx->pc = 0x12F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F458u;
    // 0x12f45c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12F458u, 0x12F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F460u;
label_12f460:
    // 0x12f460: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x12f460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12f468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f46c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12f46cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f470: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12f470u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12f474: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12f474u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f478: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12f478u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f47c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12f47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f480: 0x3e00008  jr          $ra
    ctx->pc = 0x12F480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F480u;
        // 0x12f484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F488u;
}

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

// Function: sub_0027B758
// Address: 0x27b758 - 0x27b870
void sub_0027B758_0x27b758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B758_0x27b758");
#endif

    switch (ctx->pc) {
        case 0x27b798u: goto label_27b798;
        case 0x27b7c4u: goto label_27b7c4;
        case 0x27b7dcu: goto label_27b7dc;
        default: break;
    }

    ctx->pc = 0x27b758u;

    // 0x27b758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b75c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x27b75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b768: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27b768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27b76c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b770: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27b770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27b774: 0x920301f8  lbu         $v1, 0x1F8($s0)
    ctx->pc = 0x27b774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x27b778: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x27B778u;
    {
        const bool branch_taken_0x27b778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B778u;
        // 0x27b77c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b778) {
            ctx->pc = 0x27B85Cu;
            goto label_27b85c;
        }
    }
    ctx->pc = 0x27B780u;
    // 0x27b780: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x27b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x27b784: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x27b784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x27b788: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x27b788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x27b78c: 0x86050096  lh          $a1, 0x96($s0)
    ctx->pc = 0x27b78cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x27b790: 0xc09e926  jal         func_27A498
    ctx->pc = 0x27B790u;
    SET_GPR_U32(ctx, 31, 0x27B798u);
    ctx->pc = 0x27B794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B790u;
    // 0x27b794: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A498u, 0x27B790u, 0x27B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B798u;
label_27b798:
    // 0x27b798: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x27b798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27b79c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27b79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b7a0: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x27B7A0u;
    {
        const bool branch_taken_0x27b7a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7A0u;
        // 0x27b7a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7a0) {
            ctx->pc = 0x27B85Cu;
            goto label_27b85c;
        }
    }
    ctx->pc = 0x27B7A8u;
    // 0x27b7a8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x27b7a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27b7ac: 0x1043002a  beq         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x27B7ACu;
    {
        const bool branch_taken_0x27b7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7ACu;
        // 0x27b7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7ac) {
            ctx->pc = 0x27B858u;
            goto label_27b858;
        }
    }
    ctx->pc = 0x27B7B4u;
    // 0x27b7b4: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x27b7b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27b7b8: 0xa6020304  sh          $v0, 0x304($s0)
    ctx->pc = 0x27b7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b7bc: 0xc09905e  jal         func_264178
    ctx->pc = 0x27B7BCu;
    SET_GPR_U32(ctx, 31, 0x27B7C4u);
    ctx->pc = 0x27B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B7BCu;
    // 0x27b7c0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x27B7BCu, 0x27B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B7C4u;
label_27b7c4:
    // 0x27b7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b7c8: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x27b7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
    // 0x27b7cc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x27b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27b7d0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x27b7d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27b7d4: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27B7D4u;
    SET_GPR_U32(ctx, 31, 0x27B7DCu);
    ctx->pc = 0x27B7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B7D4u;
    // 0x27b7d8: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27B7D4u, 0x27B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B7DCu;
label_27b7dc:
    // 0x27b7dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x27b7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b7e0: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27b7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b7e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27b7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b7ec: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x27b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27b7f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27b7f4: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x27b7f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x27b7f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27b7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27b7fc: 0xa203030d  sb          $v1, 0x30D($s0)
    ctx->pc = 0x27b7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 3));
    // 0x27b800: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x27b800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27b804: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27b804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27b808: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x27b808u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x27b80c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27b80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27b810: 0xa203030c  sb          $v1, 0x30C($s0)
    ctx->pc = 0x27b810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 3));
    // 0x27b814: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x27b814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27b818: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x27b818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x27b81c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27b81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27b820: 0xa203030e  sb          $v1, 0x30E($s0)
    ctx->pc = 0x27b820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 3));
    // 0x27b824: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x27b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27b828: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27b82c: 0xa2060190  sb          $a2, 0x190($s0)
    ctx->pc = 0x27b82cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 6));
    // 0x27b830: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x27b830u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x27b834: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27b834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27b838: 0xa203030f  sb          $v1, 0x30F($s0)
    ctx->pc = 0x27b838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 3));
    // 0x27b83c: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x27b83cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27b840: 0xa60502fe  sh          $a1, 0x2FE($s0)
    ctx->pc = 0x27b840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 5));
    // 0x27b844: 0x423c2  srl         $a0, $a0, 15
    ctx->pc = 0x27b844u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 15));
    // 0x27b848: 0xa6050096  sh          $a1, 0x96($s0)
    ctx->pc = 0x27b848u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 5));
    // 0x27b84c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27B84Cu;
    {
        const bool branch_taken_0x27b84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B84Cu;
        // 0x27b850: 0xa6040306  sh          $a0, 0x306($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b84c) {
            ctx->pc = 0x27B85Cu;
            goto label_27b85c;
        }
    }
    ctx->pc = 0x27B854u;
    // 0x27b854: 0x0  nop
    ctx->pc = 0x27b854u;
    // NOP
label_27b858:
    // 0x27b858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b85c:
    // 0x27b85c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b85cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b860: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27b860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27b864: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b868: 0x3e00008  jr          $ra
    ctx->pc = 0x27B868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B868u;
        // 0x27b86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B870u;
}

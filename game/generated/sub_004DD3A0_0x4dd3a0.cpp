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

// Function: sub_004DD3A0
// Address: 0x4dd3a0 - 0x4dd4f0
void sub_004DD3A0_0x4dd3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD3A0_0x4dd3a0");
#endif

    ctx->pc = 0x4dd3a0u;

    // 0x4dd3a0: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4dd3a0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4dd3a4: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4dd3a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4dd3a8: 0x95c21120  lhu         $v0, 0x1120($t6)
    ctx->pc = 0x4dd3a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F1120u));
    // 0x4dd3ac: 0x25cc1120  addiu       $t4, $t6, 0x1120
    ctx->pc = 0x4dd3acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 4384));
    // 0x4dd3b0: 0x95e31134  lhu         $v1, 0x1134($t7)
    ctx->pc = 0x4dd3b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7F1134u));
    // 0x4dd3b4: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4dd3b4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4dd3b8: 0x180c82d  daddu       $t9, $t4, $zero
    ctx->pc = 0x4dd3b8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd3bc: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x4dd3bcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd3c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4dd3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4dd3c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dd3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dd3c8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DD3C8u;
    {
        const bool branch_taken_0x4dd3c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4DD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD3C8u;
        // 0x4dd3cc: 0x25a61124  addiu       $a2, $t5, 0x1124 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd3c8) {
            ctx->pc = 0x4DD3E0u;
            goto label_4dd3e0;
        }
    }
    ctx->pc = 0x4DD3D0u;
    // 0x4dd3d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd3d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4DD3D4u;
    {
        const bool branch_taken_0x4dd3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD3D4u;
        // 0x4dd3d8: 0x3445ffff  ori         $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd3d4) {
            ctx->pc = 0x4DD3ECu;
            goto label_4dd3ec;
        }
    }
    ctx->pc = 0x4DD3DCu;
    // 0x4dd3dc: 0x0  nop
    ctx->pc = 0x4dd3dcu;
    // NOP
label_4dd3e0:
    // 0x4dd3e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4dd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dd3e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4dd3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd3e8: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4dd3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4dd3ec:
    // 0x4dd3ec: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4dd3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4dd3f0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4dd3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4dd3f4: 0x246a1128  addiu       $t2, $v1, 0x1128
    ctx->pc = 0x4dd3f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4392));
    // 0x4dd3f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4dd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd3fc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4dd3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1128u));
    // 0x4dd400: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4dd400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4dd404: 0x85860000  lh          $a2, 0x0($t4)
    ctx->pc = 0x4dd404u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dd408: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4dd408u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4dd40c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd410: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4dd410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dd414: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd418: 0x95a71124  lhu         $a3, 0x1124($t5)
    ctx->pc = 0x4dd418u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4388)));
    // 0x4dd41c: 0x95e91134  lhu         $t1, 0x1134($t7)
    ctx->pc = 0x4dd41cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 4404)));
    // 0x4dd420: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4dd420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4dd424: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4dd424u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4dd428: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd42c: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4dd42cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4dd430: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x4dd430u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dd434: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4dd434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dd438: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4dd438u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4dd43c: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4dd43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4dd440: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dd440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dd444: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dd444u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dd448: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4dd448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4dd44c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd450: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4dd450u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4dd454: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dd454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dd458: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4dd458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dd45c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4dd45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4dd460: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4dd460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4dd464: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dd464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dd468: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4dd468u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4dd46c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4dd46cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dd470: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4dd470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4dd474: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x4dd474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x4dd478: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4dd478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4dd47c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4dd47cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4dd480: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4dd480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dd484: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x4dd484u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4dd488: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dd488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dd48c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DD48Cu;
    {
        const bool branch_taken_0x4dd48c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4DD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD48Cu;
        // 0x4dd490: 0x346400ff  ori         $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd48c) {
            ctx->pc = 0x4DD49Cu;
            goto label_4dd49c;
        }
    }
    ctx->pc = 0x4DD494u;
    // 0x4dd494: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4dd494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4dd498: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4dd498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4dd49c:
    // 0x4dd49c: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4dd49cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4dd4a0: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x4dd4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4dd4a4: 0x91a31124  lbu         $v1, 0x1124($t5)
    ctx->pc = 0x4dd4a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4388)));
    // 0x4dd4a8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4dd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dd4ac: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x4dd4acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dd4b0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4dd4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4dd4b4: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x4dd4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x4dd4b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4dd4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4dd4bc: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4dd4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4dd4c0: 0x81630000  lb          $v1, 0x0($t3)
    ctx->pc = 0x4dd4c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dd4c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DD4C4u;
    {
        const bool branch_taken_0x4dd4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD4C4u;
        // 0x4dd4c8: 0x3c03ffff  lui         $v1, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd4c4) {
            ctx->pc = 0x4DD4E0u;
            goto label_4dd4e0;
        }
    }
    ctx->pc = 0x4DD4CCu;
    // 0x4dd4cc: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x4dd4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4dd4d0: 0x95e41134  lhu         $a0, 0x1134($t7)
    ctx->pc = 0x4dd4d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 4404)));
    // 0x4dd4d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dd4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dd4d8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4dd4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4dd4dc: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x4dd4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
label_4dd4e0:
    // 0x4dd4e0: 0x95c21120  lhu         $v0, 0x1120($t6)
    ctx->pc = 0x4dd4e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4384)));
    // 0x4dd4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DD4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD4E4u;
        // 0x4dd4e8: 0xa7020164  sh          $v0, 0x164($t8) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 24), 356), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DD4ECu;
    // 0x4dd4ec: 0x0  nop
    ctx->pc = 0x4dd4ecu;
    // NOP
    ctx->pc = 0x4dd4f0u;
}

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

// Function: sub_004884D0
// Address: 0x4884d0 - 0x488590
void sub_004884D0_0x4884d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004884D0_0x4884d0");
#endif

    switch (ctx->pc) {
        case 0x4884e0u: goto label_4884e0;
        case 0x4884f8u: goto label_4884f8;
        case 0x488550u: goto label_488550;
        default: break;
    }

    ctx->pc = 0x4884d0u;

    // 0x4884d0: 0x90880000  lbu         $t0, 0x0($a0)
    ctx->pc = 0x4884d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4884d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4884d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4884d8: 0x1100002b  beqz        $t0, . + 4 + (0x2B << 2)
    ctx->pc = 0x4884D8u;
    {
        const bool branch_taken_0x4884d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4884DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4884D8u;
        // 0x4884dc: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4884d8) {
            ctx->pc = 0x488588u;
            goto label_488588;
        }
    }
    ctx->pc = 0x4884E0u;
label_4884e0:
    // 0x4884e0: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x4884e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4884e4: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x4884E4u;
    {
        const bool branch_taken_0x4884e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4884e4) {
            ctx->pc = 0x4884E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4884E4u;
            // 0x4884e8: 0x90880000  lbu         $t0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488580u;
            goto label_488580;
        }
    }
    ctx->pc = 0x4884ECu;
    // 0x4884ec: 0x240b0800  addiu       $t3, $zero, 0x800
    ctx->pc = 0x4884ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4884f0: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x4884f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4884f4: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x4884f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_4884f8:
    // 0x4884f8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4884F8u;
    {
        const bool branch_taken_0x4884f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4884f8) {
            ctx->pc = 0x4884FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4884F8u;
            // 0x4884fc: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488518u;
            goto label_488518;
        }
    }
    ctx->pc = 0x488500u;
    // 0x488500: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x488500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x488504: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x488504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x488508: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x488508u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48850c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x48850Cu;
    {
        const bool branch_taken_0x48850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48850Cu;
        // 0x488510: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48850c) {
            ctx->pc = 0x48856Cu;
            goto label_48856c;
        }
    }
    ctx->pc = 0x488514u;
    // 0x488514: 0x0  nop
    ctx->pc = 0x488514u;
    // NOP
label_488518:
    // 0x488518: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x488518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48851c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x48851cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x488520: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x488520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x488524: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x488524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x488528: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x488528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48852c: 0x306607ff  andi        $a2, $v1, 0x7FF
    ctx->pc = 0x48852cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x488530: 0x312c3  sra         $v0, $v1, 11
    ctx->pc = 0x488530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
    // 0x488534: 0x166300a  movz        $a2, $t3, $a2
    ctx->pc = 0x488534u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 11));
    // 0x488538: 0xa63823  subu        $a3, $a1, $a2
    ctx->pc = 0x488538u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x48853c: 0x3046001f  andi        $a2, $v0, 0x1F
    ctx->pc = 0x48853cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x488540: 0x146300a  movz        $a2, $t2, $a2
    ctx->pc = 0x488540u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 10));
    // 0x488544: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x488544u;
    {
        const bool branch_taken_0x488544 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x488548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488544u;
        // 0x488548: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488544) {
            ctx->pc = 0x48856Cu;
            goto label_48856c;
        }
    }
    ctx->pc = 0x48854Cu;
    // 0x48854c: 0x0  nop
    ctx->pc = 0x48854cu;
    // NOP
label_488550:
    // 0x488550: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x488550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x488554: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x488554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x488558: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x488558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x48855c: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0x48855cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x488560: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x488560u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x488564: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x488564u;
    {
        const bool branch_taken_0x488564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x488568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488564u;
        // 0x488568: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488564) {
            ctx->pc = 0x488550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488550;
        }
    }
    ctx->pc = 0x48856Cu;
label_48856c:
    // 0x48856c: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x48856cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x488570: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x488570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x488574: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x488574u;
    {
        const bool branch_taken_0x488574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x488578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488574u;
        // 0x488578: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x488574) {
            ctx->pc = 0x4884F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4884f8;
        }
    }
    ctx->pc = 0x48857Cu;
    // 0x48857c: 0x90880000  lbu         $t0, 0x0($a0)
    ctx->pc = 0x48857cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_488580:
    // 0x488580: 0x1500ffd7  bnez        $t0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x488580u;
    {
        const bool branch_taken_0x488580 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x488584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488580u;
        // 0x488584: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488580) {
            ctx->pc = 0x4884E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4884e0;
        }
    }
    ctx->pc = 0x488588u;
label_488588:
    // 0x488588: 0x3e00008  jr          $ra
    ctx->pc = 0x488588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488588u;
        // 0x48858c: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488590u;
}

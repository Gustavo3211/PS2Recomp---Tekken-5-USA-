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

// Function: sub_00214520
// Address: 0x214520 - 0x2146d8
void sub_00214520_0x214520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214520_0x214520");
#endif

    switch (ctx->pc) {
        case 0x214548u: goto label_214548;
        case 0x214570u: goto label_214570;
        case 0x2145e0u: goto label_2145e0;
        case 0x214658u: goto label_214658;
        default: break;
    }

    ctx->pc = 0x214520u;

    // 0x214520: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x214520u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x214524: 0xa380c901  sb          $zero, -0x36FF($gp)
    ctx->pc = 0x214524u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294953217), (uint8_t)GPR_U32(ctx, 0));
    // 0x214528: 0x3c0c003b  lui         $t4, 0x3B
    ctx->pc = 0x214528u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)59 << 16));
    // 0x21452c: 0xa380c902  sb          $zero, -0x36FE($gp)
    ctx->pc = 0x21452cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294953218), (uint8_t)GPR_U32(ctx, 0));
    // 0x214530: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x214530u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x214534: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x214534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x214538: 0x8d29b70c  lw          $t1, -0x48F4($t1)
    ctx->pc = 0x214538u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294948620)));
    // 0x21453c: 0x18c0001e  blez        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x21453Cu;
    {
        const bool branch_taken_0x21453c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x214540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21453Cu;
        // 0x214540: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21453c) {
            ctx->pc = 0x2145B8u;
            goto label_2145b8;
        }
    }
    ctx->pc = 0x214544u;
    // 0x214544: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x214544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_214548:
    // 0x214548: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x214548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21454c: 0x55420017  bnel        $t2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21454Cu;
    {
        const bool branch_taken_0x21454c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x21454c) {
            ctx->pc = 0x214550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21454Cu;
            // 0x214550: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2145ACu;
            goto label_2145ac;
        }
    }
    ctx->pc = 0x214554u;
    // 0x214554: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x214554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x214558: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x214558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x21455c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x21455cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x214560: 0x240b001c  addiu       $t3, $zero, 0x1C
    ctx->pc = 0x214560u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x214564: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x214564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x214568: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x214568u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21456c: 0x0  nop
    ctx->pc = 0x21456cu;
    // NOP
label_214570:
    // 0x214570: 0x10eb0005  beq         $a3, $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x214570u;
    {
        const bool branch_taken_0x214570 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x214574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214570u;
        // 0x214574: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214570) {
            ctx->pc = 0x214588u;
            goto label_214588;
        }
    }
    ctx->pc = 0x214578u;
    // 0x214578: 0x10e40007  beq         $a3, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x214578u;
    {
        const bool branch_taken_0x214578 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x21457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214578u;
        // 0x21457c: 0x9382c902  lbu         $v0, -0x36FE($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294953218)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214578) {
            ctx->pc = 0x214598u;
            goto label_214598;
        }
    }
    ctx->pc = 0x214580u;
    // 0x214580: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x214580u;
    {
        const bool branch_taken_0x214580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214580) {
            ctx->pc = 0x2145A0u;
            goto label_2145a0;
        }
    }
    ctx->pc = 0x214588u;
label_214588:
    // 0x214588: 0x9382c901  lbu         $v0, -0x36FF($gp)
    ctx->pc = 0x214588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294953217)));
    // 0x21458c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x214590: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x214590u;
    {
        const bool branch_taken_0x214590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214590u;
        // 0x214594: 0xa382c901  sb          $v0, -0x36FF($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294953217), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214590) {
            ctx->pc = 0x2145A0u;
            goto label_2145a0;
        }
    }
    ctx->pc = 0x214598u;
label_214598:
    // 0x214598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x214598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21459c: 0xa382c902  sb          $v0, -0x36FE($gp)
    ctx->pc = 0x21459cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294953218), (uint8_t)GPR_U32(ctx, 2));
label_2145a0:
    // 0x2145a0: 0x54e3fff3  bnel        $a3, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2145A0u;
    {
        const bool branch_taken_0x2145a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2145a0) {
            ctx->pc = 0x2145A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2145A0u;
            // 0x2145a4: 0x91070000  lbu         $a3, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214570;
        }
    }
    ctx->pc = 0x2145A8u;
    // 0x2145a8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2145a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2145ac:
    // 0x2145ac: 0x146102a  slt         $v0, $t2, $a2
    ctx->pc = 0x2145acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2145b0: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2145B0u;
    {
        const bool branch_taken_0x2145b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2145b0) {
            ctx->pc = 0x2145B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2145B0u;
            // 0x2145b4: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214548;
        }
    }
    ctx->pc = 0x2145B8u;
label_2145b8:
    // 0x2145b8: 0x2582b708  addiu       $v0, $t4, -0x48F8
    ctx->pc = 0x2145b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294948616));
    // 0x2145bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2145bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145c0: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2145c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2145c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2145c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2145c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2145c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2145cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2145ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145d0: 0x1880000e  blez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2145D0u;
    {
        const bool branch_taken_0x2145d0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2145D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145D0u;
        // 0x2145d4: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145d0) {
            ctx->pc = 0x21460Cu;
            goto label_21460c;
        }
    }
    ctx->pc = 0x2145D8u;
    // 0x2145d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2145D8u;
    {
        const bool branch_taken_0x2145d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145D8u;
        // 0x2145dc: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145d8) {
            ctx->pc = 0x2145FCu;
            goto label_2145fc;
        }
    }
    ctx->pc = 0x2145E0u;
label_2145e0:
    // 0x2145e0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2145e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2145e4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2145e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2145e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2145e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2145ec: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x2145ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2145f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2145F0u;
    {
        const bool branch_taken_0x2145f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145F0u;
        // 0x2145f4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145f0) {
            ctx->pc = 0x21460Cu;
            goto label_21460c;
        }
    }
    ctx->pc = 0x2145F8u;
    // 0x2145f8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2145f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2145fc:
    // 0x2145fc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2145fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214600: 0x5446fff7  bnel        $v0, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x214600u;
    {
        const bool branch_taken_0x214600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x214600) {
            ctx->pc = 0x214604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214600u;
            // 0x214604: 0x2583b708  addiu       $v1, $t4, -0x48F8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294948616));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2145E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2145e0;
        }
    }
    ctx->pc = 0x214608u;
    // 0x214608: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x214608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21460c:
    // 0x21460c: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21460Cu;
    {
        const bool branch_taken_0x21460c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x214610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21460Cu;
        // 0x214610: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21460c) {
            ctx->pc = 0x214630u;
            goto label_214630;
        }
    }
    ctx->pc = 0x214614u;
    // 0x214614: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x214614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x214618: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x214618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21461c: 0x24425970  addiu       $v0, $v0, 0x5970
    ctx->pc = 0x21461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22896));
    // 0x214620: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x214620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x214624: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x214624u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x155972u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x155972u, _value); } while (0);
    // 0x214628: 0x3e00008  jr          $ra
    ctx->pc = 0x214628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214628u;
        // 0x21462c: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214630u;
label_214630:
    // 0x214630: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x214630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x214634: 0x2442b714  addiu       $v0, $v0, -0x48EC
    ctx->pc = 0x214634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948628));
    // 0x214638: 0x24665970  addiu       $a2, $v1, 0x5970
    ctx->pc = 0x214638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 22896));
    // 0x21463c: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x21463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x214640: 0x2409001b  addiu       $t1, $zero, 0x1B
    ctx->pc = 0x214640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x214644: 0x248a0008  addiu       $t2, $a0, 0x8
    ctx->pc = 0x214644u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x214648: 0x240c001c  addiu       $t4, $zero, 0x1C
    ctx->pc = 0x214648u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x21464c: 0x240b001e  addiu       $t3, $zero, 0x1E
    ctx->pc = 0x21464cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x214650: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x214650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214654: 0x0  nop
    ctx->pc = 0x214654u;
    // NOP
label_214658:
    // 0x214658: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x214658u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21465c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21465cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x214660: 0x10e90015  beq         $a3, $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x214660u;
    {
        const bool branch_taken_0x214660 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x214664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214660u;
        // 0x214664: 0x2ce2001c  sltiu       $v0, $a3, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214660) {
            ctx->pc = 0x2146B8u;
            goto label_2146b8;
        }
    }
    ctx->pc = 0x214668u;
    // 0x214668: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x214668u;
    {
        const bool branch_taken_0x214668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214668) {
            ctx->pc = 0x21466Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214668u;
            // 0x21466c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2146BCu;
            goto label_2146bc;
        }
    }
    ctx->pc = 0x214670u;
    // 0x214670: 0x10ec0005  beq         $a3, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x214670u;
    {
        const bool branch_taken_0x214670 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 12));
        ctx->pc = 0x214674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214670u;
        // 0x214674: 0x9382c901  lbu         $v0, -0x36FF($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294953217)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214670) {
            ctx->pc = 0x214688u;
            goto label_214688;
        }
    }
    ctx->pc = 0x214678u;
    // 0x214678: 0x50eb0009  beql        $a3, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x214678u;
    {
        const bool branch_taken_0x214678 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        if (branch_taken_0x214678) {
            ctx->pc = 0x21467Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214678u;
            // 0x21467c: 0x9382c902  lbu         $v0, -0x36FE($gp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294953218)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214680u;
    // 0x214680: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x214680u;
    {
        const bool branch_taken_0x214680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214680u;
        // 0x214684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214680) {
            ctx->pc = 0x2146BCu;
            goto label_2146bc;
        }
    }
    ctx->pc = 0x214688u;
label_214688:
    // 0x214688: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x214688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21468c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x21468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x214690: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214694: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x214694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214698: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x214698u;
    {
        const bool branch_taken_0x214698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214698u;
        // 0x21469c: 0xa384c901  sb          $a0, -0x36FF($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294953217), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214698) {
            ctx->pc = 0x2146BCu;
            goto label_2146bc;
        }
    }
    ctx->pc = 0x2146A0u;
label_2146a0:
    // 0x2146a0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2146a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2146a4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2146a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2146a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2146a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2146ac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2146acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2146b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2146B0u;
    {
        const bool branch_taken_0x2146b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2146B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146B0u;
        // 0x2146b4: 0xa384c902  sb          $a0, -0x36FE($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294953218), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146b0) {
            ctx->pc = 0x2146BCu;
            goto label_2146bc;
        }
    }
    ctx->pc = 0x2146B8u;
label_2146b8:
    // 0x2146b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2146b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2146bc:
    // 0x2146bc: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x2146bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2146c0: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x2146c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2146c4: 0x14e9ffe4  bne         $a3, $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2146C4u;
    {
        const bool branch_taken_0x2146c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x2146C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146C4u;
        // 0x2146c8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146c4) {
            ctx->pc = 0x214658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214658;
        }
    }
    ctx->pc = 0x2146CCu;
    // 0x2146cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2146CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2146CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2146D4u;
    // 0x2146d4: 0x0  nop
    ctx->pc = 0x2146d4u;
    // NOP
    ctx->pc = 0x2146d8u;
}

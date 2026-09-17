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

// Function: sub_002F0D38
// Address: 0x2f0d38 - 0x2f0f08
void sub_002F0D38_0x2f0d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0D38_0x2f0d38");
#endif

    switch (ctx->pc) {
        case 0x2f0d6cu: goto label_2f0d6c;
        case 0x2f0e00u: goto label_2f0e00;
        case 0x2f0e08u: goto label_2f0e08;
        case 0x2f0e50u: goto label_2f0e50;
        case 0x2f0eb0u: goto label_2f0eb0;
        default: break;
    }

    ctx->pc = 0x2f0d38u;

    // 0x2f0d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0d3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f0d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f0d40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0d44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f0d4c: 0x14a20068  bne         $a1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2F0D4Cu;
    {
        const bool branch_taken_0x2f0d4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D4Cu;
        // 0x2f0d50: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d4c) {
            ctx->pc = 0x2F0EF0u;
            goto label_2f0ef0;
        }
    }
    ctx->pc = 0x2F0D54u;
    // 0x2f0d54: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f0d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0d58: 0x56110066  bnel        $s0, $s1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2F0D58u;
    {
        const bool branch_taken_0x2f0d58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2f0d58) {
            ctx->pc = 0x2F0D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0D58u;
            // 0x2f0d5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0EF4u;
            goto label_2f0ef4;
        }
    }
    ctx->pc = 0x2F0D60u;
    // 0x2f0d60: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2f0d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2f0d64: 0xc0bc17a  jal         func_2F05E8
    ctx->pc = 0x2F0D64u;
    SET_GPR_U32(ctx, 31, 0x2F0D6Cu);
    ctx->pc = 0x2F0D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D64u;
    // 0x2f0d68: 0x24844520  addiu       $a0, $a0, 0x4520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F05E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F05E8u, 0x2F0D64u, 0x2F0D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D6Cu;
label_2f0d6c:
    // 0x2f0d6c: 0x16110061  bne         $s0, $s1, . + 4 + (0x61 << 2)
    ctx->pc = 0x2F0D6Cu;
    {
        const bool branch_taken_0x2f0d6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F0D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D6Cu;
        // 0x2f0d70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d6c) {
            ctx->pc = 0x2F0EF4u;
            goto label_2f0ef4;
        }
    }
    ctx->pc = 0x2F0D74u;
    // 0x2f0d74: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0d78: 0x3c0c0046  lui         $t4, 0x46
    ctx->pc = 0x2f0d78u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)70 << 16));
    // 0x2f0d7c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2f0d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2f0d80: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x2f0d80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x2f0d84: 0x3c090046  lui         $t1, 0x46
    ctx->pc = 0x2f0d84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)70 << 16));
    // 0x2f0d88: 0x3c0a0046  lui         $t2, 0x46
    ctx->pc = 0x2f0d88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)70 << 16));
    // 0x2f0d8c: 0x2442f454  addiu       $v0, $v0, -0xBAC
    ctx->pc = 0x2f0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964308));
    // 0x2f0d90: 0x25830aa0  addiu       $v1, $t4, 0xAA0
    ctx->pc = 0x2f0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 2720));
    // 0x2f0d94: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2f0d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2f0d98: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2f0d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2f0d9c: 0x24c60a40  addiu       $a2, $a2, 0xA40
    ctx->pc = 0x2f0d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2624));
    // 0x2f0da0: 0x25080a20  addiu       $t0, $t0, 0xA20
    ctx->pc = 0x2f0da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2592));
    // 0x2f0da4: 0x25290a00  addiu       $t1, $t1, 0xA00
    ctx->pc = 0x2f0da4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2560));
    // 0x2f0da8: 0x254a09e0  addiu       $t2, $t2, 0x9E0
    ctx->pc = 0x2f0da8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2528));
    // 0x2f0dac: 0x24840a80  addiu       $a0, $a0, 0xA80
    ctx->pc = 0x2f0dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2688));
    // 0x2f0db0: 0x24a50a60  addiu       $a1, $a1, 0xA60
    ctx->pc = 0x2f0db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2656));
    // 0x2f0db4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x2f0db4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x2f0db8: 0xac46005c  sw          $a2, 0x5C($v0)
    ctx->pc = 0x2f0db8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3EF4B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF4B0u, _value); } while (0);
    // 0x2f0dbc: 0xac480068  sw          $t0, 0x68($v0)
    ctx->pc = 0x2f0dbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x3EF4BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF4BCu, _value); } while (0);
    // 0x2f0dc0: 0x244b00a8  addiu       $t3, $v0, 0xA8
    ctx->pc = 0x2f0dc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x2f0dc4: 0xac490074  sw          $t1, 0x74($v0)
    ctx->pc = 0x2f0dc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x3EF4C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF4C8u, _value); } while (0);
    // 0x2f0dc8: 0x24e709c0  addiu       $a3, $a3, 0x9C0
    ctx->pc = 0x2f0dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2496));
    // 0x2f0dcc: 0xac4a008c  sw          $t2, 0x8C($v0)
    ctx->pc = 0x2f0dccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3EF4E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF4E0u, _value); } while (0);
    // 0x2f0dd0: 0xac4300a4  sw          $v1, 0xA4($v0)
    ctx->pc = 0x2f0dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF4F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF4F8u, _value); } while (0);
    // 0x2f0dd4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2f0dd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF468u, _value); } while (0);
    // 0x2f0dd8: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x2f0dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF474u, _value); } while (0);
    // 0x2f0ddc: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x2f0ddcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF480u, _value); } while (0);
    // 0x2f0de0: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x2f0de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF48Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF48Cu, _value); } while (0);
    // 0x2f0de4: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x2f0de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF498u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF498u, _value); } while (0);
    // 0x2f0de8: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x2f0de8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF4D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF4D4u, _value); } while (0);
    // 0x2f0dec: 0xac430098  sw          $v1, 0x98($v0)
    ctx->pc = 0x2f0decu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF4ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF4ECu, _value); } while (0);
    // 0x2f0df0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2f0df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EF45Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF45Cu, _value); } while (0);
    // 0x2f0df4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0df8: 0xac450050  sw          $a1, 0x50($v0)
    ctx->pc = 0x2f0df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3EF4A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF4A4u, _value); } while (0);
    // 0x2f0dfc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f0dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0e00:
    // 0x2f0e00: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2f0e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e04: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2f0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f0e08:
    // 0x2f0e08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f0e0c: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x2f0e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x2f0e10: 0x0  nop
    ctx->pc = 0x2f0e10u;
    // NOP
    // 0x2f0e14: 0x0  nop
    ctx->pc = 0x2f0e14u;
    // NOP
    // 0x2f0e18: 0x0  nop
    ctx->pc = 0x2f0e18u;
    // NOP
    // 0x2f0e1c: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F0E1Cu;
    {
        const bool branch_taken_0x2f0e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F0E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E1Cu;
        // 0x2f0e20: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e1c) {
            ctx->pc = 0x2F0E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0e08;
        }
    }
    ctx->pc = 0x2F0E24u;
    // 0x2f0e24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2f0e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f0e28: 0x1485fff5  bne         $a0, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F0E28u;
    {
        const bool branch_taken_0x2f0e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E28u;
        // 0x2f0e2c: 0x256b0060  addiu       $t3, $t3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e28) {
            ctx->pc = 0x2F0E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0e00;
        }
    }
    ctx->pc = 0x2F0E30u;
    // 0x2f0e30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0e34: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f0e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f0e38: 0x2442f450  addiu       $v0, $v0, -0xBB0
    ctx->pc = 0x2f0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964304));
    // 0x2f0e3c: 0x246309c0  addiu       $v1, $v1, 0x9C0
    ctx->pc = 0x2f0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2496));
    // 0x2f0e40: 0x2442016c  addiu       $v0, $v0, 0x16C
    ctx->pc = 0x2f0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 364));
    // 0x2f0e44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0e48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f0e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0e4c: 0x0  nop
    ctx->pc = 0x2f0e4cu;
    // NOP
label_2f0e50:
    // 0x2f0e50: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2f0e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f0e54: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2f0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2f0e58: 0x0  nop
    ctx->pc = 0x2f0e58u;
    // NOP
    // 0x2f0e5c: 0x0  nop
    ctx->pc = 0x2f0e5cu;
    // NOP
    // 0x2f0e60: 0x0  nop
    ctx->pc = 0x2f0e60u;
    // NOP
    // 0x2f0e64: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F0E64u;
    {
        const bool branch_taken_0x2f0e64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E64u;
        // 0x2f0e68: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e64) {
            ctx->pc = 0x2F0E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0e50;
        }
    }
    ctx->pc = 0x2F0E6Cu;
    // 0x2f0e6c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0e70: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2f0e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2f0e74: 0x2442f5d4  addiu       $v0, $v0, -0xA2C
    ctx->pc = 0x2f0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964692));
    // 0x2f0e78: 0x24840960  addiu       $a0, $a0, 0x960
    ctx->pc = 0x2f0e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2400));
    // 0x2f0e7c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f0e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f0e80: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2f0e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2f0e84: 0x246309a0  addiu       $v1, $v1, 0x9A0
    ctx->pc = 0x2f0e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2464));
    // 0x2f0e88: 0x24a50980  addiu       $a1, $a1, 0x980
    ctx->pc = 0x2f0e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2432));
    // 0x2f0e8c: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x2f0e8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EF5F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF5F8u, _value); } while (0);
    // 0x2f0e90: 0x24460048  addiu       $a2, $v0, 0x48
    ctx->pc = 0x2f0e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x2f0e94: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x2f0e94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EF608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF608u, _value); } while (0);
    // 0x2f0e98: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2f0e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e9c: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x2f0e9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EF618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF618u, _value); } while (0);
    // 0x2f0ea0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2f0ea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF5DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF5DCu, _value); } while (0);
    // 0x2f0ea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0ea8: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2f0ea8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3EF5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF5E8u, _value); } while (0);
    // 0x2f0eac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f0eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0eb0:
    // 0x2f0eb0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f0eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f0eb4: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x2f0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x2f0eb8: 0x0  nop
    ctx->pc = 0x2f0eb8u;
    // NOP
    // 0x2f0ebc: 0x0  nop
    ctx->pc = 0x2f0ebcu;
    // NOP
    // 0x2f0ec0: 0x0  nop
    ctx->pc = 0x2f0ec0u;
    // NOP
    // 0x2f0ec4: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F0EC4u;
    {
        const bool branch_taken_0x2f0ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EC4u;
        // 0x2f0ec8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ec4) {
            ctx->pc = 0x2F0EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0eb0;
        }
    }
    ctx->pc = 0x2F0ECCu;
    // 0x2f0ecc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0ed0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f0ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f0ed4: 0x2442f640  addiu       $v0, $v0, -0x9C0
    ctx->pc = 0x2f0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x2f0ed8: 0x24630940  addiu       $v1, $v1, 0x940
    ctx->pc = 0x2f0ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2368));
    // 0x2f0edc: 0x25840aa0  addiu       $a0, $t4, 0xAA0
    ctx->pc = 0x2f0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 2720));
    // 0x2f0ee0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x2f0ee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF66Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF66Cu, _value); } while (0);
    // 0x2f0ee4: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x2f0ee4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EF684u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF684u, _value); } while (0);
    // 0x2f0ee8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2f0ee8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF654u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF654u, _value); } while (0);
    // 0x2f0eec: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x2f0eecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EF678u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF678u, _value); } while (0);
label_2f0ef0:
    // 0x2f0ef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0ef4:
    // 0x2f0ef4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0ef8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0efc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EFCu;
        // 0x2f0f00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0F04u;
    // 0x2f0f04: 0x0  nop
    ctx->pc = 0x2f0f04u;
    // NOP
    ctx->pc = 0x2f0f08u;
}

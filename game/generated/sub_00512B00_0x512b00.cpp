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

// Function: sub_00512B00
// Address: 0x512b00 - 0x512bc8
void sub_00512B00_0x512b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512B00_0x512b00");
#endif

    switch (ctx->pc) {
        case 0x512b84u: goto label_512b84;
        default: break;
    }

    ctx->pc = 0x512b00u;

    // 0x512b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x512b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x512b04: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x512b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x512b08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x512b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x512b0c: 0x2472ca40  addiu       $s2, $v1, -0x35C0
    ctx->pc = 0x512b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
    // 0x512b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x512b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x512b14: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x512b14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x512b18: 0x35292000  ori         $t1, $t1, 0x2000
    ctx->pc = 0x512b18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8192);
    // 0x512b1c: 0x1324821  addu        $t1, $t1, $s2
    ctx->pc = 0x512b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x512b20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x512b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x512b24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x512b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x512b28: 0x8d300000  lw          $s0, 0x0($t1)
    ctx->pc = 0x512b28u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8FEA40u));
    // 0x512b2c: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x512b2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x512b30: 0x460001e  bltz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x512B30u;
    {
        const bool branch_taken_0x512b30 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x512B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512B30u;
        // 0x512b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512b30) {
            ctx->pc = 0x512BACu;
            goto label_512bac;
        }
    }
    ctx->pc = 0x512B38u;
    // 0x512b38: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x512b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x512b3c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x512b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x512b40: 0x2484f080  addiu       $a0, $a0, -0xF80
    ctx->pc = 0x512b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x512b44: 0x24854ef0  addiu       $a1, $a0, 0x4EF0
    ctx->pc = 0x512b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20208));
    // 0x512b48: 0x24864ef2  addiu       $a2, $a0, 0x4EF2
    ctx->pc = 0x512b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20210));
    // 0x512b4c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x512b4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x903F70u));
    // 0x512b50: 0x24910090  addiu       $s1, $a0, 0x90
    ctx->pc = 0x512b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x512b54: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x512b54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x903F72u));
    // 0x512b58: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x512b58u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x8FF110u));
    // 0x512b5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x512b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x512b60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x512b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x512b64: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x512b64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x512b68: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x512b68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x903F70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903F70u, _value); } while (0);
    // 0x512b6c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x512b6cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x903F72u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903F72u, _value); } while (0);
    // 0x512b70: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x512B70u;
    {
        const bool branch_taken_0x512b70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x512B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512B70u;
        // 0x512b74: 0xac904ef4  sw          $s0, 0x4EF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512b70) {
            ctx->pc = 0x512B88u;
            goto label_512b88;
        }
    }
    ctx->pc = 0x512B78u;
    // 0x512b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x512b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512b7c: 0xc13e4a6  jal         func_4F9298
    ctx->pc = 0x512B7Cu;
    SET_GPR_U32(ctx, 31, 0x512B84u);
    ctx->pc = 0x512B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512B7Cu;
    // 0x512b80: 0x240501c8  addiu       $a1, $zero, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9298u, 0x512B7Cu, 0x512B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512B84u;
label_512b84:
    // 0x512b84: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x512b84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_512b88:
    // 0x512b88: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x512b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x512b8c: 0x34631a00  ori         $v1, $v1, 0x1A00
    ctx->pc = 0x512b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6656);
    // 0x512b90: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x512b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x512b94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x512b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512b98: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x512b98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x512b9c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x512b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x512ba0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x512ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x512ba4: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x512ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x512ba8: 0xad100004  sw          $s0, 0x4($t0)
    ctx->pc = 0x512ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 16));
label_512bac:
    // 0x512bac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x512bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x512bb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x512bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x512bb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x512bb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x512bb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x512bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x512bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x512BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512BBCu;
        // 0x512bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512BC4u;
    // 0x512bc4: 0x0  nop
    ctx->pc = 0x512bc4u;
    // NOP
    ctx->pc = 0x512bc8u;
}

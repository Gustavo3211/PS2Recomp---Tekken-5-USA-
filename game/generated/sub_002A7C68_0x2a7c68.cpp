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

// Function: sub_002A7C68
// Address: 0x2a7c68 - 0x2a7d18
void sub_002A7C68_0x2a7c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7C68_0x2a7c68");
#endif

    switch (ctx->pc) {
        case 0x2a7c88u: goto label_2a7c88;
        default: break;
    }

    ctx->pc = 0x2a7c68u;

    // 0x2a7c68: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x2a7c68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2a7c6c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2a7c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a7c70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a7c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a7c74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a7c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c78: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A7C78u;
    {
        const bool branch_taken_0x2a7c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C78u;
        // 0x2a7c7c: 0x2487019c  addiu       $a3, $a0, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 412));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c78) {
            ctx->pc = 0x2A7D0Cu;
            goto label_2a7d0c;
        }
    }
    ctx->pc = 0x2A7C80u;
    // 0x2a7c80: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2a7c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c84: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a7c84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7c88:
    // 0x2a7c88: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2a7c88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7c8c: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x2a7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2a7c90: 0x24a4ff9f  addiu       $a0, $a1, -0x61
    ctx->pc = 0x2a7c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967199));
    // 0x2a7c94: 0x24a3ffbf  addiu       $v1, $a1, -0x41
    ctx->pc = 0x2a7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967231));
    // 0x2a7c98: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2a7c98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2a7c9c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2a7c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a7ca0: 0x2c63001a  sltiu       $v1, $v1, 0x1A
    ctx->pc = 0x2a7ca0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2a7ca4: 0x2442ffc1  addiu       $v0, $v0, -0x3F
    ctx->pc = 0x2a7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967233));
    // 0x2a7ca8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7CA8u;
    {
        const bool branch_taken_0x2a7ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CA8u;
        // 0x2a7cac: 0x2c84001a  sltiu       $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ca8) {
            ctx->pc = 0x2A7CB8u;
            goto label_2a7cb8;
        }
    }
    ctx->pc = 0x2A7CB0u;
    // 0x2a7cb0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A7CB0u;
    {
        const bool branch_taken_0x2a7cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CB0u;
        // 0x2a7cb4: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7cb0) {
            ctx->pc = 0x2A7CF8u;
            goto label_2a7cf8;
        }
    }
    ctx->pc = 0x2A7CB8u;
label_2a7cb8:
    // 0x2a7cb8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7CB8u;
    {
        const bool branch_taken_0x2a7cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CB8u;
        // 0x2a7cbc: 0x24a2ffd0  addiu       $v0, $a1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7cb8) {
            ctx->pc = 0x2A7CD8u;
            goto label_2a7cd8;
        }
    }
    ctx->pc = 0x2A7CC0u;
    // 0x2a7cc0: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x2a7cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2a7cc4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2a7cc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2a7cc8: 0x2442ffbb  addiu       $v0, $v0, -0x45
    ctx->pc = 0x2a7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967227));
    // 0x2a7ccc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A7CCCu;
    {
        const bool branch_taken_0x2a7ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CCCu;
        // 0x2a7cd0: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ccc) {
            ctx->pc = 0x2A7CF8u;
            goto label_2a7cf8;
        }
    }
    ctx->pc = 0x2A7CD4u;
    // 0x2a7cd4: 0x0  nop
    ctx->pc = 0x2a7cd4u;
    // NOP
label_2a7cd8:
    // 0x2a7cd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7cdc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2a7cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a7ce0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A7CE0u;
    {
        const bool branch_taken_0x2a7ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7ce0) {
            ctx->pc = 0x2A7CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7CE0u;
            // 0x2a7ce4: 0xa4e90000  sh          $t1, 0x0($a3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7CF8u;
            goto label_2a7cf8;
        }
    }
    ctx->pc = 0x2A7CE8u;
    // 0x2a7ce8: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x2a7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2a7cec: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2a7cecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2a7cf0: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2a7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2a7cf4: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x2a7cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_2a7cf8:
    // 0x2a7cf8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a7cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a7cfc: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x2a7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2a7d00: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2a7d00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7d04: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2A7D04u;
    {
        const bool branch_taken_0x2a7d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D04u;
        // 0x2a7d08: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d04) {
            ctx->pc = 0x2A7C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7c88;
        }
    }
    ctx->pc = 0x2A7D0Cu;
label_2a7d0c:
    // 0x2a7d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D0Cu;
        // 0x2a7d10: 0xa4e00000  sh          $zero, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7D14u;
    // 0x2a7d14: 0x0  nop
    ctx->pc = 0x2a7d14u;
    // NOP
    ctx->pc = 0x2a7d18u;
}

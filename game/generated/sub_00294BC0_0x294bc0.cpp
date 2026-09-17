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

// Function: sub_00294BC0
// Address: 0x294bc0 - 0x294c78
void sub_00294BC0_0x294bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294BC0_0x294bc0");
#endif

    switch (ctx->pc) {
        case 0x294c2cu: goto label_294c2c;
        case 0x294c44u: goto label_294c44;
        default: break;
    }

    ctx->pc = 0x294bc0u;

    // 0x294bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294bc4: 0x2cc20023  sltiu       $v0, $a2, 0x23
    ctx->pc = 0x294bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x294bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294bcc: 0x2ca70005  sltiu       $a3, $a1, 0x5
    ctx->pc = 0x294bccu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294bd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x294bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x294bd4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x294BD4u;
    {
        const bool branch_taken_0x294bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BD4u;
        // 0x294bd8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bd4) {
            ctx->pc = 0x294C60u;
            goto label_294c60;
        }
    }
    ctx->pc = 0x294BDCu;
    // 0x294bdc: 0x10e00021  beqz        $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x294BDCu;
    {
        const bool branch_taken_0x294bdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x294BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BDCu;
        // 0x294be0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bdc) {
            ctx->pc = 0x294C64u;
            goto label_294c64;
        }
    }
    ctx->pc = 0x294BE4u;
    // 0x294be4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x294be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x294be8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x294be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x294bec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x294becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x294bf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294bf4: 0x8c500120  lw          $s0, 0x120($v0)
    ctx->pc = 0x294bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x294bf8: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x294BF8u;
    {
        const bool branch_taken_0x294bf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x294BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BF8u;
        // 0x294bfc: 0x8c630094  lw          $v1, 0x94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bf8) {
            ctx->pc = 0x294C60u;
            goto label_294c60;
        }
    }
    ctx->pc = 0x294C00u;
    // 0x294c00: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x294C00u;
    {
        const bool branch_taken_0x294c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294c00) {
            ctx->pc = 0x294C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294C00u;
            // 0x294c04: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294C50u;
            goto label_294c50;
        }
    }
    ctx->pc = 0x294C08u;
    // 0x294c08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x294c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x294c0c: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x294c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x294c10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x294c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x294c14: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x294c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x294c18: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x294c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x294c1c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x294c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x294c20: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x294c20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x294c24: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x294C24u;
    SET_GPR_U32(ctx, 31, 0x294C2Cu);
    ctx->pc = 0x294C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294C24u;
    // 0x294c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x294C24u, 0x294C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C2Cu;
label_294c2c:
    // 0x294c2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x294c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x294c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294c34: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x294C34u;
    {
        const bool branch_taken_0x294c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C34u;
        // 0x294c38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c34) {
            ctx->pc = 0x294C60u;
            goto label_294c60;
        }
    }
    ctx->pc = 0x294C3Cu;
    // 0x294c3c: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x294C3Cu;
    SET_GPR_U32(ctx, 31, 0x294C44u);
    ctx->pc = 0x294C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294C3Cu;
    // 0x294c40: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x294C3Cu, 0x294C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C44u;
label_294c44:
    // 0x294c44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x294C44u;
    {
        const bool branch_taken_0x294c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C44u;
        // 0x294c48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c44) {
            ctx->pc = 0x294C64u;
            goto label_294c64;
        }
    }
    ctx->pc = 0x294C4Cu;
    // 0x294c4c: 0x0  nop
    ctx->pc = 0x294c4cu;
    // NOP
label_294c50:
    // 0x294c50: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x294c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x294c54: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x294c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x294c58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x294c5c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x294c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_294c60:
    // 0x294c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294c64:
    // 0x294c64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x294c64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x294C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C6Cu;
        // 0x294c70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294C74u;
    // 0x294c74: 0x0  nop
    ctx->pc = 0x294c74u;
    // NOP
    ctx->pc = 0x294c78u;
}

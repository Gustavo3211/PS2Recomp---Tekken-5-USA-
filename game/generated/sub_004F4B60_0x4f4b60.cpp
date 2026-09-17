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

// Function: sub_004F4B60
// Address: 0x4f4b60 - 0x4f4c70
void sub_004F4B60_0x4f4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4B60_0x4f4b60");
#endif

    switch (ctx->pc) {
        case 0x4f4b8cu: goto label_4f4b8c;
        case 0x4f4bdcu: goto label_4f4bdc;
        case 0x4f4be4u: goto label_4f4be4;
        case 0x4f4c34u: goto label_4f4c34;
        default: break;
    }

    ctx->pc = 0x4f4b60u;

    // 0x4f4b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f4b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f4b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f4b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f4b68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f4b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4b6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f4b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f4b70: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4f4b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4f4b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f4b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f4b78: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f4b78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f4b7c: 0x440001d  bltz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4F4B7Cu;
    {
        const bool branch_taken_0x4f4b7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B7Cu;
        // 0x4f4b80: 0x26090010  addiu       $t1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4b7c) {
            ctx->pc = 0x4F4BF4u;
            goto label_4f4bf4;
        }
    }
    ctx->pc = 0x4F4B84u;
    // 0x4f4b84: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F4B84u;
    SET_GPR_U32(ctx, 31, 0x4F4B8Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F4B84u, 0x4F4B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4B8Cu;
label_4f4b8c:
    // 0x4f4b8c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4f4b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4f4b90: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x4f4b90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4f4b94: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4f4b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4f4b98: 0x96070118  lhu         $a3, 0x118($s0)
    ctx->pc = 0x4f4b98u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x4f4b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f4b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4ba0: 0x2442ff4a  addiu       $v0, $v0, -0xB6
    ctx->pc = 0x4f4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967114));
    // 0x4f4ba4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f4ba8: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x4f4ba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4f4bac: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x4f4bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x4f4bb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f4bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f4bb4: 0x946381d8  lhu         $v1, -0x7E28($v1)
    ctx->pc = 0x4f4bb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294935000)));
    // 0x4f4bb8: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x4f4bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f4bbc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4f4bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x4f4bc0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4f4bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f4bc4: 0x94a581e0  lhu         $a1, -0x7E20($a1)
    ctx->pc = 0x4f4bc4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294935008)));
    // 0x4f4bc8: 0xa605015a  sh          $a1, 0x15A($s0)
    ctx->pc = 0x4f4bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f4bcc: 0xa4c724a0  sh          $a3, 0x24A0($a2)
    ctx->pc = 0x4f4bccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9376), (uint16_t)GPR_U32(ctx, 7));
    // 0x4f4bd0: 0x9602011c  lhu         $v0, 0x11C($s0)
    ctx->pc = 0x4f4bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x4f4bd4: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4F4BD4u;
    SET_GPR_U32(ctx, 31, 0x4F4BDCu);
    ctx->pc = 0x4F4BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4BD4u;
    // 0x4f4bd8: 0xa4c224a2  sh          $v0, 0x24A2($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9378), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4F4BD4u, 0x4F4BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4BDCu;
label_4f4bdc:
    // 0x4f4bdc: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4F4BDCu;
    SET_GPR_U32(ctx, 31, 0x4F4BE4u);
    ctx->pc = 0x4F4BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4BDCu;
    // 0x4f4be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4F4BDCu, 0x4F4BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4BE4u;
label_4f4be4:
    // 0x4f4be4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f4be4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f4be8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f4be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f4bec: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f4becu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f4bf0: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x4f4bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4f4bf4:
    // 0x4f4bf4: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x4f4bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4f4bf8: 0x260b0018  addiu       $t3, $s0, 0x18
    ctx->pc = 0x4f4bf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4f4bfc: 0x8e060124  lw          $a2, 0x124($s0)
    ctx->pc = 0x4f4bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x4f4c00: 0x8e070128  lw          $a3, 0x128($s0)
    ctx->pc = 0x4f4c00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x4f4c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f4c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4c08: 0x8e08012c  lw          $t0, 0x12C($s0)
    ctx->pc = 0x4f4c08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x4f4c0c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4f4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f4c10: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4f4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f4c14: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4f4c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f4c18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4f4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4f4c1c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4f4c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4f4c20: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4f4c20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4f4c24: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x4f4c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x4f4c28: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4f4c28u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4f4c2c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4F4C2Cu;
    SET_GPR_U32(ctx, 31, 0x4F4C34u);
    ctx->pc = 0x4F4C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4C2Cu;
    // 0x4f4c30: 0xad650000  sw          $a1, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4F4C2Cu, 0x4F4C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4C34u;
label_4f4c34:
    // 0x4f4c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f4c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4c38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F4C38u;
    {
        const bool branch_taken_0x4f4c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4C38u;
        // 0x4f4c3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4c38) {
            ctx->pc = 0x4F4C58u;
            goto label_4f4c58;
        }
    }
    ctx->pc = 0x4F4C40u;
    // 0x4f4c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f4c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4c44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f4c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f4c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f4c4c: 0x81280fa  j           func_4A03E8
    ctx->pc = 0x4F4C4Cu;
    ctx->pc = 0x4F4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4C4Cu;
    // 0x4f4c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    sub_004A03E8_0x4a03e8(rdram, ctx, runtime); return;
    ctx->pc = 0x4F4C54u;
    // 0x4f4c54: 0x0  nop
    ctx->pc = 0x4f4c54u;
    // NOP
label_4f4c58:
    // 0x4f4c58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f4c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f4c5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f4c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f4c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f4c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f4c64: 0x3e00008  jr          $ra
    ctx->pc = 0x4F4C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4C64u;
        // 0x4f4c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4C6Cu;
    // 0x4f4c6c: 0x0  nop
    ctx->pc = 0x4f4c6cu;
    // NOP
    ctx->pc = 0x4f4c70u;
}

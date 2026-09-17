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

// Function: sub_00247AB8
// Address: 0x247ab8 - 0x247bc0
void sub_00247AB8_0x247ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247AB8_0x247ab8");
#endif

    switch (ctx->pc) {
        case 0x247afcu: goto label_247afc;
        case 0x247b0cu: goto label_247b0c;
        case 0x247b14u: goto label_247b14;
        case 0x247b2cu: goto label_247b2c;
        case 0x247b8cu: goto label_247b8c;
        case 0x247ba8u: goto label_247ba8;
        default: break;
    }

    ctx->pc = 0x247ab8u;

    // 0x247ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247abc: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x247abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x247ac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247ac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ac8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247acc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x247accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x247ad0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x247ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x247ad4: 0x8c446fec  lw          $a0, 0x6FEC($v0)
    ctx->pc = 0x247ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x166FECu));
    // 0x247ad8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x247ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x247adc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x247adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x247ae0: 0x1c600025  bgtz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x247AE0u;
    {
        const bool branch_taken_0x247ae0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x247AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AE0u;
        // 0x247ae4: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ae0) {
            ctx->pc = 0x247B78u;
            goto label_247b78;
        }
    }
    ctx->pc = 0x247AE8u;
    // 0x247ae8: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x247ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x247aec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x247AECu;
    {
        const bool branch_taken_0x247aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AECu;
        // 0x247af0: 0x26110050  addiu       $s1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247aec) {
            ctx->pc = 0x247B0Cu;
            goto label_247b0c;
        }
    }
    ctx->pc = 0x247AF4u;
    // 0x247af4: 0xc092906  jal         func_24A418
    ctx->pc = 0x247AF4u;
    SET_GPR_U32(ctx, 31, 0x247AFCu);
    ctx->pc = 0x247AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247AF4u;
    // 0x247af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A418u, 0x247AF4u, 0x247AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247AFCu;
label_247afc:
    // 0x247afc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247AFCu;
    {
        const bool branch_taken_0x247afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AFCu;
        // 0x247b00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247afc) {
            ctx->pc = 0x247B0Cu;
            goto label_247b0c;
        }
    }
    ctx->pc = 0x247B04u;
    // 0x247b04: 0xc0928fa  jal         func_24A3E8
    ctx->pc = 0x247B04u;
    SET_GPR_U32(ctx, 31, 0x247B0Cu);
    ctx->pc = 0x247B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B04u;
    // 0x247b08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A3E8u, 0x247B04u, 0x247B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B0Cu;
label_247b0c:
    // 0x247b0c: 0xc091f06  jal         func_247C18
    ctx->pc = 0x247B0Cu;
    SET_GPR_U32(ctx, 31, 0x247B14u);
    ctx->pc = 0x247B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B0Cu;
    // 0x247b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247C18u, 0x247B0Cu, 0x247B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B14u;
label_247b14:
    // 0x247b14: 0x8e120074  lw          $s2, 0x74($s0)
    ctx->pc = 0x247b14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x247b18: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x247b18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x247b1c: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x247B1Cu;
    {
        const bool branch_taken_0x247b1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B1Cu;
        // 0x247b20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b1c) {
            ctx->pc = 0x247B64u;
            goto label_247b64;
        }
    }
    ctx->pc = 0x247B24u;
    // 0x247b24: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x247B24u;
    SET_GPR_U32(ctx, 31, 0x247B2Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x247B24u, 0x247B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B2Cu;
label_247b2c:
    // 0x247b2c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x247b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x247b30: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x247b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x247b34: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x247b34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x247b38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x247b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x247b3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x247b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x247b40: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x247b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x247b44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x247b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x247b48: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x247b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x247b4c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x247b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x247b50: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x247b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x247b54: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x247b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x247b58: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x247b58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x247b5c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x247b5cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x247b60: 0x223c3  sra         $a0, $v0, 15
    ctx->pc = 0x247b60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 15));
label_247b64:
    // 0x247b64: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x247b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x247b68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247b6c: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x247b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x247b70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x247b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x247b74: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x247b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_247b78:
    // 0x247b78: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x247b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x247b7c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x247B7Cu;
    {
        const bool branch_taken_0x247b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247b7c) {
            ctx->pc = 0x247B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247B7Cu;
            // 0x247b80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247BACu;
            goto label_247bac;
        }
    }
    ctx->pc = 0x247B84u;
    // 0x247b84: 0xc092906  jal         func_24A418
    ctx->pc = 0x247B84u;
    SET_GPR_U32(ctx, 31, 0x247B8Cu);
    ctx->pc = 0x247B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B84u;
    // 0x247b88: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A418u, 0x247B84u, 0x247B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B8Cu;
label_247b8c:
    // 0x247b8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247B8Cu;
    {
        const bool branch_taken_0x247b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247b8c) {
            ctx->pc = 0x247BA0u;
            goto label_247ba0;
        }
    }
    ctx->pc = 0x247B94u;
    // 0x247b94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x247B94u;
    {
        const bool branch_taken_0x247b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B94u;
        // 0x247b98: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b94) {
            ctx->pc = 0x247BA8u;
            goto label_247ba8;
        }
    }
    ctx->pc = 0x247B9Cu;
    // 0x247b9c: 0x0  nop
    ctx->pc = 0x247b9cu;
    // NOP
label_247ba0:
    // 0x247ba0: 0xc091f20  jal         func_247C80
    ctx->pc = 0x247BA0u;
    SET_GPR_U32(ctx, 31, 0x247BA8u);
    ctx->pc = 0x247BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BA0u;
    // 0x247ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247C80u, 0x247BA0u, 0x247BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BA8u;
label_247ba8:
    // 0x247ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247bac:
    // 0x247bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247bb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x247bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247bb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x247bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x247BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BB8u;
        // 0x247bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247BC0u;
}

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

// Function: sub_0024BBC8
// Address: 0x24bbc8 - 0x24be38
void sub_0024BBC8_0x24bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BBC8_0x24bbc8");
#endif

    switch (ctx->pc) {
        case 0x24bc14u: goto label_24bc14;
        case 0x24bc68u: goto label_24bc68;
        case 0x24bc78u: goto label_24bc78;
        case 0x24bd44u: goto label_24bd44;
        case 0x24bdb0u: goto label_24bdb0;
        case 0x24bdd4u: goto label_24bdd4;
        case 0x24bdf4u: goto label_24bdf4;
        case 0x24be0cu: goto label_24be0c;
        default: break;
    }

    ctx->pc = 0x24bbc8u;

    // 0x24bbc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24bbcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24bbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24bbd0: 0x69080  sll         $s2, $a2, 2
    ctx->pc = 0x24bbd0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24bbd4: 0x25c1021  addu        $v0, $s2, $gp
    ctx->pc = 0x24bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x24bbd8: 0x8c42a858  lw          $v0, -0x57A8($v0)
    ctx->pc = 0x24bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944856)));
    // 0x24bbdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24bbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24bbe0: 0x21bc3  sra         $v1, $v0, 15
    ctx->pc = 0x24bbe0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 15));
    // 0x24bbe4: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x24bbe4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x24bbe8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24bbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24bbec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x24bbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x24bbf0: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x24bbf0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24bbf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24bbf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24bbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24bbfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24bbfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24bc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24bc04: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BC04u;
    {
        const bool branch_taken_0x24bc04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC04u;
        // 0x24bc08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc04) {
            ctx->pc = 0x24BC14u;
            goto label_24bc14;
        }
    }
    ctx->pc = 0x24BC0Cu;
    // 0x24bc0c: 0xc092940  jal         func_24A500
    ctx->pc = 0x24BC0Cu;
    SET_GPR_U32(ctx, 31, 0x24BC14u);
    ctx->pc = 0x24BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC0Cu;
    // 0x24bc10: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x24BC0Cu, 0x24BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC14u;
label_24bc14:
    // 0x24bc14: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x24bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x24bc18: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x24bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24bc1c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BC1Cu;
    {
        const bool branch_taken_0x24bc1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x24BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC1Cu;
        // 0x24bc20: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc1c) {
            ctx->pc = 0x24BC38u;
            goto label_24bc38;
        }
    }
    ctx->pc = 0x24BC24u;
    // 0x24bc24: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x24bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x24bc28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24bc2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24BC2Cu;
    {
        const bool branch_taken_0x24bc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC2Cu;
        // 0x24bc30: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc2c) {
            ctx->pc = 0x24BC4Cu;
            goto label_24bc4c;
        }
    }
    ctx->pc = 0x24BC34u;
    // 0x24bc34: 0x0  nop
    ctx->pc = 0x24bc34u;
    // NOP
label_24bc38:
    // 0x24bc38: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x24bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x24bc3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24bc40: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24bc40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24bc44: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24BC44u;
    {
        const bool branch_taken_0x24bc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bc44) {
            ctx->pc = 0x24BC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BC44u;
            // 0x24bc48: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BC4Cu;
            goto label_24bc4c;
        }
    }
    ctx->pc = 0x24BC4Cu;
label_24bc4c:
    // 0x24bc4c: 0x25c1021  addu        $v0, $s2, $gp
    ctx->pc = 0x24bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 28)));
    // 0x24bc50: 0x8c42a850  lw          $v0, -0x57B0($v0)
    ctx->pc = 0x24bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944848)));
    // 0x24bc54: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x24bc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x24bc58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BC58u;
    {
        const bool branch_taken_0x24bc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bc58) {
            ctx->pc = 0x24BC70u;
            goto label_24bc70;
        }
    }
    ctx->pc = 0x24BC60u;
    // 0x24bc60: 0xc092eee  jal         func_24BBB8
    ctx->pc = 0x24BC60u;
    SET_GPR_U32(ctx, 31, 0x24BC68u);
    ctx->pc = 0x24BC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC60u;
    // 0x24bc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BBB8u, 0x24BC60u, 0x24BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC68u;
label_24bc68:
    // 0x24bc68: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24BC68u;
    {
        const bool branch_taken_0x24bc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC68u;
        // 0x24bc6c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc68) {
            ctx->pc = 0x24BCB8u;
            goto label_24bcb8;
        }
    }
    ctx->pc = 0x24BC70u;
label_24bc70:
    // 0x24bc70: 0xc092940  jal         func_24A500
    ctx->pc = 0x24BC70u;
    SET_GPR_U32(ctx, 31, 0x24BC78u);
    ctx->pc = 0x24BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC70u;
    // 0x24bc74: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x24BC70u, 0x24BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC78u;
label_24bc78:
    // 0x24bc78: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x24bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x24bc7c: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x24bc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x24bc80: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x24bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x24bc84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x24bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24bc88: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x24bc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc8c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x24bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x24bc90: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x24bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24bc94: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x24BC94u;
    {
        const bool branch_taken_0x24bc94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x24bc94) {
            ctx->pc = 0x24BC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BC94u;
            // 0x24bc98: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BC9Cu;
            goto label_24bc9c;
        }
    }
    ctx->pc = 0x24BC9Cu;
label_24bc9c:
    // 0x24bc9c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24bca0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x24bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x24bca4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x24bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x24bca8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24bca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bcac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x24bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24bcb0: 0xac838880  sw          $v1, -0x7780($a0)
    ctx->pc = 0x24bcb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A8880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8880u, _value); } while (0);
    // 0x24bcb4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24bcb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24bcb8:
    // 0x24bcb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bcb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bcbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24bcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24bcc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24bcc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bcc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24bcc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24bcc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24bcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24bccc: 0x3e00008  jr          $ra
    ctx->pc = 0x24BCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCCCu;
        // 0x24bcd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BCD4u;
    // 0x24bcd4: 0x0  nop
    ctx->pc = 0x24bcd4u;
    // NOP
    // 0x24bcd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24bcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24bcdc: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x24bcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x24bce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24bce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24bce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24bcec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24bcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bcf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24bcf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24bcf8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24bcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24bcfc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x24bcfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd00: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24bd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24bd04: 0x24b583c0  addiu       $s5, $a1, -0x7C40
    ctx->pc = 0x24bd04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935488));
    // 0x24bd08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24bd0c: 0x141b83  sra         $v1, $s4, 14
    ctx->pc = 0x24bd0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 20), 14));
    // 0x24bd10: 0x141303  sra         $v0, $s4, 12
    ctx->pc = 0x24bd10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 12));
    // 0x24bd14: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x24bd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x24bd18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24bd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24bd1c: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x24bd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x24bd20: 0x629823  subu        $s3, $v1, $v0
    ctx->pc = 0x24bd20u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24bd24: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x24bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x24bd28: 0x92b20028  lbu         $s2, 0x28($s5)
    ctx->pc = 0x24bd28u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x24bd2c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x24bd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x24bd30: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x24bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24bd34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24bd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd38: 0x8eb10038  lw          $s1, 0x38($s5)
    ctx->pc = 0x24bd38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x24bd3c: 0xc09358e  jal         func_24D638
    ctx->pc = 0x24BD3Cu;
    SET_GPR_U32(ctx, 31, 0x24BD44u);
    ctx->pc = 0x24BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD3Cu;
    // 0x24bd40: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D638u, 0x24BD3Cu, 0x24BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD44u;
label_24bd44:
    // 0x24bd44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24bd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd48: 0x1413c3  sra         $v0, $s4, 15
    ctx->pc = 0x24bd48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 15));
    // 0x24bd4c: 0x141b43  sra         $v1, $s4, 13
    ctx->pc = 0x24bd4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 20), 13));
    // 0x24bd50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24bd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24bd54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x24bd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x24bd58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bd5c: 0xae0500a8  sw          $a1, 0xA8($s0)
    ctx->pc = 0x24bd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 5));
    // 0x24bd60: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24BD60u;
    {
        const bool branch_taken_0x24bd60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x24BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD60u;
        // 0x24bd64: 0x629823  subu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd60) {
            ctx->pc = 0x24BDB8u;
            goto label_24bdb8;
        }
    }
    ctx->pc = 0x24BD68u;
    // 0x24bd68: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x24bd68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24bd6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BD6Cu;
    {
        const bool branch_taken_0x24bd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD6Cu;
        // 0x24bd70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd6c) {
            ctx->pc = 0x24BD88u;
            goto label_24bd88;
        }
    }
    ctx->pc = 0x24BD74u;
    // 0x24bd74: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24BD74u;
    {
        const bool branch_taken_0x24bd74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD74u;
        // 0x24bd78: 0x328200f0  andi        $v0, $s4, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd74) {
            ctx->pc = 0x24BD98u;
            goto label_24bd98;
        }
    }
    ctx->pc = 0x24BD7Cu;
    // 0x24bd7c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x24BD7Cu;
    {
        const bool branch_taken_0x24bd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bd7c) {
            ctx->pc = 0x24BDFCu;
            goto label_24bdfc;
        }
    }
    ctx->pc = 0x24BD84u;
    // 0x24bd84: 0x0  nop
    ctx->pc = 0x24bd84u;
    // NOP
label_24bd88:
    // 0x24bd88: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24BD88u;
    {
        const bool branch_taken_0x24bd88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD88u;
        // 0x24bd8c: 0x328200f0  andi        $v0, $s4, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd88) {
            ctx->pc = 0x24BDE0u;
            goto label_24bde0;
        }
    }
    ctx->pc = 0x24BD90u;
    // 0x24bd90: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x24BD90u;
    {
        const bool branch_taken_0x24bd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bd90) {
            ctx->pc = 0x24BDFCu;
            goto label_24bdfc;
        }
    }
    ctx->pc = 0x24BD98u;
label_24bd98:
    // 0x24bd98: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x24bd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x24bd9c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x24bd9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x24bda0: 0xc2880a  movz        $s1, $a2, $v0
    ctx->pc = 0x24bda0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
    // 0x24bda4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24bda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bda8: 0xc09358e  jal         func_24D638
    ctx->pc = 0x24BDA8u;
    SET_GPR_U32(ctx, 31, 0x24BDB0u);
    ctx->pc = 0x24BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BDA8u;
    // 0x24bdac: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D638u, 0x24BDA8u, 0x24BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDB0u;
label_24bdb0:
    // 0x24bdb0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24BDB0u;
    {
        const bool branch_taken_0x24bdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDB0u;
        // 0x24bdb4: 0xaea20038  sw          $v0, 0x38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdb0) {
            ctx->pc = 0x24BDF8u;
            goto label_24bdf8;
        }
    }
    ctx->pc = 0x24BDB8u;
label_24bdb8:
    // 0x24bdb8: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x24bdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x24bdbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24bdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bdc0: 0x26108858  addiu       $s0, $s0, -0x77A8
    ctx->pc = 0x24bdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x24bdc4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24bdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24bdc8: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x24bdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A888Cu));
    // 0x24bdcc: 0xc09358e  jal         func_24D638
    ctx->pc = 0x24BDCCu;
    SET_GPR_U32(ctx, 31, 0x24BDD4u);
    ctx->pc = 0x24BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BDCCu;
    // 0x24bdd0: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D638u, 0x24BDCCu, 0x24BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDD4u;
label_24bdd4:
    // 0x24bdd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24BDD4u;
    {
        const bool branch_taken_0x24bdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDD4u;
        // 0x24bdd8: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdd4) {
            ctx->pc = 0x24BDF8u;
            goto label_24bdf8;
        }
    }
    ctx->pc = 0x24BDDCu;
    // 0x24bddc: 0x0  nop
    ctx->pc = 0x24bddcu;
    // NOP
label_24bde0:
    // 0x24bde0: 0x92a5002f  lbu         $a1, 0x2F($s5)
    ctx->pc = 0x24bde0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 47)));
    // 0x24bde4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bde8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x24bde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24bdec: 0xc09358e  jal         func_24D638
    ctx->pc = 0x24BDECu;
    SET_GPR_U32(ctx, 31, 0x24BDF4u);
    ctx->pc = 0x24BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BDECu;
    // 0x24bdf0: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D638u, 0x24BDECu, 0x24BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDF4u;
label_24bdf4:
    // 0x24bdf4: 0xa2a2002f  sb          $v0, 0x2F($s5)
    ctx->pc = 0x24bdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 47), (uint8_t)GPR_U32(ctx, 2));
label_24bdf8:
    // 0x24bdf8: 0x328200f0  andi        $v0, $s4, 0xF0
    ctx->pc = 0x24bdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)240);
label_24bdfc:
    // 0x24bdfc: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BDFCu;
    {
        const bool branch_taken_0x24bdfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDFCu;
        // 0x24be00: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdfc) {
            ctx->pc = 0x24BE0Cu;
            goto label_24be0c;
        }
    }
    ctx->pc = 0x24BE04u;
    // 0x24be04: 0xc092940  jal         func_24A500
    ctx->pc = 0x24BE04u;
    SET_GPR_U32(ctx, 31, 0x24BE0Cu);
    ctx->pc = 0x24BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE04u;
    // 0x24be08: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x24BE04u, 0x24BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE0Cu;
label_24be0c:
    // 0x24be0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24be0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24be10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24be14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24be14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24be18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24be18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24be1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24be1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24be20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24be20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24be24: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24be24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24be28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24be28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24be2c: 0x3e00008  jr          $ra
    ctx->pc = 0x24BE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE2Cu;
        // 0x24be30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BE34u;
    // 0x24be34: 0x0  nop
    ctx->pc = 0x24be34u;
    // NOP
    ctx->pc = 0x24be38u;
}

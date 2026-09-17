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

// Function: sub_0036BBC8
// Address: 0x36bbc8 - 0x36bd38
void sub_0036BBC8_0x36bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BBC8_0x36bbc8");
#endif

    switch (ctx->pc) {
        case 0x36bc08u: goto label_36bc08;
        case 0x36bc18u: goto label_36bc18;
        case 0x36bc24u: goto label_36bc24;
        case 0x36bca0u: goto label_36bca0;
        case 0x36bcc0u: goto label_36bcc0;
        case 0x36bcd8u: goto label_36bcd8;
        case 0x36bd14u: goto label_36bd14;
        default: break;
    }

    ctx->pc = 0x36bbc8u;

    // 0x36bbc8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x36bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x36bbcc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x36bbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x36bbd0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x36bbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbd4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x36bbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x36bbd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36bbd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbdc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x36bbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x36bbe0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x36bbe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbe4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x36bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x36bbe8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x36bbe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbec: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x36bbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x36bbf0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x36bbf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbf4: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x36bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x36bbf8: 0x1a200015  blez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x36BBF8u;
    {
        const bool branch_taken_0x36bbf8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x36BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBF8u;
        // 0x36bbfc: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bbf8) {
            ctx->pc = 0x36BC50u;
            goto label_36bc50;
        }
    }
    ctx->pc = 0x36BC00u;
    // 0x36bc00: 0x2415efff  addiu       $s5, $zero, -0x1001
    ctx->pc = 0x36bc00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x36bc04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36bc04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bc08:
    // 0x36bc08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36bc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36bc0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36bc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bc10: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x36BC10u;
    SET_GPR_U32(ctx, 31, 0x36BC18u);
    ctx->pc = 0x36BC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BC10u;
    // 0x36bc14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x36BC10u, 0x36BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC18u;
label_36bc18:
    // 0x36bc18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36bc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bc1c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x36BC1Cu;
    SET_GPR_U32(ctx, 31, 0x36BC24u);
    ctx->pc = 0x36BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BC1Cu;
    // 0x36bc20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x36BC1Cu, 0x36BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC24u;
label_36bc24:
    // 0x36bc24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x36bc24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bc28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36BC28u;
    {
        const bool branch_taken_0x36bc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC28u;
        // 0x36bc2c: 0x211202a  slt         $a0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bc28) {
            ctx->pc = 0x36BC48u;
            goto label_36bc48;
        }
    }
    ctx->pc = 0x36BC30u;
    // 0x36bc30: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BC30u;
    {
        const bool branch_taken_0x36bc30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC30u;
        // 0x36bc34: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bc30) {
            ctx->pc = 0x36BC40u;
            goto label_36bc40;
        }
    }
    ctx->pc = 0x36BC38u;
    // 0x36bc38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x36BC38u;
    {
        const bool branch_taken_0x36bc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC38u;
        // 0x36bc3c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bc38) {
            ctx->pc = 0x36BC44u;
            goto label_36bc44;
        }
    }
    ctx->pc = 0x36BC40u;
label_36bc40:
    // 0x36bc40: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x36bc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_36bc44:
    // 0x36bc44: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x36bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_36bc48:
    // 0x36bc48: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x36BC48u;
    {
        const bool branch_taken_0x36bc48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC48u;
        // 0x36bc4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bc48) {
            ctx->pc = 0x36BC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bc08;
        }
    }
    ctx->pc = 0x36BC50u;
label_36bc50:
    // 0x36bc50: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x36bc50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36bc54: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x36bc54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36bc58: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x36bc58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36bc5c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x36bc5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36bc60: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x36bc60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36bc64: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x36bc64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bc68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x36bc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36bc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x36BC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC6Cu;
        // 0x36bc70: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BC74u;
    // 0x36bc74: 0x0  nop
    ctx->pc = 0x36bc74u;
    // NOP
    // 0x36bc78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36bc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36bc7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36bc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36bc80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36bc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36bc84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36bc84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bc88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36bc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36bc8c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x36bc8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bc90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36bc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36bc94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36bc98: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x36BC98u;
    SET_GPR_U32(ctx, 31, 0x36BCA0u);
    ctx->pc = 0x36BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BC98u;
    // 0x36bc9c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x36BC98u, 0x36BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BCA0u;
label_36bca0:
    // 0x36bca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36bca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bca4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x36BCA4u;
    {
        const bool branch_taken_0x36bca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCA4u;
        // 0x36bca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bca4) {
            ctx->pc = 0x36BCD8u;
            goto label_36bcd8;
        }
    }
    ctx->pc = 0x36BCACu;
    // 0x36bcac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x36bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x36bcb0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x36bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x36bcb4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x36bcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x36bcb8: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x36BCB8u;
    SET_GPR_U32(ctx, 31, 0x36BCC0u);
    ctx->pc = 0x36BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BCB8u;
    // 0x36bcbc: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x36BCB8u, 0x36BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BCC0u;
label_36bcc0:
    // 0x36bcc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36bcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bcc4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36bcc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bcc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BCC8u;
    {
        const bool branch_taken_0x36bcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCC8u;
        // 0x36bccc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bcc8) {
            ctx->pc = 0x36BCD8u;
            goto label_36bcd8;
        }
    }
    ctx->pc = 0x36BCD0u;
    // 0x36bcd0: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x36BCD0u;
    SET_GPR_U32(ctx, 31, 0x36BCD8u);
    ctx->pc = 0x36BCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BCD0u;
    // 0x36bcd4: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x36BCD0u, 0x36BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BCD8u;
label_36bcd8:
    // 0x36bcd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36bcd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bcdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36bcdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36bce0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36bce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bce4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36bce4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36bce8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36bce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36bcec: 0x3e00008  jr          $ra
    ctx->pc = 0x36BCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCECu;
        // 0x36bcf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BCF4u;
    // 0x36bcf4: 0x0  nop
    ctx->pc = 0x36bcf4u;
    // NOP
    // 0x36bcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x36BCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCF8u;
        // 0x36bcfc: 0x8c820130  lw          $v0, 0x130($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BD00u;
    // 0x36bd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36bd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36bd04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36bd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36bd08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36bd0c: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x36BD0Cu;
    SET_GPR_U32(ctx, 31, 0x36BD14u);
    ctx->pc = 0x36BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD0Cu;
    // 0x36bd10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x36BD0Cu, 0x36BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD14u;
label_36bd14:
    // 0x36bd14: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BD14u;
    {
        const bool branch_taken_0x36bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bd14) {
            ctx->pc = 0x36BD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36BD14u;
            // 0x36bd18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36BD24u;
            goto label_36bd24;
        }
    }
    ctx->pc = 0x36BD1Cu;
    // 0x36bd1c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x36bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x36bd20: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x36bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_36bd24:
    // 0x36bd24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36bd24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bd28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36bd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36bd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x36BD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BD2Cu;
        // 0x36bd30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BD34u;
    // 0x36bd34: 0x0  nop
    ctx->pc = 0x36bd34u;
    // NOP
    ctx->pc = 0x36bd38u;
}

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

// Function: sub_00299AE0
// Address: 0x299ae0 - 0x299c28
void sub_00299AE0_0x299ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299AE0_0x299ae0");
#endif

    switch (ctx->pc) {
        case 0x299b2cu: goto label_299b2c;
        case 0x299b4cu: goto label_299b4c;
        case 0x299b80u: goto label_299b80;
        case 0x299b94u: goto label_299b94;
        case 0x299bb8u: goto label_299bb8;
        case 0x299bccu: goto label_299bcc;
        case 0x299bd8u: goto label_299bd8;
        default: break;
    }

    ctx->pc = 0x299ae0u;

    // 0x299ae0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x299ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x299ae4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x299ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x299ae8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x299ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x299aec: 0x24a5c058  addiu       $a1, $a1, -0x3FA8
    ctx->pc = 0x299aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951000));
    // 0x299af0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x299af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x299af4: 0x2412efff  addiu       $s2, $zero, -0x1001
    ctx->pc = 0x299af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x299af8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x299af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x299afc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x299afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b00: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x299b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x299b04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x299b04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b08: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x299b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x299b0c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x299b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x299b10: 0x2416efff  addiu       $s6, $zero, -0x1001
    ctx->pc = 0x299b10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x299b14: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x299b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x299b18: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x299b18u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x299b1c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x299b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x299b20: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x299b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x299b24: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x299B24u;
    SET_GPR_U32(ctx, 31, 0x299B2Cu);
    ctx->pc = 0x299B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B24u;
    // 0x299b28: 0x8e900154  lw          $s0, 0x154($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x299B24u, 0x299B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B2Cu;
label_299b2c:
    // 0x299b2c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x299b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x299b30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b34: 0x26110058  addiu       $s1, $s0, 0x58
    ctx->pc = 0x299b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x299b38: 0x24a5c068  addiu       $a1, $a1, -0x3F98
    ctx->pc = 0x299b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951016));
    // 0x299b3c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x299b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x299b40: 0x26150068  addiu       $s5, $s0, 0x68
    ctx->pc = 0x299b40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x299b44: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x299B44u;
    SET_GPR_U32(ctx, 31, 0x299B4Cu);
    ctx->pc = 0x299B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B44u;
    // 0x299b48: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x299B44u, 0x299B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B4Cu;
label_299b4c:
    // 0x299b4c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x299b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x299b50: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x299b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x299b54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x299b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x299b58: 0x24a5c078  addiu       $a1, $a1, -0x3F88
    ctx->pc = 0x299b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951032));
    // 0x299b5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b60: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x299b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x299b64: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x299b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x299b68: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x299b68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x299b6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x299b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x299b70: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x299b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x299b74: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x299b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x299b78: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x299B78u;
    SET_GPR_U32(ctx, 31, 0x299B80u);
    ctx->pc = 0x299B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B78u;
    // 0x299b7c: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x299B78u, 0x299B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B80u;
label_299b80:
    // 0x299b80: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x299b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x299b84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x299b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x299b88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b8c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x299B8Cu;
    SET_GPR_U32(ctx, 31, 0x299B94u);
    ctx->pc = 0x299B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B8Cu;
    // 0x299b90: 0x24a5c088  addiu       $a1, $a1, -0x3F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x299B8Cu, 0x299B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B94u;
label_299b94:
    // 0x299b94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x299b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299b98: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x299b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x299b9c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x299b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x299ba0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x299ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x299ba4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x299ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x299ba8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x299ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x299bac: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x299bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x299bb0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x299bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x299bb4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x299bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_299bb8:
    // 0x299bb8: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x299bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x299bbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x299bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bc4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x299BC4u;
    SET_GPR_U32(ctx, 31, 0x299BCCu);
    ctx->pc = 0x299BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299BC4u;
    // 0x299bc8: 0x26e5c0a0  addiu       $a1, $s7, -0x3F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x299BC4u, 0x299BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299BCCu;
label_299bcc:
    // 0x299bcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bd0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x299BD0u;
    SET_GPR_U32(ctx, 31, 0x299BD8u);
    ctx->pc = 0x299BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299BD0u;
    // 0x299bd4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x299BD0u, 0x299BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299BD8u;
label_299bd8:
    // 0x299bd8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x299bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x299bdc: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x299bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x299be0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x299be0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299be4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x299be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x299be8: 0x2a64000c  slti        $a0, $s3, 0xC
    ctx->pc = 0x299be8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x299bec: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x299becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x299bf0: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x299bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x299bf4: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x299BF4u;
    {
        const bool branch_taken_0x299bf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x299BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BF4u;
        // 0x299bf8: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299bf4) {
            ctx->pc = 0x299BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299bb8;
        }
    }
    ctx->pc = 0x299BFCu;
    // 0x299bfc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x299bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299c00: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x299c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x299c04: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x299c04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299c08: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x299c08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x299c0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x299c0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299c10: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x299c10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x299c14: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x299c14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299c18: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x299c18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x299c1c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x299c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299c20: 0x3e00008  jr          $ra
    ctx->pc = 0x299C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C20u;
        // 0x299c24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299C28u;
}

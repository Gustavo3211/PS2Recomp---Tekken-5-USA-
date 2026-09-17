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

// Function: sub_002A5AE8
// Address: 0x2a5ae8 - 0x2a6060
void sub_002A5AE8_0x2a5ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5AE8_0x2a5ae8");
#endif

    switch (ctx->pc) {
        case 0x2a5b9cu: goto label_2a5b9c;
        case 0x2a5bc0u: goto label_2a5bc0;
        case 0x2a5be4u: goto label_2a5be4;
        case 0x2a5c20u: goto label_2a5c20;
        case 0x2a5c5cu: goto label_2a5c5c;
        case 0x2a5c98u: goto label_2a5c98;
        case 0x2a5cdcu: goto label_2a5cdc;
        case 0x2a5d4cu: goto label_2a5d4c;
        case 0x2a5d70u: goto label_2a5d70;
        case 0x2a5d88u: goto label_2a5d88;
        case 0x2a5dd8u: goto label_2a5dd8;
        case 0x2a5decu: goto label_2a5dec;
        case 0x2a5e00u: goto label_2a5e00;
        case 0x2a5e0cu: goto label_2a5e0c;
        case 0x2a5e84u: goto label_2a5e84;
        case 0x2a5ec8u: goto label_2a5ec8;
        case 0x2a5f08u: goto label_2a5f08;
        case 0x2a5f40u: goto label_2a5f40;
        case 0x2a5f54u: goto label_2a5f54;
        case 0x2a5f8cu: goto label_2a5f8c;
        case 0x2a5fa8u: goto label_2a5fa8;
        case 0x2a5ff0u: goto label_2a5ff0;
        case 0x2a6000u: goto label_2a6000;
        case 0x2a600cu: goto label_2a600c;
        default: break;
    }

    ctx->pc = 0x2a5ae8u;

    // 0x2a5ae8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a5ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a5aec: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2a5aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2a5af0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a5af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5af4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2a5af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2a5af8: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x2a5af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2a5afc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2a5afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2a5b00: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2a5b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2a5b04: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2a5b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2a5b08: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2a5b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2a5b0c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2a5b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2a5b10: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2a5b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2a5b14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a5b18: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x2a5b18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a5b1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a5b20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5B20u;
    {
        const bool branch_taken_0x2a5b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B20u;
        // 0x2a5b24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b20) {
            ctx->pc = 0x2A5B38u;
            goto label_2a5b38;
        }
    }
    ctx->pc = 0x2A5B28u;
    // 0x2a5b28: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a5b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a5b2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a5b30: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5B30u;
    {
        const bool branch_taken_0x2a5b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B30u;
        // 0x2a5b34: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b30) {
            ctx->pc = 0x2A5B48u;
            goto label_2a5b48;
        }
    }
    ctx->pc = 0x2A5B38u;
label_2a5b38:
    // 0x2a5b38: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a5b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a5b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b40: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a5b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a5b44: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x2a5b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_2a5b48:
    // 0x2a5b48: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2a5b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a5b4c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5B4Cu;
    {
        const bool branch_taken_0x2a5b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5b4c) {
            ctx->pc = 0x2A5B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5B4Cu;
            // 0x2a5b50: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5B68u;
            goto label_2a5b68;
        }
    }
    ctx->pc = 0x2A5B54u;
    // 0x2a5b54: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a5b58: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a5b5c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5B5Cu;
    {
        const bool branch_taken_0x2a5b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5B5Cu;
        // 0x2a5b60: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b5c) {
            ctx->pc = 0x2A5B70u;
            goto label_2a5b70;
        }
    }
    ctx->pc = 0x2A5B64u;
    // 0x2a5b64: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a5b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2a5b68:
    // 0x2a5b68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a5b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b6c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a5b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2a5b70:
    // 0x2a5b70: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2a5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2a5b74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a5b78: 0x2450dcf0  addiu       $s0, $v0, -0x2310
    ctx->pc = 0x2a5b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958320));
    // 0x2a5b7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b80: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5b84: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x2a5b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a5b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5b8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a5b90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a5b94: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5B94u;
    SET_GPR_U32(ctx, 31, 0x2A5B9Cu);
    ctx->pc = 0x2A5B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B94u;
    // 0x2a5b98: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5B94u, 0x2A5B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B9Cu;
label_2a5b9c:
    // 0x2a5b9c: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2a5b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2a5ba0: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x2a5ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x2a5ba4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ba8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5bac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5bb0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a5bb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a5bb8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5BB8u;
    SET_GPR_U32(ctx, 31, 0x2A5BC0u);
    ctx->pc = 0x2A5BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5BB8u;
    // 0x2a5bbc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5BB8u, 0x2A5BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BC0u;
label_2a5bc0:
    // 0x2a5bc0: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2a5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2a5bc4: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x2a5bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x2a5bc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5bcc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5bd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5bd4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a5bd8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a5bdc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5BDCu;
    SET_GPR_U32(ctx, 31, 0x2A5BE4u);
    ctx->pc = 0x2A5BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5BDCu;
    // 0x2a5be0: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5BDCu, 0x2A5BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5BE4u;
label_2a5be4:
    // 0x2a5be4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5be8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5BE8u;
    {
        const bool branch_taken_0x2a5be8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BE8u;
        // 0x2a5bec: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5be8) {
            ctx->pc = 0x2A5BFCu;
            goto label_2a5bfc;
        }
    }
    ctx->pc = 0x2A5BF0u;
    // 0x2a5bf0: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2a5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2a5bf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5bf8: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2a5bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
label_2a5bfc:
    // 0x2a5bfc: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2a5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2a5c00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c04: 0xae4500ac  sw          $a1, 0xAC($s2)
    ctx->pc = 0x2a5c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 5));
    // 0x2a5c08: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5c10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a5c14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a5c18: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5C18u;
    SET_GPR_U32(ctx, 31, 0x2A5C20u);
    ctx->pc = 0x2A5C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C18u;
    // 0x2a5c1c: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5C18u, 0x2A5C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C20u;
label_2a5c20:
    // 0x2a5c20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c24: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5C24u;
    {
        const bool branch_taken_0x2a5c24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C24u;
        // 0x2a5c28: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5c24) {
            ctx->pc = 0x2A5C38u;
            goto label_2a5c38;
        }
    }
    ctx->pc = 0x2A5C2Cu;
    // 0x2a5c2c: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2a5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2a5c30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5c34: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2a5c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
label_2a5c38:
    // 0x2a5c38: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2a5c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2a5c3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c40: 0xae4500b0  sw          $a1, 0xB0($s2)
    ctx->pc = 0x2a5c40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 5));
    // 0x2a5c44: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5c4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a5c50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a5c54: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5C54u;
    SET_GPR_U32(ctx, 31, 0x2A5C5Cu);
    ctx->pc = 0x2A5C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C54u;
    // 0x2a5c58: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5C54u, 0x2A5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C5Cu;
label_2a5c5c:
    // 0x2a5c5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c60: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5C60u;
    {
        const bool branch_taken_0x2a5c60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C60u;
        // 0x2a5c64: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5c60) {
            ctx->pc = 0x2A5C74u;
            goto label_2a5c74;
        }
    }
    ctx->pc = 0x2A5C68u;
    // 0x2a5c68: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2a5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2a5c6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5c70: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2a5c70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
label_2a5c74:
    // 0x2a5c74: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2a5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2a5c78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c7c: 0xae450100  sw          $a1, 0x100($s2)
    ctx->pc = 0x2a5c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 5));
    // 0x2a5c80: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a5c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5c88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a5c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a5c8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a5c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a5c90: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5C90u;
    SET_GPR_U32(ctx, 31, 0x2A5C98u);
    ctx->pc = 0x2A5C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C90u;
    // 0x2a5c94: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5C90u, 0x2A5C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C98u;
label_2a5c98:
    // 0x2a5c98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5C9Cu;
    {
        const bool branch_taken_0x2a5c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C9Cu;
        // 0x2a5ca0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5c9c) {
            ctx->pc = 0x2A5CB0u;
            goto label_2a5cb0;
        }
    }
    ctx->pc = 0x2A5CA4u;
    // 0x2a5ca4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a5ca8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5cac: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a5cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a5cb0:
    // 0x2a5cb0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a5cb4: 0x26510064  addiu       $s1, $s2, 0x64
    ctx->pc = 0x2a5cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x2a5cb8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a5cbc: 0xae440104  sw          $a0, 0x104($s2)
    ctx->pc = 0x2a5cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 4));
    // 0x2a5cc0: 0x2474dd78  addiu       $s4, $v1, -0x2288
    ctx->pc = 0x2a5cc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958456));
    // 0x2a5cc4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2a5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2a5cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ccc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a5cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cd0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a5cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cd4: 0xc0a5bfa  jal         func_296FE8
    ctx->pc = 0x2A5CD4u;
    SET_GPR_U32(ctx, 31, 0x2A5CDCu);
    ctx->pc = 0x2A5CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CD4u;
    // 0x2a5cd8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296FE8u, 0x2A5CD4u, 0x2A5CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CDCu;
label_2a5cdc:
    // 0x2a5cdc: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2a5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2a5ce0: 0x1070000f  beq         $v1, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A5CE0u;
    {
        const bool branch_taken_0x2a5ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CE0u;
        // 0x2a5ce4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ce0) {
            ctx->pc = 0x2A5D20u;
            goto label_2a5d20;
        }
    }
    ctx->pc = 0x2A5CE8u;
    // 0x2a5ce8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5CE8u;
    {
        const bool branch_taken_0x2a5ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ce8) {
            ctx->pc = 0x2A5CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5CE8u;
            // 0x2a5cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5D00u;
            goto label_2a5d00;
        }
    }
    ctx->pc = 0x2A5CF0u;
    // 0x2a5cf0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5CF0u;
    {
        const bool branch_taken_0x2a5cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CF0u;
        // 0x2a5cf4: 0x3c070048  lui         $a3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5cf0) {
            ctx->pc = 0x2A5D18u;
            goto label_2a5d18;
        }
    }
    ctx->pc = 0x2A5CF8u;
    // 0x2a5cf8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2A5CF8u;
    {
        const bool branch_taken_0x2a5cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CF8u;
        // 0x2a5cfc: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5cf8) {
            ctx->pc = 0x2A5D74u;
            goto label_2a5d74;
        }
    }
    ctx->pc = 0x2A5D00u;
label_2a5d00:
    // 0x2a5d00: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A5D00u;
    {
        const bool branch_taken_0x2a5d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D00u;
        // 0x2a5d04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d00) {
            ctx->pc = 0x2A5D30u;
            goto label_2a5d30;
        }
    }
    ctx->pc = 0x2A5D08u;
    // 0x2a5d08: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A5D08u;
    {
        const bool branch_taken_0x2a5d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D08u;
        // 0x2a5d0c: 0x3c060048  lui         $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d08) {
            ctx->pc = 0x2A5D58u;
            goto label_2a5d58;
        }
    }
    ctx->pc = 0x2A5D10u;
    // 0x2a5d10: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2A5D10u;
    {
        const bool branch_taken_0x2a5d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D10u;
        // 0x2a5d14: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d10) {
            ctx->pc = 0x2A5D74u;
            goto label_2a5d74;
        }
    }
    ctx->pc = 0x2A5D18u;
label_2a5d18:
    // 0x2a5d18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5D18u;
    {
        const bool branch_taken_0x2a5d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D18u;
        // 0x2a5d1c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d18) {
            ctx->pc = 0x2A5D3Cu;
            goto label_2a5d3c;
        }
    }
    ctx->pc = 0x2A5D20u;
label_2a5d20:
    // 0x2a5d20: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2a5d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2a5d24: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2a5d24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2a5d28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5D28u;
    {
        const bool branch_taken_0x2a5d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D28u;
        // 0x2a5d2c: 0x24c6dd98  addiu       $a2, $a2, -0x2268 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d28) {
            ctx->pc = 0x2A5D3Cu;
            goto label_2a5d3c;
        }
    }
    ctx->pc = 0x2A5D30u;
label_2a5d30:
    // 0x2a5d30: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2a5d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2a5d34: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2a5d34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2a5d38: 0x24c6ddb8  addiu       $a2, $a2, -0x2248
    ctx->pc = 0x2a5d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958520));
label_2a5d3c:
    // 0x2a5d3c: 0x24e7dd50  addiu       $a3, $a3, -0x22B0
    ctx->pc = 0x2a5d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958416));
    // 0x2a5d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d44: 0xc0a5c80  jal         func_297200
    ctx->pc = 0x2A5D44u;
    SET_GPR_U32(ctx, 31, 0x2A5D4Cu);
    ctx->pc = 0x2A5D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D44u;
    // 0x2a5d48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297200u, 0x2A5D44u, 0x2A5D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D4Cu;
label_2a5d4c:
    // 0x2a5d4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5D4Cu;
    {
        const bool branch_taken_0x2a5d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D4Cu;
        // 0x2a5d50: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d4c) {
            ctx->pc = 0x2A5D74u;
            goto label_2a5d74;
        }
    }
    ctx->pc = 0x2A5D54u;
    // 0x2a5d54: 0x0  nop
    ctx->pc = 0x2a5d54u;
    // NOP
label_2a5d58:
    // 0x2a5d58: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2a5d58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2a5d5c: 0x24c6ddd8  addiu       $a2, $a2, -0x2228
    ctx->pc = 0x2a5d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958552));
    // 0x2a5d60: 0x24e7dd50  addiu       $a3, $a3, -0x22B0
    ctx->pc = 0x2a5d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958416));
    // 0x2a5d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d68: 0xc0a5c80  jal         func_297200
    ctx->pc = 0x2A5D68u;
    SET_GPR_U32(ctx, 31, 0x2A5D70u);
    ctx->pc = 0x2A5D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D68u;
    // 0x2a5d6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297200u, 0x2A5D68u, 0x2A5D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D70u;
label_2a5d70:
    // 0x2a5d70: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2a5d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2a5d74:
    // 0x2a5d74: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A5D74u;
    {
        const bool branch_taken_0x2a5d74 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D74u;
        // 0x2a5d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d74) {
            ctx->pc = 0x2A5DB4u;
            goto label_2a5db4;
        }
    }
    ctx->pc = 0x2A5D7Cu;
    // 0x2a5d7c: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x2a5d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a5d80: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x2a5d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a5d84: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a5d88:
    // 0x2a5d88: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a5d8c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2a5d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a5d90: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5D90u;
    {
        const bool branch_taken_0x2a5d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D90u;
        // 0x2a5d94: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d90) {
            ctx->pc = 0x2A5DA8u;
            goto label_2a5da8;
        }
    }
    ctx->pc = 0x2A5D98u;
    // 0x2a5d98: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a5d9c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2a5d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2a5da0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a5da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a5da4: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2a5da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2a5da8:
    // 0x2a5da8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2a5da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a5dac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A5DACu;
    {
        const bool branch_taken_0x2a5dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DACu;
        // 0x2a5db0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5dac) {
            ctx->pc = 0x2A5D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5d88;
        }
    }
    ctx->pc = 0x2A5DB4u;
label_2a5db4:
    // 0x2a5db4: 0x265100b4  addiu       $s1, $s2, 0xB4
    ctx->pc = 0x2a5db4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
    // 0x2a5db8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a5dbc: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2a5dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2a5dc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a5dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5dc4: 0x24170007  addiu       $s7, $zero, 0x7
    ctx->pc = 0x2a5dc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a5dc8: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x2a5dc8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x2a5dcc: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x2a5dccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x2a5dd0: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x2a5dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a5dd4: 0x0  nop
    ctx->pc = 0x2a5dd4u;
    // NOP
label_2a5dd8:
    // 0x2a5dd8: 0x12170007  beq         $s0, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5DD8u;
    {
        const bool branch_taken_0x2a5dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        ctx->pc = 0x2A5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DD8u;
        // 0x2a5ddc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5dd8) {
            ctx->pc = 0x2A5DF8u;
            goto label_2a5df8;
        }
    }
    ctx->pc = 0x2A5DE0u;
    // 0x2a5de0: 0x26c5ddf8  addiu       $a1, $s6, -0x2208
    ctx->pc = 0x2a5de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294958584));
    // 0x2a5de4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A5DE4u;
    SET_GPR_U32(ctx, 31, 0x2A5DECu);
    ctx->pc = 0x2A5DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5DE4u;
    // 0x2a5de8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A5DE4u, 0x2A5DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5DECu;
label_2a5dec:
    // 0x2a5dec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5DECu;
    {
        const bool branch_taken_0x2a5dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5DECu;
        // 0x2a5df0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5dec) {
            ctx->pc = 0x2A5E04u;
            goto label_2a5e04;
        }
    }
    ctx->pc = 0x2A5DF4u;
    // 0x2a5df4: 0x0  nop
    ctx->pc = 0x2a5df4u;
    // NOP
label_2a5df8:
    // 0x2a5df8: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A5DF8u;
    SET_GPR_U32(ctx, 31, 0x2A5E00u);
    ctx->pc = 0x2A5DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5DF8u;
    // 0x2a5dfc: 0x26a5de08  addiu       $a1, $s5, -0x21F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A5DF8u, 0x2A5E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E00u;
label_2a5e00:
    // 0x2a5e00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e04:
    // 0x2a5e04: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5E04u;
    SET_GPR_U32(ctx, 31, 0x2A5E0Cu);
    ctx->pc = 0x2A5E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E04u;
    // 0x2a5e08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5E04u, 0x2A5E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E0Cu;
label_2a5e0c:
    // 0x2a5e0c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a5e10: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x2a5e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2a5e14: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2a5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2a5e18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a5e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a5e1c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2a5e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2a5e20: 0x2a05000a  slti        $a1, $s0, 0xA
    ctx->pc = 0x2a5e20u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a5e24: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2a5e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2a5e28: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x2a5e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x2a5e2c: 0x14a0ffea  bnez        $a1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2A5E2Cu;
    {
        const bool branch_taken_0x2a5e2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E2Cu;
        // 0x2a5e30: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e2c) {
            ctx->pc = 0x2A5DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5dd8;
        }
    }
    ctx->pc = 0x2A5E34u;
    // 0x2a5e34: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2a5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2a5e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5e3c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A5E3Cu;
    {
        const bool branch_taken_0x2a5e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E3Cu;
        // 0x2a5e40: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e3c) {
            ctx->pc = 0x2A5EB8u;
            goto label_2a5eb8;
        }
    }
    ctx->pc = 0x2A5E44u;
    // 0x2a5e44: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5E44u;
    {
        const bool branch_taken_0x2a5e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5e44) {
            ctx->pc = 0x2A5E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5E44u;
            // 0x2a5e48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5E60u;
            goto label_2a5e60;
        }
    }
    ctx->pc = 0x2A5E4Cu;
    // 0x2a5e4c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2A5E4Cu;
    {
        const bool branch_taken_0x2a5e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5e4c) {
            ctx->pc = 0x2A5E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5E4Cu;
            // 0x2a5e50: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5E78u;
            goto label_2a5e78;
        }
    }
    ctx->pc = 0x2A5E54u;
    // 0x2a5e54: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2A5E54u;
    {
        const bool branch_taken_0x2a5e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E54u;
        // 0x2a5e58: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e54) {
            ctx->pc = 0x2A5F90u;
            goto label_2a5f90;
        }
    }
    ctx->pc = 0x2A5E5Cu;
    // 0x2a5e5c: 0x0  nop
    ctx->pc = 0x2a5e5cu;
    // NOP
label_2a5e60:
    // 0x2a5e60: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A5E60u;
    {
        const bool branch_taken_0x2a5e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E60u;
        // 0x2a5e64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e60) {
            ctx->pc = 0x2A5EF8u;
            goto label_2a5ef8;
        }
    }
    ctx->pc = 0x2A5E68u;
    // 0x2a5e68: 0x50620037  beql        $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2A5E68u;
    {
        const bool branch_taken_0x2a5e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a5e68) {
            ctx->pc = 0x2A5E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5E68u;
            // 0x2a5e6c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5F48u;
            goto label_2a5f48;
        }
    }
    ctx->pc = 0x2A5E70u;
    // 0x2a5e70: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2A5E70u;
    {
        const bool branch_taken_0x2a5e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E70u;
        // 0x2a5e74: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e70) {
            ctx->pc = 0x2A5F90u;
            goto label_2a5f90;
        }
    }
    ctx->pc = 0x2A5E78u;
label_2a5e78:
    // 0x2a5e78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e7c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5E7Cu;
    SET_GPR_U32(ctx, 31, 0x2A5E84u);
    ctx->pc = 0x2A5E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E7Cu;
    // 0x2a5e80: 0x24a5de18  addiu       $a1, $a1, -0x21E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5E7Cu, 0x2A5E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E84u;
label_2a5e84:
    // 0x2a5e84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e88: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5E88u;
    {
        const bool branch_taken_0x2a5e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5E88u;
        // 0x2a5e8c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e88) {
            ctx->pc = 0x2A5E9Cu;
            goto label_2a5e9c;
        }
    }
    ctx->pc = 0x2A5E90u;
    // 0x2a5e90: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a5e94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5e98: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a5e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a5e9c:
    // 0x2a5e9c: 0xae4400fc  sw          $a0, 0xFC($s2)
    ctx->pc = 0x2a5e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 4));
    // 0x2a5ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ea4: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2a5ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2a5ea8: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2a5ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2a5eac: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2A5EACu;
    {
        const bool branch_taken_0x2a5eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EACu;
        // 0x2a5eb0: 0x24c6ddf8  addiu       $a2, $a2, -0x2208 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5eac) {
            ctx->pc = 0x2A5F34u;
            goto label_2a5f34;
        }
    }
    ctx->pc = 0x2A5EB4u;
    // 0x2a5eb4: 0x0  nop
    ctx->pc = 0x2a5eb4u;
    // NOP
label_2a5eb8:
    // 0x2a5eb8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a5eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a5ebc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ec0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5EC0u;
    SET_GPR_U32(ctx, 31, 0x2A5EC8u);
    ctx->pc = 0x2A5EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5EC0u;
    // 0x2a5ec4: 0x24a5de08  addiu       $a1, $a1, -0x21F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5EC0u, 0x2A5EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5EC8u;
label_2a5ec8:
    // 0x2a5ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ecc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5ECCu;
    {
        const bool branch_taken_0x2a5ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5ECCu;
        // 0x2a5ed0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ecc) {
            ctx->pc = 0x2A5EE0u;
            goto label_2a5ee0;
        }
    }
    ctx->pc = 0x2A5ED4u;
    // 0x2a5ed4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a5ed8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5edc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a5edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a5ee0:
    // 0x2a5ee0: 0xae4400fc  sw          $a0, 0xFC($s2)
    ctx->pc = 0x2a5ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 4));
    // 0x2a5ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ee8: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2a5ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2a5eec: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2a5eecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2a5ef0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A5EF0u;
    {
        const bool branch_taken_0x2a5ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EF0u;
        // 0x2a5ef4: 0x24c6de28  addiu       $a2, $a2, -0x21D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ef0) {
            ctx->pc = 0x2A5F34u;
            goto label_2a5f34;
        }
    }
    ctx->pc = 0x2A5EF8u;
label_2a5ef8:
    // 0x2a5ef8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a5ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a5efc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f00: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5F00u;
    SET_GPR_U32(ctx, 31, 0x2A5F08u);
    ctx->pc = 0x2A5F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F00u;
    // 0x2a5f04: 0x24a5de38  addiu       $a1, $a1, -0x21C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5F00u, 0x2A5F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F08u;
label_2a5f08:
    // 0x2a5f08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f0c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5F0Cu;
    {
        const bool branch_taken_0x2a5f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F0Cu;
        // 0x2a5f10: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f0c) {
            ctx->pc = 0x2A5F20u;
            goto label_2a5f20;
        }
    }
    ctx->pc = 0x2A5F14u;
    // 0x2a5f14: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a5f18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5f1c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a5f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a5f20:
    // 0x2a5f20: 0xae4400fc  sw          $a0, 0xFC($s2)
    ctx->pc = 0x2a5f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 4));
    // 0x2a5f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f28: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2a5f28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2a5f2c: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2a5f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2a5f30: 0x24c6de48  addiu       $a2, $a2, -0x21B8
    ctx->pc = 0x2a5f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958664));
label_2a5f34:
    // 0x2a5f34: 0x24e7dd68  addiu       $a3, $a3, -0x2298
    ctx->pc = 0x2a5f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958440));
    // 0x2a5f38: 0xc0a5c80  jal         func_297200
    ctx->pc = 0x2A5F38u;
    SET_GPR_U32(ctx, 31, 0x2A5F40u);
    ctx->pc = 0x2A5F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F38u;
    // 0x2a5f3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297200u, 0x2A5F38u, 0x2A5F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F40u;
label_2a5f40:
    // 0x2a5f40: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A5F40u;
    {
        const bool branch_taken_0x2a5f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F40u;
        // 0x2a5f44: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f40) {
            ctx->pc = 0x2A5F90u;
            goto label_2a5f90;
        }
    }
    ctx->pc = 0x2A5F48u;
label_2a5f48:
    // 0x2a5f48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a5f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f4c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5F4Cu;
    SET_GPR_U32(ctx, 31, 0x2A5F54u);
    ctx->pc = 0x2A5F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F4Cu;
    // 0x2a5f50: 0x24a5de58  addiu       $a1, $a1, -0x21A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5F4Cu, 0x2A5F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F54u;
label_2a5f54:
    // 0x2a5f54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5F58u;
    {
        const bool branch_taken_0x2a5f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F58u;
        // 0x2a5f5c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f58) {
            ctx->pc = 0x2A5F6Cu;
            goto label_2a5f6c;
        }
    }
    ctx->pc = 0x2A5F60u;
    // 0x2a5f60: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a5f64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5f68: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a5f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a5f6c:
    // 0x2a5f6c: 0xae4400fc  sw          $a0, 0xFC($s2)
    ctx->pc = 0x2a5f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 4));
    // 0x2a5f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f74: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2a5f74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2a5f78: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2a5f78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2a5f7c: 0x24c6de68  addiu       $a2, $a2, -0x2198
    ctx->pc = 0x2a5f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958696));
    // 0x2a5f80: 0x24e7dd68  addiu       $a3, $a3, -0x2298
    ctx->pc = 0x2a5f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958440));
    // 0x2a5f84: 0xc0a5c80  jal         func_297200
    ctx->pc = 0x2A5F84u;
    SET_GPR_U32(ctx, 31, 0x2A5F8Cu);
    ctx->pc = 0x2A5F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F84u;
    // 0x2a5f88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297200u, 0x2A5F84u, 0x2A5F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F8Cu;
label_2a5f8c:
    // 0x2a5f8c: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2a5f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2a5f90:
    // 0x2a5f90: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A5F90u;
    {
        const bool branch_taken_0x2a5f90 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A5F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F90u;
        // 0x2a5f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5f90) {
            ctx->pc = 0x2A5FD4u;
            goto label_2a5fd4;
        }
    }
    ctx->pc = 0x2A5F98u;
    // 0x2a5f98: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x2a5f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a5f9c: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x2a5f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a5fa0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a5fa4: 0x0  nop
    ctx->pc = 0x2a5fa4u;
    // NOP
label_2a5fa8:
    // 0x2a5fa8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a5fac: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2a5facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a5fb0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5FB0u;
    {
        const bool branch_taken_0x2a5fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5FB0u;
        // 0x2a5fb4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5fb0) {
            ctx->pc = 0x2A5FC8u;
            goto label_2a5fc8;
        }
    }
    ctx->pc = 0x2A5FB8u;
    // 0x2a5fb8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a5fbc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2a5fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2a5fc0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a5fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a5fc4: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2a5fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2a5fc8:
    // 0x2a5fc8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2a5fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a5fcc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A5FCCu;
    {
        const bool branch_taken_0x2a5fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5FCCu;
        // 0x2a5fd0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5fcc) {
            ctx->pc = 0x2A5FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5fa8;
        }
    }
    ctx->pc = 0x2A5FD4u;
label_2a5fd4:
    // 0x2a5fd4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2a5fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2a5fd8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a5fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a5fdc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2a5fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5fe0: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2a5fe0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x2a5fe4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2a5fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5fe8: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x2a5fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a5fec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a5fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ff0:
    // 0x2a5ff0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a5ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a5ff4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a5ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ff8: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A5FF8u;
    SET_GPR_U32(ctx, 31, 0x2A6000u);
    ctx->pc = 0x2A5FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5FF8u;
    // 0x2a5ffc: 0x2685de78  addiu       $a1, $s4, -0x2188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A5FF8u, 0x2A6000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6000u;
label_2a6000:
    // 0x2a6000: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a6000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6004: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A6004u;
    SET_GPR_U32(ctx, 31, 0x2A600Cu);
    ctx->pc = 0x2A6008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6004u;
    // 0x2a6008: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A6004u, 0x2A600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A600Cu;
label_2a600c:
    // 0x2a600c: 0x90430080  lbu         $v1, 0x80($v0)
    ctx->pc = 0x2a600cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2a6010: 0x10720003  beq         $v1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6010u;
    {
        const bool branch_taken_0x2a6010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2A6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6010u;
        // 0x2a6014: 0x2a040005  slti        $a0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6010) {
            ctx->pc = 0x2A6020u;
            goto label_2a6020;
        }
    }
    ctx->pc = 0x2A6018u;
    // 0x2a6018: 0x14710002  bne         $v1, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A6018u;
    {
        const bool branch_taken_0x2a6018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2a6018) {
            ctx->pc = 0x2A6024u;
            goto label_2a6024;
        }
    }
    ctx->pc = 0x2A6020u;
label_2a6020:
    // 0x2a6020: 0xe45400cc  swc1        $f20, 0xCC($v0)
    ctx->pc = 0x2a6020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
label_2a6024:
    // 0x2a6024: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A6024u;
    {
        const bool branch_taken_0x2a6024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6024u;
        // 0x2a6028: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6024) {
            ctx->pc = 0x2A5FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5ff0;
        }
    }
    ctx->pc = 0x2A602Cu;
    // 0x2a602c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2a602cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6030: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2a6030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a6034: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2a6034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a6038: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2a6038u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a603c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2a603cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a6040: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2a6040u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a6044: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2a6044u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a6048: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2a6048u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a604c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a604cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a6050: 0xc7b40088  lwc1        $f20, 0x88($sp)
    ctx->pc = 0x2a6050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a6054: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6054u;
        // 0x2a6058: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A605Cu;
    // 0x2a605c: 0x0  nop
    ctx->pc = 0x2a605cu;
    // NOP
    ctx->pc = 0x2a6060u;
}

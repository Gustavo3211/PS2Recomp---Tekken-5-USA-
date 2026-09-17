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

// Function: sub_004D7AD0
// Address: 0x4d7ad0 - 0x4d8520
void sub_004D7AD0_0x4d7ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7AD0_0x4d7ad0");
#endif

    switch (ctx->pc) {
        case 0x4d7ae8u: goto label_4d7ae8;
        case 0x4d7af8u: goto label_4d7af8;
        case 0x4d7b3cu: goto label_4d7b3c;
        case 0x4d7b78u: goto label_4d7b78;
        case 0x4d7ba4u: goto label_4d7ba4;
        case 0x4d7c2cu: goto label_4d7c2c;
        case 0x4d7c34u: goto label_4d7c34;
        case 0x4d7ca8u: goto label_4d7ca8;
        case 0x4d7e00u: goto label_4d7e00;
        case 0x4d7fd8u: goto label_4d7fd8;
        case 0x4d8124u: goto label_4d8124;
        case 0x4d8430u: goto label_4d8430;
        case 0x4d8454u: goto label_4d8454;
        case 0x4d848cu: goto label_4d848c;
        case 0x4d8494u: goto label_4d8494;
        case 0x4d84a8u: goto label_4d84a8;
        case 0x4d84bcu: goto label_4d84bc;
        case 0x4d84e8u: goto label_4d84e8;
        case 0x4d84f0u: goto label_4d84f0;
        case 0x4d84f8u: goto label_4d84f8;
        default: break;
    }

    ctx->pc = 0x4d7ad0u;

    // 0x4d7ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7ad8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d7ad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d7adc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d7adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7ae0: 0x8135faa  j           func_4D7EA8
    ctx->pc = 0x4D7AE0u;
    ctx->pc = 0x4D7AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7AE0u;
    // 0x4d7ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7EA8u;
    goto label_4d7ea8;
    ctx->pc = 0x4D7AE8u;
label_4d7ae8:
    // 0x4d7ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d7ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d7aec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d7aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7af0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7AF0u;
        // 0x4d7af4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D7AF8u;
label_4d7af8:
    // 0x4d7af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d7af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d7afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d7b00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d7b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d7b04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d7b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7b08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d7b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4d7b0c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d7b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d7b10: 0xa60201c2  sh          $v0, 0x1C2($s0)
    ctx->pc = 0x4d7b10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d7b14: 0x24c610b0  addiu       $a2, $a2, 0x10B0
    ctx->pc = 0x4d7b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4272));
    // 0x4d7b18: 0x86050160  lh          $a1, 0x160($s0)
    ctx->pc = 0x4d7b18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4d7b1c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4d7b20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F10B0u));
    // 0x4d7b24: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4d7b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4d7b28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d7b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d7b2c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4d7b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4d7b30: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4d7b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4d7b34: 0xc135d9c  jal         func_4D7670
    ctx->pc = 0x4D7B34u;
    SET_GPR_U32(ctx, 31, 0x4D7B3Cu);
    ctx->pc = 0x4D7B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7B34u;
    // 0x4d7b38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7670u, 0x4D7B34u, 0x4D7B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7B3Cu;
label_4d7b3c:
    // 0x4d7b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7b40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D7B40u;
    {
        const bool branch_taken_0x4d7b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7B40u;
        // 0x4d7b44: 0x260301bc  addiu       $v1, $s0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7b40) {
            ctx->pc = 0x4D7B58u;
            goto label_4d7b58;
        }
    }
    ctx->pc = 0x4D7B48u;
    // 0x4d7b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7b4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d7b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d7b50: 0x813611e  j           func_4D8478
    ctx->pc = 0x4D7B50u;
    ctx->pc = 0x4D7B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7B50u;
    // 0x4d7b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8478u;
    goto label_4d8478;
    ctx->pc = 0x4D7B58u;
label_4d7b58:
    // 0x4d7b58: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d7b58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d7b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7b60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d7b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d7b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7b68: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d7b6c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d7b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d7b70: 0x8135ede  j           func_4D7B78
    ctx->pc = 0x4D7B70u;
    ctx->pc = 0x4D7B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7B70u;
    // 0x4d7b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7B78u;
    goto label_4d7b78;
    ctx->pc = 0x4D7B78u;
label_4d7b78:
    // 0x4d7b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d7b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d7b7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d7b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d7b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d7b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7b84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d7b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d7b88: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d7b88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4d7b8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d7b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d7b90: 0x26120128  addiu       $s2, $s0, 0x128
    ctx->pc = 0x4d7b90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4d7b94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d7b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d7b98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d7b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d7b9c: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4D7B9Cu;
    SET_GPR_U32(ctx, 31, 0x4D7BA4u);
    ctx->pc = 0x4D7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7B9Cu;
    // 0x4d7ba0: 0x26130014  addiu       $s3, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D7B9Cu, 0x4D7BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7BA4u;
label_4d7ba4:
    // 0x4d7ba4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x4d7ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x4d7ba8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x4d7ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4d7bac: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4d7bacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d7bb0: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x4d7bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4d7bb4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4d7bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4d7bb8: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x4d7bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x4d7bbc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4d7bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4d7bc0: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x4d7bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x4d7bc4: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4d7bc4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d7bc8: 0x240a0025  addiu       $t2, $zero, 0x25
    ctx->pc = 0x4d7bc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4d7bcc: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4d7bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4d7bd0: 0x2409001f  addiu       $t1, $zero, 0x1F
    ctx->pc = 0x4d7bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d7bd4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4d7bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4d7bd8: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x4d7bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x4d7bdc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4d7bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4d7be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7be4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d7be4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d7be8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d7be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d7bec: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x4d7becu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d7bf0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4d7bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4d7bf4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4d7bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4d7bf8: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4d7bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4d7bfc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4d7bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4d7c00: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x4d7c00u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d7c04: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4d7c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4d7c08: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4d7c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4d7c0c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4d7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x4d7c10: 0xa4e9232e  sh          $t1, 0x232E($a3)
    ctx->pc = 0x4d7c10u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9006), (uint16_t)GPR_U32(ctx, 9));
    // 0x4d7c14: 0xa4ea23c4  sh          $t2, 0x23C4($a3)
    ctx->pc = 0x4d7c14u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9156), (uint16_t)GPR_U32(ctx, 10));
    // 0x4d7c18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d7c1c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d7c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d7c20: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4d7c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4d7c24: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4D7C24u;
    SET_GPR_U32(ctx, 31, 0x4D7C2Cu);
    ctx->pc = 0x4D7C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7C24u;
    // 0x4d7c28: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4D7C24u, 0x4D7C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7C2Cu;
label_4d7c2c:
    // 0x4d7c2c: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4D7C2Cu;
    SET_GPR_U32(ctx, 31, 0x4D7C34u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D7C2Cu, 0x4D7C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7C34u;
label_4d7c34:
    // 0x4d7c34: 0xa600014a  sh          $zero, 0x14A($s0)
    ctx->pc = 0x4d7c34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d7c38: 0x3c06ff9a  lui         $a2, 0xFF9A
    ctx->pc = 0x4d7c38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65434 << 16));
    // 0x4d7c3c: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x4d7c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d7c40: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x4d7c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x4d7c44: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d7c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d7c48: 0x260701bc  addiu       $a3, $s0, 0x1BC
    ctx->pc = 0x4d7c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4d7c4c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d7c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d7c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7c54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d7c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d7c58: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x4d7c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4d7c5c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d7c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4d7c60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4d7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4d7c64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7c68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d7c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d7c6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d7c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d7c70: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d7c70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d7c74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d7c74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d7c78: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d7c7c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d7c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d7c80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d7c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d7c84: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4d7c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4d7c88: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4d7c88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4d7c8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d7c8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7c90: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4d7c90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d7c94: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4d7c98: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4d7c98u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d7c9c: 0x8135f2a  j           func_4D7CA8
    ctx->pc = 0x4D7C9Cu;
    ctx->pc = 0x4D7CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7C9Cu;
    // 0x4d7ca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7CA8u;
    goto label_4d7ca8;
    ctx->pc = 0x4D7CA4u;
    // 0x4d7ca4: 0x0  nop
    ctx->pc = 0x4d7ca4u;
    // NOP
label_4d7ca8:
    // 0x4d7ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d7ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d7cac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4d7cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d7cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d7cb4: 0x24e3014a  addiu       $v1, $a3, 0x14A
    ctx->pc = 0x4d7cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 330));
    // 0x4d7cb8: 0x24ea0014  addiu       $t2, $a3, 0x14
    ctx->pc = 0x4d7cb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x4d7cbc: 0x24ec0128  addiu       $t4, $a3, 0x128
    ctx->pc = 0x4d7cbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 296));
    // 0x4d7cc0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4d7cc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d7cc4: 0x24e6015e  addiu       $a2, $a3, 0x15E
    ctx->pc = 0x4d7cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 350));
    // 0x4d7cc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D7CC8u;
    {
        const bool branch_taken_0x4d7cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7CC8u;
        // 0x4d7ccc: 0x94650000  lhu         $a1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7cc8) {
            ctx->pc = 0x4D7CE0u;
            goto label_4d7ce0;
        }
    }
    ctx->pc = 0x4D7CD0u;
    // 0x4d7cd0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d7cd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d7cd4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d7cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4d7cd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4D7CD8u;
    {
        const bool branch_taken_0x4d7cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7CD8u;
        // 0x4d7cdc: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7cd8) {
            ctx->pc = 0x4D7CE8u;
            goto label_4d7ce8;
        }
    }
    ctx->pc = 0x4D7CE0u;
label_4d7ce0:
    // 0x4d7ce0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x4d7ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4d7ce4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d7ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d7ce8:
    // 0x4d7ce8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d7cec: 0x85430002  lh          $v1, 0x2($t2)
    ctx->pc = 0x4d7cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x4d7cf0: 0x244d10b0  addiu       $t5, $v0, 0x10B0
    ctx->pc = 0x4d7cf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x4d7cf4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4d7cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4d7cf8: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x4d7cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7cfc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4d7cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4d7d00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F10B0u));
    // 0x4d7d04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d7d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d7d08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d7d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d7d0c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d7d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d7d10: 0x84a90000  lh          $t1, 0x0($a1)
    ctx->pc = 0x4d7d10u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d7d14: 0x84e20164  lh          $v0, 0x164($a3)
    ctx->pc = 0x4d7d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 356)));
    // 0x4d7d18: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x4d7d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4d7d1c: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4D7D1Cu;
    {
        const bool branch_taken_0x4d7d1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D7D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7D1Cu;
        // 0x4d7d20: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7d1c) {
            ctx->pc = 0x4D7DA8u;
            goto label_4d7da8;
        }
    }
    ctx->pc = 0x4D7D24u;
    // 0x4d7d24: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d7d28: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d7d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d7d2c: 0x8c4610cc  lw          $a2, 0x10CC($v0)
    ctx->pc = 0x4d7d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F10CCu));
    // 0x4d7d30: 0x24a510b4  addiu       $a1, $a1, 0x10B4
    ctx->pc = 0x4d7d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4276));
    // 0x4d7d34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d7d34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10B4u));
    // 0x4d7d38: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4d7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4d7d3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d7d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d7d40: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4d7d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4d7d44: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d7d44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d7d48: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d7d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4d7d4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d7d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d7d50: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d7d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d7d54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d7d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d7d58: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d7d58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d7d5c: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x4d7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x4d7d60: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d7d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4d7d64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d7d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d7d68: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d7d68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d7d6c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d7d6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d7d70: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x4d7d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4d7d74: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4D7D74u;
    {
        const bool branch_taken_0x4d7d74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7D74u;
        // 0x4d7d78: 0x24e5015e  addiu       $a1, $a3, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7d74) {
            ctx->pc = 0x4D7DA8u;
            goto label_4d7da8;
        }
    }
    ctx->pc = 0x4D7D7Cu;
    // 0x4d7d7c: 0x24e601bc  addiu       $a2, $a3, 0x1BC
    ctx->pc = 0x4d7d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
    // 0x4d7d80: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d7d80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d7d84: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4d7d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d7d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7d8c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d7d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4d7d90: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4d7d90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d7d94: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4d7d94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d7d98: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d7d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4d7d9c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4d7d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d7da0: 0x8135fe2  j           func_4D7F88
    ctx->pc = 0x4D7DA0u;
    ctx->pc = 0x4D7DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7DA0u;
    // 0x4d7da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7F88u;
    goto label_4d7f88;
    ctx->pc = 0x4D7DA8u;
label_4d7da8:
    // 0x4d7da8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4d7da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d7dac: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4d7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4d7db0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d7db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d7db4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4d7db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4d7db8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x4d7db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4d7dbc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4d7dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4d7dc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D7DC0u;
    {
        const bool branch_taken_0x4d7dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7DC0u;
        // 0x4d7dc4: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7dc0) {
            ctx->pc = 0x4D7DD0u;
            goto label_4d7dd0;
        }
    }
    ctx->pc = 0x4D7DC8u;
    // 0x4d7dc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4D7DC8u;
    {
        const bool branch_taken_0x4d7dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7DC8u;
        // 0x4d7dcc: 0xad650000  sw          $a1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7dc8) {
            ctx->pc = 0x4D7DD8u;
            goto label_4d7dd8;
        }
    }
    ctx->pc = 0x4D7DD0u;
label_4d7dd0:
    // 0x4d7dd0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x4d7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x4d7dd4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4d7dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_4d7dd8:
    // 0x4d7dd8: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4d7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d7ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d7ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7de0: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4d7de0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4d7de4: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4d7de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d7de8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4d7de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d7dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d7decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d7df0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4d7df0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4d7df4: 0x8135fe2  j           func_4D7F88
    ctx->pc = 0x4D7DF4u;
    ctx->pc = 0x4D7DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7DF4u;
    // 0x4d7df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7F88u;
    goto label_4d7f88;
    ctx->pc = 0x4D7DFCu;
    // 0x4d7dfc: 0x0  nop
    ctx->pc = 0x4d7dfcu;
    // NOP
label_4d7e00:
    // 0x4d7e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d7e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d7e04: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4d7e04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d7e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d7e0c: 0x250a0128  addiu       $t2, $t0, 0x128
    ctx->pc = 0x4d7e0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 296));
    // 0x4d7e10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4d7e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d7e14: 0x3c070007  lui         $a3, 0x7
    ctx->pc = 0x4d7e14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)7 << 16));
    // 0x4d7e18: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4d7e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d7e1c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d7e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d7e20: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d7e20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d7e24: 0x24c910b0  addiu       $t1, $a2, 0x10B0
    ctx->pc = 0x4d7e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4272));
    // 0x4d7e28: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x4d7e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4d7e2c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d7e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d7e30: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x4d7e30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x4d7e34: 0x250c0014  addiu       $t4, $t0, 0x14
    ctx->pc = 0x4d7e34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x4d7e38: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x4d7e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x4d7e3c: 0xacc510b4  sw          $a1, 0x10B4($a2)
    ctx->pc = 0x4d7e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4276), GPR_U32(ctx, 5));
    // 0x4d7e40: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4d7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4d7e44: 0x250b01bc  addiu       $t3, $t0, 0x1BC
    ctx->pc = 0x4d7e44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
    // 0x4d7e48: 0x2462a000  addiu       $v0, $v1, -0x6000
    ctx->pc = 0x4d7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942720));
    // 0x4d7e4c: 0xe3382b  sltu        $a3, $a3, $v1
    ctx->pc = 0x4d7e4cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4d7e50: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4d7e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4d7e54: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4d7e54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4d7e58: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x4D7E58u;
    {
        const bool branch_taken_0x4d7e58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7E58u;
        // 0x4d7e5c: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7e58) {
            ctx->pc = 0x4D7E88u;
            goto label_4d7e88;
        }
    }
    ctx->pc = 0x4D7E60u;
    // 0x4d7e60: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4d7e60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4d7e64: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4d7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4d7e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d7e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7e6c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d7e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d7e70: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4d7e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d7e74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d7e78: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4d7e78u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4d7e7c: 0x8135fe2  j           func_4D7F88
    ctx->pc = 0x4D7E7Cu;
    ctx->pc = 0x4D7E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7E7Cu;
    // 0x4d7e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7F88u;
    goto label_4d7f88;
    ctx->pc = 0x4D7E84u;
    // 0x4d7e84: 0x0  nop
    ctx->pc = 0x4d7e84u;
    // NOP
label_4d7e88:
    // 0x4d7e88: 0x95030016  lhu         $v1, 0x16($t0)
    ctx->pc = 0x4d7e88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 22)));
    // 0x4d7e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d7e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7e90: 0xa5030164  sh          $v1, 0x164($t0)
    ctx->pc = 0x4d7e90u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d7e94: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4d7e94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d7e98: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d7e9c: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4d7e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d7ea0: 0x8135faa  j           func_4D7EA8
    ctx->pc = 0x4D7EA0u;
    ctx->pc = 0x4D7EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7EA0u;
    // 0x4d7ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7EA8u;
    goto label_4d7ea8;
    ctx->pc = 0x4D7EA8u;
label_4d7ea8:
    // 0x4d7ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d7ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d7eac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4d7eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d7eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d7eb4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d7eb8: 0x244b10b0  addiu       $t3, $v0, 0x10B0
    ctx->pc = 0x4d7eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x4d7ebc: 0x24ed0014  addiu       $t5, $a3, 0x14
    ctx->pc = 0x4d7ebcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x4d7ec0: 0x85a30002  lh          $v1, 0x2($t5)
    ctx->pc = 0x4d7ec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x4d7ec4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d7ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4d7ec8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4d7ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F10B0u));
    // 0x4d7ecc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4d7eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d7ed0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4d7ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4d7ed4: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x4d7ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x4d7ed8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d7ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d7edc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x4d7edcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7ee0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d7ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d7ee4: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4d7ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4d7ee8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4d7ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4d7eec: 0x250810b4  addiu       $t0, $t0, 0x10B4
    ctx->pc = 0x4d7eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4276));
    // 0x4d7ef0: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4d7ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4d7ef4: 0x24ec0128  addiu       $t4, $a3, 0x128
    ctx->pc = 0x4d7ef4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 296));
    // 0x4d7ef8: 0x94e30164  lhu         $v1, 0x164($a3)
    ctx->pc = 0x4d7ef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 356)));
    // 0x4d7efc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d7efcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d7f00: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4d7f00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d7f04: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4d7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d7f08: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x4d7f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x4d7f0c: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x4d7f0cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x4d7f10: 0x38a34000  xori        $v1, $a1, 0x4000
    ctx->pc = 0x4d7f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)16384);
    // 0x4d7f14: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4d7f14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4d7f18: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4d7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4d7f1c: 0xad2310b8  sw          $v1, 0x10B8($t1)
    ctx->pc = 0x4d7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4280), GPR_U32(ctx, 3));
    // 0x4d7f20: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4d7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d7f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d7f28: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x4d7f28u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4d7f2c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4d7f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4d7f30: 0x5500a  movz        $t2, $zero, $a1
    ctx->pc = 0x4d7f30u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
    // 0x4d7f34: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x4d7f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x4d7f38: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x4d7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x4d7f3c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4d7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4d7f40: 0xc2302b  sltu        $a2, $a2, $v0
    ctx->pc = 0x4d7f40u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4d7f44: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D7F44u;
    {
        const bool branch_taken_0x4d7f44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7F44u;
        // 0x4d7f48: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7f44) {
            ctx->pc = 0x4D7F54u;
            goto label_4d7f54;
        }
    }
    ctx->pc = 0x4D7F4Cu;
    // 0x4d7f4c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x4d7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x4d7f50: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4d7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_4d7f54:
    // 0x4d7f54: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4d7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d7f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d7f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7f5c: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x4d7f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x4d7f60: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4d7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4d7f64: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4d7f64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4d7f68: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4d7f68u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4d7f6c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4d7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d7f70: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4d7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d7f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d7f78: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4d7f78u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4d7f7c: 0x8135fe2  j           func_4D7F88
    ctx->pc = 0x4D7F7Cu;
    ctx->pc = 0x4D7F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7F7Cu;
    // 0x4d7f80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7F88u;
    goto label_4d7f88;
    ctx->pc = 0x4D7F84u;
    // 0x4d7f84: 0x0  nop
    ctx->pc = 0x4d7f84u;
    // NOP
label_4d7f88:
    // 0x4d7f88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d7f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d7f8c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d7f90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d7f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d7f94: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d7f94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4d7f98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d7f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d7f9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4d7f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7fa0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d7fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d7fa4: 0x2654015e  addiu       $s4, $s2, 0x15E
    ctx->pc = 0x4d7fa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 350));
    // 0x4d7fa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d7fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d7fac: 0x244210c8  addiu       $v0, $v0, 0x10C8
    ctx->pc = 0x4d7facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    // 0x4d7fb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d7fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d7fb4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d7fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d7fb8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d7fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4d7fbc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4d7fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4d7fc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4d7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10C8u));
    // 0x4d7fc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d7fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d7fc8: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4d7fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4d7fcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4d7fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4d7fd0: 0xc12b280  jal         func_4ACA00
    ctx->pc = 0x4D7FD0u;
    SET_GPR_U32(ctx, 31, 0x4D7FD8u);
    ctx->pc = 0x4D7FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7FD0u;
    // 0x4d7fd4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACA00u, 0x4D7FD0u, 0x4D7FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7FD8u;
label_4d7fd8:
    // 0x4d7fd8: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4d7fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d7fdc: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4D7FDCu;
    {
        const bool branch_taken_0x4d7fdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7FDCu;
        // 0x4d7fe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7fdc) {
            ctx->pc = 0x4D8010u;
            goto label_4d8010;
        }
    }
    ctx->pc = 0x4D7FE4u;
    // 0x4d7fe4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d7fe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7fec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d7fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d7ff0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d7ff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d7ff4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d7ff4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d7ff8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d7ff8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d7ffc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d7ffcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d8000: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4d8000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d8004: 0x813611e  j           func_4D8478
    ctx->pc = 0x4D8004u;
    ctx->pc = 0x4D8008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8004u;
    // 0x4d8008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8478u;
    goto label_4d8478;
    ctx->pc = 0x4D800Cu;
    // 0x4d800c: 0x0  nop
    ctx->pc = 0x4d800cu;
    // NOP
label_4d8010:
    // 0x4d8010: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4d8010u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4d8014: 0x864201b4  lh          $v0, 0x1B4($s2)
    ctx->pc = 0x4d8014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x4d8018: 0x26d010b0  addiu       $s0, $s6, 0x10B0
    ctx->pc = 0x4d8018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4272));
    // 0x4d801c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d801cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10B0u));
    // 0x4d8020: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d8020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d8024: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8028: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d802c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d802cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d8030: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8034: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d8034u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d8038: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4d8038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4d803c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d803cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d8040: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d8040u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d8044: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d8044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d8048: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d804c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d804cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d8050: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d8050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d8054: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4D8054u;
    {
        const bool branch_taken_0x4d8054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8054) {
            ctx->pc = 0x4D8058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8054u;
            // 0x4d8058: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8088u;
            goto label_4d8088;
        }
    }
    ctx->pc = 0x4D805Cu;
    // 0x4d805c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d805cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8060: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d8060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d8064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d8068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d806c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d806cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d8070: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d8070u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d8074: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d8074u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d8078: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d8078u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d807c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4d807cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d8080: 0x81360b8  j           func_4D82E0
    ctx->pc = 0x4D8080u;
    ctx->pc = 0x4D8084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8080u;
    // 0x4d8084: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D82E0u;
    goto label_4d82e0;
    ctx->pc = 0x4D8088u;
label_4d8088:
    // 0x4d8088: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4d8088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d808c: 0x8c4710cc  lw          $a3, 0x10CC($v0)
    ctx->pc = 0x4d808cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4300)));
    // 0x4d8090: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4d8090u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4d8094: 0x26b310b4  addiu       $s3, $s5, 0x10B4
    ctx->pc = 0x4d8094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4276));
    // 0x4d8098: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4d8098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d809c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d80a0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d80a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10B4u));
    // 0x4d80a4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d80a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d80a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d80a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d80ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d80acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d80b0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d80b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d80b4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4d80b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4d80b8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4d80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4d80bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d80bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d80c0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4d80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4d80c4: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4d80c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d80c8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d80c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d80cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d80ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d80d0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d80d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d80d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d80d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d80d8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d80d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d80dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d80dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d80e0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4d80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4d80e4: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4d80e4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d80e8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d80e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d80ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d80ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d80f0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4d80f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d80f4: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4d80f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4d80f8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4d80f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4d80fc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4d80fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4d8100: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4d8100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4d8104: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d8104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d8108: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d8108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d810c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4d810cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4d8110: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4d8110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4d8114: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4d8114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4d8118: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d8118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d811c: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4D811Cu;
    SET_GPR_U32(ctx, 31, 0x4D8124u);
    ctx->pc = 0x4D8120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D811Cu;
    // 0x4d8120: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4D811Cu, 0x4D8124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8124u;
label_4d8124:
    // 0x4d8124: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4d8124u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4d8128: 0x250410c0  addiu       $a0, $t0, 0x10C0
    ctx->pc = 0x4d8128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4288));
    // 0x4d812c: 0x264b011c  addiu       $t3, $s2, 0x11C
    ctx->pc = 0x4d812cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 284));
    // 0x4d8130: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d8130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10C0u));
    // 0x4d8134: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4d8134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d8138: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d813c: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4d813cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d8140: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d8140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d8144: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d8148: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4d8148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4d814c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4d814cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d8150: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4d8150u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4d8154: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d8154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d8158: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8158u;
    {
        const bool branch_taken_0x4d8158 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8158u;
        // 0x4d815c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8158) {
            ctx->pc = 0x4D8168u;
            goto label_4d8168;
        }
    }
    ctx->pc = 0x4D8160u;
    // 0x4d8160: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D8160u;
    {
        const bool branch_taken_0x4d8160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8160u;
        // 0x4d8164: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8160) {
            ctx->pc = 0x4D816Cu;
            goto label_4d816c;
        }
    }
    ctx->pc = 0x4D8168u;
label_4d8168:
    // 0x4d8168: 0x512024  and         $a0, $v0, $s1
    ctx->pc = 0x4d8168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4d816c:
    // 0x4d816c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4d816cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4d8170: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d8170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8174: 0x258a10b8  addiu       $t2, $t4, 0x10B8
    ctx->pc = 0x4d8174u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 4280));
    // 0x4d8178: 0x344202d8  ori         $v0, $v0, 0x2D8
    ctx->pc = 0x4d8178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)728);
    // 0x4d817c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4d817cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10B8u));
    // 0x4d8180: 0x250810c0  addiu       $t0, $t0, 0x10C0
    ctx->pc = 0x4d8180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4288));
    // 0x4d8184: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4d8184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4d8188: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4d8188u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4d818c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8190: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d8194: 0x96a710b4  lhu         $a3, 0x10B4($s5)
    ctx->pc = 0x4d8194u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4276)));
    // 0x4d8198: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4d8198u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d819c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4d819cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4d81a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d81a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d81a4: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4d81a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4d81a8: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4d81a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d81ac: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4d81acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4d81b0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4d81b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d81b4: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4d81b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4d81b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d81bc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d81bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d81c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d81c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d81c4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4d81c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4d81c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d81c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d81cc: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4d81ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4d81d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d81d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d81d4: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4d81d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d81d8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4d81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d81dc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4d81dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4d81e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d81e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d81e4: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4d81e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4d81e8: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4d81e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d81ec: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d81ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d81f0: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4d81f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4d81f4: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4d81f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4d81f8: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4d81f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4d81fc: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4d81fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d8200: 0xa5630000  sh          $v1, 0x0($t3)
    ctx->pc = 0x4d8200u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d8204: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4d8204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d8208: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x4d8208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x4d820c: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4d820cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d8210: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4d8210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d8214: 0x96c210b0  lhu         $v0, 0x10B0($s6)
    ctx->pc = 0x4d8214u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4272)));
    // 0x4d8218: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4d8218u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d821c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d821cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d8220: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8220u;
    {
        const bool branch_taken_0x4d8220 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4d8220) {
            ctx->pc = 0x4D8224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8220u;
            // 0x4d8224: 0x8d430000  lw          $v1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8238u;
            goto label_4d8238;
        }
    }
    ctx->pc = 0x4D8228u;
    // 0x4d8228: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4d8228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d822c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4D822Cu;
    {
        const bool branch_taken_0x4d822c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D822Cu;
        // 0x4d8230: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d822c) {
            ctx->pc = 0x4D8240u;
            goto label_4d8240;
        }
    }
    ctx->pc = 0x4D8234u;
    // 0x4d8234: 0x0  nop
    ctx->pc = 0x4d8234u;
    // NOP
label_4d8238:
    // 0x4d8238: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4d8238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4d823c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4d823cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d8240:
    // 0x4d8240: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4d8240u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4d8244: 0x26a410b4  addiu       $a0, $s5, 0x10B4
    ctx->pc = 0x4d8244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4276));
    // 0x4d8248: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4d8248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4d824c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d8250: 0x918210b8  lbu         $v0, 0x10B8($t4)
    ctx->pc = 0x4d8250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4280)));
    // 0x4d8254: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4d8254u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d8258: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4d8258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4d825c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4d825cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4d8260: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d8260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d8264: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4d8264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4d8268: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4d8268u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d826c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4D826Cu;
    {
        const bool branch_taken_0x4d826c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d826c) {
            ctx->pc = 0x4D8270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D826Cu;
            // 0x4d8270: 0x96c310b0  lhu         $v1, 0x10B0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D82A0u;
            goto label_4d82a0;
        }
    }
    ctx->pc = 0x4D8274u;
    // 0x4d8274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d8274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8278: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d8278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d827c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d827cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8280: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d8280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d8284: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d8284u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d8288: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d8288u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d828c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d828cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d8290: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d8290u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d8294: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4d8294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d8298: 0x813611e  j           func_4D8478
    ctx->pc = 0x4D8298u;
    ctx->pc = 0x4D829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8298u;
    // 0x4d829c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8478u;
    goto label_4d8478;
    ctx->pc = 0x4D82A0u;
label_4d82a0:
    // 0x4d82a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d82a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d82a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d82a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d82a8: 0xa5630000  sh          $v1, 0x0($t3)
    ctx->pc = 0x4d82a8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d82ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d82acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d82b0: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4d82b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d82b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d82b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d82b8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4d82b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x4d82bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d82bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d82c0: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4d82c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d82c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d82c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d82c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d82c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d82cc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d82ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d82d0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4d82d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d82d4: 0x81360b8  j           func_4D82E0
    ctx->pc = 0x4D82D4u;
    ctx->pc = 0x4D82D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D82D4u;
    // 0x4d82d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D82E0u;
    goto label_4d82e0;
    ctx->pc = 0x4D82DCu;
    // 0x4d82dc: 0x0  nop
    ctx->pc = 0x4d82dcu;
    // NOP
label_4d82e0:
    // 0x4d82e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d82e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d82e4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d82e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d82e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d82ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4d82ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d82f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d82f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d82f4: 0x247310b0  addiu       $s3, $v1, 0x10B0
    ctx->pc = 0x4d82f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x4d82f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d82f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d82fc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4d82fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8300: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d8300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d8304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d8304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d8308: 0x8642015e  lh          $v0, 0x15E($s2)
    ctx->pc = 0x4d8308u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 350)));
    // 0x4d830c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d830cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10B0u));
    // 0x4d8310: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d8310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4d8314: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8318: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d831c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d831cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d8320: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8324: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d8324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d8328: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x4d8328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x4d832c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d832cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d8330: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d8330u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d8334: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d8334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4d8338: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d833c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d833cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d8340: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d8340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d8344: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D8344u;
    {
        const bool branch_taken_0x4d8344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8344u;
        // 0x4d8348: 0x26460162  addiu       $a2, $s2, 0x162 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 354));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8344) {
            ctx->pc = 0x4D8368u;
            goto label_4d8368;
        }
    }
    ctx->pc = 0x4D834Cu;
    // 0x4d834c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d834cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d8350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d8354: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d8354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8358: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d8358u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d835c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d835cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d8360: 0x813611e  j           func_4D8478
    ctx->pc = 0x4D8360u;
    ctx->pc = 0x4D8364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8360u;
    // 0x4d8364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8478u;
    goto label_4d8478;
    ctx->pc = 0x4D8368u;
label_4d8368:
    // 0x4d8368: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d8368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d836c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d8370: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4d8370u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d8374: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x4d8374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d8378: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4d8378u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4d837c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d8380: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x4d8380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x4d8384: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8388: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d8388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4d838c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d838cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d8390: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8394: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d8394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d8398: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4d8398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4d839c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4d83a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d83a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d83a4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d83a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d83a8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d83a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d83ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D83ACu;
    {
        const bool branch_taken_0x4d83ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D83ACu;
        // 0x4d83b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d83ac) {
            ctx->pc = 0x4D83D0u;
            goto label_4d83d0;
        }
    }
    ctx->pc = 0x4D83B4u;
    // 0x4d83b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d83b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d83b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d83b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d83bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d83bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d83c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d83c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d83c4: 0x813611e  j           func_4D8478
    ctx->pc = 0x4D83C4u;
    ctx->pc = 0x4D83C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D83C4u;
    // 0x4d83c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8478u;
    goto label_4d8478;
    ctx->pc = 0x4D83CCu;
    // 0x4d83cc: 0x0  nop
    ctx->pc = 0x4d83ccu;
    // NOP
label_4d83d0:
    // 0x4d83d0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4d83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4d83d4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4d83d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4d83d8: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4d83d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4d83dc: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4d83dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4d83e0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4d83e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4d83e4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d83e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d83e8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4d83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4d83ec: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4d83ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4d83f0: 0xa6022334  sh          $v0, 0x2334($s0)
    ctx->pc = 0x4d83f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d83f4: 0x263110b4  addiu       $s1, $s1, 0x10B4
    ctx->pc = 0x4d83f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4276));
    // 0x4d83f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d83f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d83fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4d83fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8400: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x4d8400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4d8404: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4d8404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8408: 0x8ca410bc  lw          $a0, 0x10BC($a1)
    ctx->pc = 0x4d8408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4284)));
    // 0x4d840c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4d840cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4d8410: 0x8d2510c0  lw          $a1, 0x10C0($t1)
    ctx->pc = 0x4d8410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4288)));
    // 0x4d8414: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4d8414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4d8418: 0xa6032336  sh          $v1, 0x2336($s0)
    ctx->pc = 0x4d8418u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d841c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4d841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4d8420: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4d8420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4d8424: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4d8424u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4d8428: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4D8428u;
    SET_GPR_U32(ctx, 31, 0x4D8430u);
    ctx->pc = 0x4D842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8428u;
    // 0x4d842c: 0xa6022338  sh          $v0, 0x2338($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4D8428u, 0x4D8430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8430u;
label_4d8430:
    // 0x4d8430: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x4d8430u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d8434: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4d8434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d8438: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4d8438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4d843c: 0xa6022330  sh          $v0, 0x2330($s0)
    ctx->pc = 0x4d843cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9008), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d8440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d8440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8444: 0xa605233a  sh          $a1, 0x233A($s0)
    ctx->pc = 0x4d8444u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9018), (uint16_t)GPR_U32(ctx, 5));
    // 0x4d8448: 0xa603233c  sh          $v1, 0x233C($s0)
    ctx->pc = 0x4d8448u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9020), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d844c: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4D844Cu;
    SET_GPR_U32(ctx, 31, 0x4D8454u);
    ctx->pc = 0x4D8450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D844Cu;
    // 0x4d8450: 0xa600233e  sh          $zero, 0x233E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4D844Cu, 0x4D8454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8454u;
label_4d8454:
    // 0x4d8454: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d8454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d8458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d845c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d845cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d8460: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d8460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8464: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d8464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d8468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d8468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d846c: 0x813611e  j           func_4D8478
    ctx->pc = 0x4D846Cu;
    ctx->pc = 0x4D8470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D846Cu;
    // 0x4d8470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8478u;
    goto label_4d8478;
    ctx->pc = 0x4D8474u;
    // 0x4d8474: 0x0  nop
    ctx->pc = 0x4d8474u;
    // NOP
label_4d8478:
    // 0x4d8478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d8478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d847c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d8480: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d8480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4d8484: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4D8484u;
    SET_GPR_U32(ctx, 31, 0x4D848Cu);
    ctx->pc = 0x4D8488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8484u;
    // 0x4d8488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4D8484u, 0x4D848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D848Cu;
label_4d848c:
    // 0x4d848c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4D848Cu;
    SET_GPR_U32(ctx, 31, 0x4D8494u);
    ctx->pc = 0x4D8490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D848Cu;
    // 0x4d8490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D848Cu, 0x4D8494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8494u;
label_4d8494:
    // 0x4d8494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d8494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8498: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4D8498u;
    {
        const bool branch_taken_0x4d8498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8498u;
        // 0x4d849c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8498) {
            ctx->pc = 0x4D8510u;
            goto label_4d8510;
        }
    }
    ctx->pc = 0x4D84A0u;
    // 0x4d84a0: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4D84A0u;
    SET_GPR_U32(ctx, 31, 0x4D84A8u);
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4D84A0u, 0x4D84A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D84A8u;
label_4d84a8:
    // 0x4d84a8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D84A8u;
    {
        const bool branch_taken_0x4d84a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d84a8) {
            ctx->pc = 0x4D84ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D84A8u;
            // 0x4d84ac: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D84C4u;
            goto label_4d84c4;
        }
    }
    ctx->pc = 0x4D84B0u;
    // 0x4d84b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d84b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d84b4: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4D84B4u;
    SET_GPR_U32(ctx, 31, 0x4D84BCu);
    ctx->pc = 0x4D84B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D84B4u;
    // 0x4d84b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4D84B4u, 0x4D84BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D84BCu;
label_4d84bc:
    // 0x4d84bc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4D84BCu;
    {
        const bool branch_taken_0x4d84bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D84BCu;
        // 0x4d84c0: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d84bc) {
            ctx->pc = 0x4D8510u;
            goto label_4d8510;
        }
    }
    ctx->pc = 0x4D84C4u;
label_4d84c4:
    // 0x4d84c4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x4d84c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4d84c8: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4d84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4d84cc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x4d84ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x4d84d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d84d4: 0xa446232c  sh          $a2, 0x232C($v0)
    ctx->pc = 0x4d84d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 6));
    // 0x4d84d8: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4d84d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d84dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d84dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d84e0: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4D84E0u;
    SET_GPR_U32(ctx, 31, 0x4D84E8u);
    ctx->pc = 0x4D84E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D84E0u;
    // 0x4d84e4: 0xa445232e  sh          $a1, 0x232E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9006), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4D84E0u, 0x4D84E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D84E8u;
label_4d84e8:
    // 0x4d84e8: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4D84E8u;
    SET_GPR_U32(ctx, 31, 0x4D84F0u);
    ctx->pc = 0x4D84ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D84E8u;
    // 0x4d84ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4D84E8u, 0x4D84F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D84F0u;
label_4d84f0:
    // 0x4d84f0: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4D84F0u;
    SET_GPR_U32(ctx, 31, 0x4D84F8u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D84F0u, 0x4D84F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D84F8u;
label_4d84f8:
    // 0x4d84f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d84f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d84fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d84fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d8500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8504: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4D8504u;
    ctx->pc = 0x4D8508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8504u;
    // 0x4d8508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D850Cu;
    // 0x4d850c: 0x0  nop
    ctx->pc = 0x4d850cu;
    // NOP
label_4d8510:
    // 0x4d8510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d8510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8514: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d8514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d8518: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8518u;
        // 0x4d851c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D8520u;
}

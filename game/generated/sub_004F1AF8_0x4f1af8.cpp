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

// Function: sub_004F1AF8
// Address: 0x4f1af8 - 0x4f1e90
void sub_004F1AF8_0x4f1af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1AF8_0x4f1af8");
#endif

    switch (ctx->pc) {
        case 0x4f1b2cu: goto label_4f1b2c;
        case 0x4f1b48u: goto label_4f1b48;
        case 0x4f1c94u: goto label_4f1c94;
        case 0x4f1cd0u: goto label_4f1cd0;
        case 0x4f1cf0u: goto label_4f1cf0;
        case 0x4f1d60u: goto label_4f1d60;
        case 0x4f1d68u: goto label_4f1d68;
        case 0x4f1d78u: goto label_4f1d78;
        case 0x4f1d8cu: goto label_4f1d8c;
        default: break;
    }

    ctx->pc = 0x4f1af8u;

    // 0x4f1af8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f1af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f1afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f1afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f1b00: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4f1b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4f1b04: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4f1b04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1b08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f1b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f1b0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f1b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f1b10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f1b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f1b14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f1b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f1b18: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f1b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f1b1c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4f1b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4f1b20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f1b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4f1b24: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F1B24u;
    SET_GPR_U32(ctx, 31, 0x4F1B2Cu);
    ctx->pc = 0x4F1B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1B24u;
    // 0x4f1b28: 0x26d001b4  addiu       $s0, $s6, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F1B24u, 0x4F1B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1B2Cu;
label_4f1b2c:
    // 0x4f1b2c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f1b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f1b30: 0xac62122c  sw          $v0, 0x122C($v1)
    ctx->pc = 0x4f1b30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F122Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F122Cu, _value); } while (0);
    // 0x4f1b34: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f1b34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1b38: 0x4420021  bltzl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4F1B38u;
    {
        const bool branch_taken_0x4f1b38 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f1b38) {
            ctx->pc = 0x4F1B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F1B38u;
            // 0x4f1b3c: 0x8ec20140  lw          $v0, 0x140($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F1BC0u;
            goto label_4f1bc0;
        }
    }
    ctx->pc = 0x4F1B40u;
    // 0x4f1b40: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F1B40u;
    SET_GPR_U32(ctx, 31, 0x4F1B48u);
    ctx->pc = 0x4F1B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1B40u;
    // 0x4f1b44: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F1B40u, 0x4F1B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1B48u;
label_4f1b48:
    // 0x4f1b48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f1b4c: 0xa6c2000e  sh          $v0, 0xE($s6)
    ctx->pc = 0x4f1b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f1b50: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4f1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4f1b54: 0x24841210  addiu       $a0, $a0, 0x1210
    ctx->pc = 0x4f1b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4624));
    // 0x4f1b58: 0x26c60014  addiu       $a2, $s6, 0x14
    ctx->pc = 0x4f1b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x4f1b5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f1b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4f1b60: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f1b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4f1b64: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x4f1b64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x4f1b68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1b6c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f1b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f1b70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1b74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f1b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f1b78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1b7c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4f1b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f1b80: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x4f1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x4f1b84: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f1b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f1b88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1b8c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f1b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f1b90: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4f1b90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f1b94: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f1b98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f1b9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f1b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f1ba0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4f1ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4f1ba4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1ba8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f1ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f1bac: 0xa6c001b6  sh          $zero, 0x1B6($s6)
    ctx->pc = 0x4f1bacu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f1bb0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f1bb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1bb4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f1bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f1bb8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4f1bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f1bbc: 0x8ec20140  lw          $v0, 0x140($s6)
    ctx->pc = 0x4f1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 320)));
label_4f1bc0:
    // 0x4f1bc0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f1bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f1bc4: 0xac621228  sw          $v0, 0x1228($v1)
    ctx->pc = 0x4f1bc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1228u, _value); } while (0);
    // 0x4f1bc8: 0x844401b4  lh          $a0, 0x1B4($v0)
    ctx->pc = 0x4f1bc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 436)));
    // 0x4f1bcc: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F1BCCu;
    {
        const bool branch_taken_0x4f1bcc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4F1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1BCCu;
        // 0x4f1bd0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1bcc) {
            ctx->pc = 0x4F1C00u;
            goto label_4f1c00;
        }
    }
    ctx->pc = 0x4F1BD4u;
    // 0x4f1bd4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f1bd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f1bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f1bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1bdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f1bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f1be0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f1be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f1be4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f1be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f1be8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f1be8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f1bec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f1becu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f1bf0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f1bf0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f1bf4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f1bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f1bf8: 0x813caae  j           func_4F2AB8
    ctx->pc = 0x4F1BF8u;
    ctx->pc = 0x4F1BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1BF8u;
    // 0x4f1bfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AB8u;
    sub_004F2AB8_0x4f2ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x4F1C00u;
label_4f1c00:
    // 0x4f1c00: 0x26c4014a  addiu       $a0, $s6, 0x14A
    ctx->pc = 0x4f1c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 330));
    // 0x4f1c04: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f1c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f1c08: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4f1c08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f1c0c: 0x24751210  addiu       $s5, $v1, 0x1210
    ctx->pc = 0x4f1c0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4624));
    // 0x4f1c10: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x4f1c10u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x4f1c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4f1c18: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4f1c18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f1c1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f1c20: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1c20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1c24: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4f1c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f1c28: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f1c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f1c2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1c30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1c34: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4f1c34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4f1c38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1c3c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4f1c3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f1c40: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4f1c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4f1c44: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f1c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f1c48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1c4c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4f1c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4f1c50: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4f1c50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f1c54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F1C54u;
    {
        const bool branch_taken_0x4f1c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1C54u;
        // 0x4f1c58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1c54) {
            ctx->pc = 0x4F1C88u;
            goto label_4f1c88;
        }
    }
    ctx->pc = 0x4F1C5Cu;
    // 0x4f1c5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4f1c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1c60: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f1c60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f1c64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f1c64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f1c68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f1c68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f1c6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f1c6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f1c70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f1c70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f1c74: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f1c74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f1c78: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f1c78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f1c7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f1c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f1c80: 0x813cab4  j           func_4F2AD0
    ctx->pc = 0x4F1C80u;
    ctx->pc = 0x4F1C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1C80u;
    // 0x4f1c84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AD0u;
    sub_004F2AD0_0x4f2ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F1C88u;
label_4f1c88:
    // 0x4f1c88: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x4f1c88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x4f1c8c: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4F1C8Cu;
    SET_GPR_U32(ctx, 31, 0x4F1C94u);
    ctx->pc = 0x4F1C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1C8Cu;
    // 0x4f1c90: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4F1C8Cu, 0x4F1C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1C94u;
label_4f1c94:
    // 0x4f1c94: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F1C94u;
    {
        const bool branch_taken_0x4f1c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1C94u;
        // 0x4f1c98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1c94) {
            ctx->pc = 0x4F1CC8u;
            goto label_4f1cc8;
        }
    }
    ctx->pc = 0x4F1C9Cu;
    // 0x4f1c9c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f1c9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f1ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f1ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1ca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f1ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f1ca8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f1ca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f1cac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f1cacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f1cb0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f1cb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f1cb4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f1cb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f1cb8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f1cb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f1cbc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f1cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f1cc0: 0x813cab4  j           func_4F2AD0
    ctx->pc = 0x4F1CC0u;
    ctx->pc = 0x4F1CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1CC0u;
    // 0x4f1cc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AD0u;
    sub_004F2AD0_0x4f2ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F1CC8u;
label_4f1cc8:
    // 0x4f1cc8: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4F1CC8u;
    SET_GPR_U32(ctx, 31, 0x4F1CD0u);
    ctx->pc = 0x4F1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1CC8u;
    // 0x4f1ccc: 0x3c12007f  lui         $s2, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4F1CC8u, 0x4F1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1CD0u;
label_4f1cd0:
    // 0x4f1cd0: 0x26521224  addiu       $s2, $s2, 0x1224
    ctx->pc = 0x4f1cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4644));
    // 0x4f1cd4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4f1cd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1cd8: 0x240200a5  addiu       $v0, $zero, 0xA5
    ctx->pc = 0x4f1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x4f1cdc: 0xa6820008  sh          $v0, 0x8($s4)
    ctx->pc = 0x4f1cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f1ce0: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4f1ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4f1ce4: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4f1ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4f1ce8: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F1CE8u;
    SET_GPR_U32(ctx, 31, 0x4F1CF0u);
    ctx->pc = 0x4F1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1CE8u;
    // 0x4f1cec: 0x2631121c  addiu       $s1, $s1, 0x121C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F1CE8u, 0x4F1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1CF0u;
label_4f1cf0:
    // 0x4f1cf0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4f1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f1cf4: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f1cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f1cf8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4f1cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f1cfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1d00: 0x26731220  addiu       $s3, $s3, 0x1220
    ctx->pc = 0x4f1d00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4640));
    // 0x4f1d04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1d08: 0xb72824  and         $a1, $a1, $s7
    ctx->pc = 0x4f1d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 23));
    // 0x4f1d0c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4f1d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4f1d10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1d14: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4f1d14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4f1d18: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4f1d18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f1d1c: 0x26101214  addiu       $s0, $s0, 0x1214
    ctx->pc = 0x4f1d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4628));
    // 0x4f1d20: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4f1d20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x4f1d24: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4f1d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4f1d28: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x4f1d28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x4f1d2c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f1d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f1d30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1d34: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4f1d34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4f1d38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1d3c: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4f1d3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f1d40: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x4f1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x4f1d44: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f1d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f1d48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1d4c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4f1d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f1d50: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4f1d50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4f1d54: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4f1d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4f1d58: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F1D58u;
    SET_GPR_U32(ctx, 31, 0x4F1D60u);
    ctx->pc = 0x4F1D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1D58u;
    // 0x4f1d5c: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F1D58u, 0x4F1D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1D60u;
label_4f1d60:
    // 0x4f1d60: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F1D60u;
    SET_GPR_U32(ctx, 31, 0x4F1D68u);
    ctx->pc = 0x4F1D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1D60u;
    // 0x4f1d64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F1D60u, 0x4F1D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1D68u;
label_4f1d68:
    // 0x4f1d68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4f1d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1d6c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4f1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4f1d70: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F1D70u;
    SET_GPR_U32(ctx, 31, 0x4F1D78u);
    ctx->pc = 0x4F1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1D70u;
    // 0x4f1d74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F1D70u, 0x4F1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1D78u;
label_4f1d78:
    // 0x4f1d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f1d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1d7c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4f1d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f1d80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4f1d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1d84: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4F1D84u;
    SET_GPR_U32(ctx, 31, 0x4F1D8Cu);
    ctx->pc = 0x4F1D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1D84u;
    // 0x4f1d88: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4F1D84u, 0x4F1D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1D8Cu;
label_4f1d8c:
    // 0x4f1d8c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4f1d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f1d90: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x4f1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4f1d94: 0x268a0010  addiu       $t2, $s4, 0x10
    ctx->pc = 0x4f1d94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4f1d98: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f1d98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f1d9c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f1d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f1da0: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4f1da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4f1da4: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x4f1da4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f1da8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1da8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1dac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4f1dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f1db0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f1db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f1db4: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x4f1db4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f1db8: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4f1db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4f1dbc: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4f1dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f1dc0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f1dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f1dc4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f1dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f1dc8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4f1dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4f1dcc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f1dccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f1dd0: 0x26890014  addiu       $t1, $s4, 0x14
    ctx->pc = 0x4f1dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4f1dd4: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x4f1dd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x4f1dd8: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x4f1dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x4f1ddc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4f1ddcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f1de0: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4f1de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4f1de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f1de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1de8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1de8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1dec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f1decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f1df0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4f1df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4f1df4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1df8: 0xd73025  or          $a2, $a2, $s7
    ctx->pc = 0x4f1df8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    // 0x4f1dfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f1dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f1e00: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4f1e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4f1e04: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f1e04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f1e08: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4f1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4f1e0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f1e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f1e10: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x4f1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x4f1e14: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f1e14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f1e18: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4f1e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4f1e1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1e1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1e20: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4f1e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4f1e24: 0x1174025  or          $t0, $t0, $s7
    ctx->pc = 0x4f1e24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 23));
    // 0x4f1e28: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4f1e28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4f1e2c: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4f1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4f1e30: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4f1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f1e34: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f1e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f1e38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f1e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f1e3c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4f1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4f1e40: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4f1e40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f1e44: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4f1e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f1e48: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f1e4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f1e4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f1e50: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f1e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f1e54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1e58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f1e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f1e5c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4f1e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4f1e60: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4f1e60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f1e64: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4f1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f1e68: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f1e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f1e6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f1e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f1e70: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4f1e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4f1e74: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f1e74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f1e78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1e7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f1e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f1e80: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4f1e80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4f1e84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f1e84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f1e88: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1E88u;
        // 0x4f1e8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1E90u;
}

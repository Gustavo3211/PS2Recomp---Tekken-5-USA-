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

// Function: sub_004F5B08
// Address: 0x4f5b08 - 0x4f5dc8
void sub_004F5B08_0x4f5b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5B08_0x4f5b08");
#endif

    switch (ctx->pc) {
        case 0x4f5b24u: goto label_4f5b24;
        case 0x4f5b34u: goto label_4f5b34;
        case 0x4f5c70u: goto label_4f5c70;
        case 0x4f5c8cu: goto label_4f5c8c;
        case 0x4f5c9cu: goto label_4f5c9c;
        default: break;
    }

    ctx->pc = 0x4f5b08u;

    // 0x4f5b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f5b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f5b0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f5b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f5b10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f5b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5b14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f5b18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f5b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f5b1c: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4F5B1Cu;
    SET_GPR_U32(ctx, 31, 0x4F5B24u);
    ctx->pc = 0x4F5B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5B1Cu;
    // 0x4f5b20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4F5B1Cu, 0x4F5B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5B24u;
label_4f5b24:
    // 0x4f5b24: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4F5B24u;
    {
        const bool branch_taken_0x4f5b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5B24u;
        // 0x4f5b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5b24) {
            ctx->pc = 0x4F5C5Cu;
            goto label_4f5c5c;
        }
    }
    ctx->pc = 0x4F5B2Cu;
    // 0x4f5b2c: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4F5B2Cu;
    SET_GPR_U32(ctx, 31, 0x4F5B34u);
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4F5B2Cu, 0x4F5B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5B34u;
label_4f5b34:
    // 0x4f5b34: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x4f5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x4f5b38: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4f5b38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f5b3c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4f5b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4f5b40: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4f5b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4f5b44: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4f5b44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4f5b48: 0x94c3232c  lhu         $v1, 0x232C($a2)
    ctx->pc = 0x4f5b48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72F9ACu));
    // 0x4f5b4c: 0x2284824  and         $t1, $s1, $t0
    ctx->pc = 0x4f5b4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) & GPR_U64(ctx, 8));
    // 0x4f5b50: 0x2404fff9  addiu       $a0, $zero, -0x7
    ctx->pc = 0x4f5b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x4f5b54: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x4f5b54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f5b58: 0xa44301be  sh          $v1, 0x1BE($v0)
    ctx->pc = 0x4f5b58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f5b5c: 0x244b0010  addiu       $t3, $v0, 0x10
    ctx->pc = 0x4f5b5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4f5b60: 0x244c0014  addiu       $t4, $v0, 0x14
    ctx->pc = 0x4f5b60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4f5b64: 0x244d0018  addiu       $t5, $v0, 0x18
    ctx->pc = 0x4f5b64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4f5b68: 0x84c32332  lh          $v1, 0x2332($a2)
    ctx->pc = 0x4f5b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 9010)));
    // 0x4f5b6c: 0x24ce2340  addiu       $t6, $a2, 0x2340
    ctx->pc = 0x4f5b6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 9024));
    // 0x4f5b70: 0x24cf2344  addiu       $t7, $a2, 0x2344
    ctx->pc = 0x4f5b70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 9028));
    // 0x4f5b74: 0x24d02348  addiu       $s0, $a2, 0x2348
    ctx->pc = 0x4f5b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 9032));
    // 0x4f5b78: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f5b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f5b7c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x4f5b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f5b80: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x4f5b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x4f5b84: 0x1258825  or          $s1, $t1, $a1
    ctx->pc = 0x4f5b84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x4f5b88: 0x38670000  xori        $a3, $v1, 0x0
    ctx->pc = 0x4f5b88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x4f5b8c: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x4f5b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x4f5b90: 0x3625ffff  ori         $a1, $s1, 0xFFFF
    ctx->pc = 0x4f5b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4f5b94: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f5b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f5b98: 0x147180b  movn        $v1, $t2, $a3
    ctx->pc = 0x4f5b98u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 10));
    // 0x4f5b9c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f5b9cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f5ba0: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4f5ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4f5ba4: 0xa48824  and         $s1, $a1, $a0
    ctx->pc = 0x4f5ba4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f5ba8: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x4f5ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x4f5bac: 0x3624ffff  ori         $a0, $s1, 0xFFFF
    ctx->pc = 0x4f5bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4f5bb0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f5bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f5bb4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f5bb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f5bb8: 0x648824  and         $s1, $v1, $a0
    ctx->pc = 0x4f5bb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f5bbc: 0xa45101b6  sh          $s1, 0x1B6($v0)
    ctx->pc = 0x4f5bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 438), (uint16_t)GPR_U32(ctx, 17));
    // 0x4f5bc0: 0x94c32334  lhu         $v1, 0x2334($a2)
    ctx->pc = 0x4f5bc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 9012)));
    // 0x4f5bc4: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4f5bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f5bc8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f5bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f5bcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f5bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f5bd0: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4f5bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4f5bd4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f5bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f5bd8: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4f5bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4f5bdc: 0x94c32336  lhu         $v1, 0x2336($a2)
    ctx->pc = 0x4f5bdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 9014)));
    // 0x4f5be0: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4f5be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f5be4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f5be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f5be8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f5be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f5bec: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4f5becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4f5bf0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f5bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f5bf4: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4f5bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4f5bf8: 0x94c32338  lhu         $v1, 0x2338($a2)
    ctx->pc = 0x4f5bf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 9016)));
    // 0x4f5bfc: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x4f5bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4f5c00: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f5c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f5c04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f5c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f5c08: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4f5c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4f5c0c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f5c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f5c10: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x4f5c10u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x4f5c14: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4f5c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4f5c18: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4f5c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4f5c1c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4f5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4f5c20: 0xa443015e  sh          $v1, 0x15E($v0)
    ctx->pc = 0x4f5c20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f5c24: 0x95c40000  lhu         $a0, 0x0($t6)
    ctx->pc = 0x4f5c24u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4f5c28: 0xa4440160  sh          $a0, 0x160($v0)
    ctx->pc = 0x4f5c28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f5c2c: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x4f5c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4f5c30: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4f5c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4f5c34: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4f5c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4f5c38: 0xa4430162  sh          $v1, 0x162($v0)
    ctx->pc = 0x4f5c38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f5c3c: 0x95e40000  lhu         $a0, 0x0($t7)
    ctx->pc = 0x4f5c3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4f5c40: 0xa4440164  sh          $a0, 0x164($v0)
    ctx->pc = 0x4f5c40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 356), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f5c44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f5c48: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4f5c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4f5c4c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4f5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4f5c50: 0xa4430166  sh          $v1, 0x166($v0)
    ctx->pc = 0x4f5c50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f5c54: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4f5c54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f5c58: 0xa4440168  sh          $a0, 0x168($v0)
    ctx->pc = 0x4f5c58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 360), (uint16_t)GPR_U32(ctx, 4));
label_4f5c5c:
    // 0x4f5c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f5c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5c60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f5c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f5c64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f5c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f5c68: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5C68u;
        // 0x4f5c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5C70u;
label_4f5c70:
    // 0x4f5c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f5c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f5c74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f5c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f5c78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f5c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5c7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f5c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f5c80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f5c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f5c84: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4F5C84u;
    SET_GPR_U32(ctx, 31, 0x4F5C8Cu);
    ctx->pc = 0x4F5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5C84u;
    // 0x4f5c88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4F5C84u, 0x4F5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5C8Cu;
label_4f5c8c:
    // 0x4f5c8c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x4F5C8Cu;
    {
        const bool branch_taken_0x4f5c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5C8Cu;
        // 0x4f5c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5c8c) {
            ctx->pc = 0x4F5DB4u;
            goto label_4f5db4;
        }
    }
    ctx->pc = 0x4F5C94u;
    // 0x4f5c94: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4F5C94u;
    SET_GPR_U32(ctx, 31, 0x4F5C9Cu);
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4F5C94u, 0x4F5C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5C9Cu;
label_4f5c9c:
    // 0x4f5c9c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4f5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4f5ca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f5ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5ca4: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x4f5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x4f5ca8: 0xa4a20008  sh          $v0, 0x8($a1)
    ctx->pc = 0x4f5ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f5cac: 0x2466d680  addiu       $a2, $v1, -0x2980
    ctx->pc = 0x4f5cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4f5cb0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4f5cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4f5cb4: 0x24a80010  addiu       $t0, $a1, 0x10
    ctx->pc = 0x4f5cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4f5cb8: 0x94c3232c  lhu         $v1, 0x232C($a2)
    ctx->pc = 0x4f5cb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72F9ACu));
    // 0x4f5cbc: 0x2272024  and         $a0, $s1, $a3
    ctx->pc = 0x4f5cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 7));
    // 0x4f5cc0: 0x24a90014  addiu       $t1, $a1, 0x14
    ctx->pc = 0x4f5cc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x4f5cc4: 0x24aa0018  addiu       $t2, $a1, 0x18
    ctx->pc = 0x4f5cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x4f5cc8: 0xa4a301be  sh          $v1, 0x1BE($a1)
    ctx->pc = 0x4f5cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 446), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f5ccc: 0x24cb2340  addiu       $t3, $a2, 0x2340
    ctx->pc = 0x4f5cccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 9024));
    // 0x4f5cd0: 0x24cc2344  addiu       $t4, $a2, 0x2344
    ctx->pc = 0x4f5cd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 9028));
    // 0x4f5cd4: 0x24cd2348  addiu       $t5, $a2, 0x2348
    ctx->pc = 0x4f5cd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 9032));
    // 0x4f5cd8: 0x84c22332  lh          $v0, 0x2332($a2)
    ctx->pc = 0x4f5cd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 9010)));
    // 0x4f5cdc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f5cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f5ce0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4f5ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f5ce4: 0x828825  or          $s1, $a0, $v0
    ctx->pc = 0x4f5ce4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4f5ce8: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x4f5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x4f5cec: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4f5cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4f5cf0: 0x3624ffff  ori         $a0, $s1, 0xFFFF
    ctx->pc = 0x4f5cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4f5cf4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f5cf8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f5cf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f5cfc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f5cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f5d00: 0x828824  and         $s1, $a0, $v0
    ctx->pc = 0x4f5d00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f5d04: 0x111c00  sll         $v1, $s1, 16
    ctx->pc = 0x4f5d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4f5d08: 0x3622ffff  ori         $v0, $s1, 0xFFFF
    ctx->pc = 0x4f5d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4f5d0c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f5d0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f5d10: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x4f5d10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f5d14: 0xa4b101b6  sh          $s1, 0x1B6($a1)
    ctx->pc = 0x4f5d14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 438), (uint16_t)GPR_U32(ctx, 17));
    // 0x4f5d18: 0x94c22334  lhu         $v0, 0x2334($a2)
    ctx->pc = 0x4f5d18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 9012)));
    // 0x4f5d1c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f5d20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f5d24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f5d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f5d28: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4f5d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4f5d2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f5d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f5d30: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f5d34: 0x94c22336  lhu         $v0, 0x2336($a2)
    ctx->pc = 0x4f5d34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 9014)));
    // 0x4f5d38: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f5d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f5d3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f5d40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f5d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f5d44: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4f5d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4f5d48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f5d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f5d4c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f5d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4f5d50: 0x94c22338  lhu         $v0, 0x2338($a2)
    ctx->pc = 0x4f5d50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 9016)));
    // 0x4f5d54: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4f5d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f5d58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f5d5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f5d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f5d60: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4f5d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4f5d64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f5d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f5d68: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4f5d68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4f5d6c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4f5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f5d70: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f5d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f5d74: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4f5d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f5d78: 0xa4a2015e  sh          $v0, 0x15E($a1)
    ctx->pc = 0x4f5d78u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f5d7c: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4f5d7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f5d80: 0xa4a30160  sh          $v1, 0x160($a1)
    ctx->pc = 0x4f5d80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f5d84: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4f5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f5d88: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f5d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f5d8c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4f5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f5d90: 0xa4a20162  sh          $v0, 0x162($a1)
    ctx->pc = 0x4f5d90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 354), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f5d94: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4f5d94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f5d98: 0xa4a30164  sh          $v1, 0x164($a1)
    ctx->pc = 0x4f5d98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 356), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f5d9c: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4f5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4f5da0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f5da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f5da4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4f5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f5da8: 0xa4a20166  sh          $v0, 0x166($a1)
    ctx->pc = 0x4f5da8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 358), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f5dac: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4f5dacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4f5db0: 0xa4a30168  sh          $v1, 0x168($a1)
    ctx->pc = 0x4f5db0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 360), (uint16_t)GPR_U32(ctx, 3));
label_4f5db4:
    // 0x4f5db4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f5db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5db8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f5db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f5dbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f5dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f5dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5DC0u;
        // 0x4f5dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5DC8u;
}

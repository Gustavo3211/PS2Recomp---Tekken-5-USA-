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

// Function: sub_004F2AD8
// Address: 0x4f2ad8 - 0x4f2dd8
void sub_004F2AD8_0x4f2ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2AD8_0x4f2ad8");
#endif

    switch (ctx->pc) {
        case 0x4f2b0cu: goto label_4f2b0c;
        case 0x4f2b24u: goto label_4f2b24;
        case 0x4f2b90u: goto label_4f2b90;
        case 0x4f2b98u: goto label_4f2b98;
        case 0x4f2bf4u: goto label_4f2bf4;
        case 0x4f2c6cu: goto label_4f2c6c;
        case 0x4f2c74u: goto label_4f2c74;
        case 0x4f2c7cu: goto label_4f2c7c;
        case 0x4f2d74u: goto label_4f2d74;
        default: break;
    }

    ctx->pc = 0x4f2ad8u;

    // 0x4f2ad8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f2ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4f2adc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f2adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f2ae0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f2ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f2ae4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f2ae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2ae8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4f2ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4f2aec: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4f2aecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4f2af0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f2af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f2af4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f2af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f2af8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f2af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f2afc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f2afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f2b00: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4f2b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4f2b04: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F2B04u;
    SET_GPR_U32(ctx, 31, 0x4F2B0Cu);
    ctx->pc = 0x4F2B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2B04u;
    // 0x4f2b08: 0x267001b4  addiu       $s0, $s3, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F2B04u, 0x4F2B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2B0Cu;
label_4f2b0c:
    // 0x4f2b0c: 0xaec21258  sw          $v0, 0x1258($s6)
    ctx->pc = 0x4f2b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4696), GPR_U32(ctx, 2));
    // 0x4f2b10: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f2b10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2b14: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4F2B14u;
    {
        const bool branch_taken_0x4f2b14 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f2b14) {
            ctx->pc = 0x4F2BECu;
            goto label_4f2bec;
        }
    }
    ctx->pc = 0x4F2B1Cu;
    // 0x4f2b1c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F2B1Cu;
    SET_GPR_U32(ctx, 31, 0x4F2B24u);
    ctx->pc = 0x4F2B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2B1Cu;
    // 0x4f2b20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F2B1Cu, 0x4F2B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2B24u;
label_4f2b24:
    // 0x4f2b24: 0xa660015e  sh          $zero, 0x15E($s3)
    ctx->pc = 0x4f2b24u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f2b28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f2b2c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x4f2b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4f2b30: 0xa662000e  sh          $v0, 0xE($s3)
    ctx->pc = 0x4f2b30u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f2b34: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4f2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4f2b38: 0xa6640158  sh          $a0, 0x158($s3)
    ctx->pc = 0x4f2b38u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f2b3c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4f2b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2b40: 0xa66001b6  sh          $zero, 0x1B6($s3)
    ctx->pc = 0x4f2b40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f2b44: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f2b48: 0x24651248  addiu       $a1, $v1, 0x1248
    ctx->pc = 0x4f2b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4680));
    // 0x4f2b4c: 0x24518150  addiu       $s1, $v0, -0x7EB0
    ctx->pc = 0x4f2b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934864));
    // 0x4f2b50: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4f2b50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2b54: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x4f2b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x4f2b58: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4f2b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x4f2b5c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x4f2b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f2b60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1248u));
    // 0x4f2b64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f2b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f2b68: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4f2b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4f2b6c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4f2b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4f2b70: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4f2b70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f2b74: 0x460001d  bltz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x4F2B74u;
    {
        const bool branch_taken_0x4f2b74 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4F2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B74u;
        // 0x4f2b78: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2b74) {
            ctx->pc = 0x4F2BECu;
            goto label_4f2bec;
        }
    }
    ctx->pc = 0x4F2B7Cu;
    // 0x4f2b7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4f2b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2b80: 0x2450125c  addiu       $s0, $v0, 0x125C
    ctx->pc = 0x4f2b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4700));
    // 0x4f2b84: 0x2415002a  addiu       $s5, $zero, 0x2A
    ctx->pc = 0x4f2b84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4f2b88: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4f2b88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2b8c: 0x0  nop
    ctx->pc = 0x4f2b8cu;
    // NOP
label_4f2b90:
    // 0x4f2b90: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4F2B90u;
    SET_GPR_U32(ctx, 31, 0x4F2B98u);
    ctx->pc = 0x4F2B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2B90u;
    // 0x4f2b94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4F2B90u, 0x4F2B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2B98u;
label_4f2b98:
    // 0x4f2b98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f2b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f2b9c: 0xa4550008  sh          $s5, 0x8($v0)
    ctx->pc = 0x4f2b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 21));
    // 0x4f2ba0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f2ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2ba4: 0xac530140  sw          $s3, 0x140($v0)
    ctx->pc = 0x4f2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 19));
    // 0x4f2ba8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4f2ba8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f2bac: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4f2bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4f2bb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2bb4: 0xa443015e  sh          $v1, 0x15E($v0)
    ctx->pc = 0x4f2bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f2bb8: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4f2bb8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f2bbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2bc0: 0xa4440160  sh          $a0, 0x160($v0)
    ctx->pc = 0x4f2bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f2bc4: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4f2bc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f2bc8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4f2bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f2bcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f2bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f2bd0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f2bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f2bd4: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4f2bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4f2bd8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f2bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f2bdc: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4f2bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4f2be0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4f2be0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f2be4: 0x441ffea  bgez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4F2BE4u;
    {
        const bool branch_taken_0x4f2be4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4F2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2BE4u;
        // 0x4f2be8: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2be4) {
            ctx->pc = 0x4F2B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f2b90;
        }
    }
    ctx->pc = 0x4F2BECu;
label_4f2bec:
    // 0x4f2bec: 0xc12564a  jal         func_495928
    ctx->pc = 0x4F2BECu;
    SET_GPR_U32(ctx, 31, 0x4F2BF4u);
    ctx->pc = 0x4F2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2BECu;
    // 0x4f2bf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4F2BECu, 0x4F2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2BF4u;
label_4f2bf4:
    // 0x4f2bf4: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x4F2BF4u;
    {
        const bool branch_taken_0x4f2bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2BF4u;
        // 0x4f2bf8: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2bf4) {
            ctx->pc = 0x4F2DB0u;
            goto label_4f2db0;
        }
    }
    ctx->pc = 0x4F2BFCu;
    // 0x4f2bfc: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4f2bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4f2c00: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4f2c00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4f2c04: 0x2610123c  addiu       $s0, $s0, 0x123C
    ctx->pc = 0x4f2c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4668));
    // 0x4f2c08: 0x26311240  addiu       $s1, $s1, 0x1240
    ctx->pc = 0x4f2c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4672));
    // 0x4f2c0c: 0x26521244  addiu       $s2, $s2, 0x1244
    ctx->pc = 0x4f2c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4676));
    // 0x4f2c10: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x4f2c10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2c14: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f2c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2c18: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x4f2c18u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F1240u));
    // 0x4f2c1c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4f2c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2c20: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4f2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1244u));
    // 0x4f2c24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4f2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2c28: 0x34420060  ori         $v0, $v0, 0x60
    ctx->pc = 0x4f2c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x4f2c2c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x4f2c2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x4f2c30: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x4f2c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x4f2c34: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4f2c34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4f2c38: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f2c38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f2c3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2c40: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x4f2c40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x4f2c44: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4f2c44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4f2c48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2c4c: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x4f2c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x4f2c50: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x4f2c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x4f2c54: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4f2c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2c58: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4f2c58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4f2c5c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4f2c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2c60: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4f2c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2c64: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4F2C64u;
    SET_GPR_U32(ctx, 31, 0x4F2C6Cu);
    ctx->pc = 0x4F2C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2C64u;
    // 0x4f2c68: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4F2C64u, 0x4F2C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2C6Cu;
label_4f2c6c:
    // 0x4f2c6c: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4F2C6Cu;
    SET_GPR_U32(ctx, 31, 0x4F2C74u);
    ctx->pc = 0x4F2C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2C6Cu;
    // 0x4f2c70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4F2C6Cu, 0x4F2C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2C74u;
label_4f2c74:
    // 0x4f2c74: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4F2C74u;
    SET_GPR_U32(ctx, 31, 0x4F2C7Cu);
    ctx->pc = 0x4F2C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2C74u;
    // 0x4f2c78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4F2C74u, 0x4F2C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2C7Cu;
label_4f2c7c:
    // 0x4f2c7c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4f2c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2c80: 0x86620012  lh          $v0, 0x12($s3)
    ctx->pc = 0x4f2c80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x4f2c84: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4f2c84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2c88: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f2c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f2c8c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4f2c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f2c90: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f2c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f2c94: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4f2c94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f2c98: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f2c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f2c9c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f2c9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f2ca0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4f2ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4f2ca4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f2ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f2ca8: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4f2ca8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4f2cac: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f2cacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f2cb0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4f2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4f2cb4: 0x258c1234  addiu       $t4, $t4, 0x1234
    ctx->pc = 0x4f2cb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4660));
    // 0x4f2cb8: 0x8ecd1258  lw          $t5, 0x1258($s6)
    ctx->pc = 0x4f2cb8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4696)));
    // 0x4f2cbc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4f2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2cc0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f2cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f2cc4: 0x860a0000  lh          $t2, 0x0($s0)
    ctx->pc = 0x4f2cc4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f2cc8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f2cc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2ccc: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x4f2cccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f2cd0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f2cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f2cd4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x4f2cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x4f2cd8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f2cd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f2cdc: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4f2cdcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4f2ce0: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4f2ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4f2ce4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f2ce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f2ce8: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x4f2ce8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x4f2cec: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4f2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4f2cf0: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x4f2cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2cf4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f2cf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f2cf8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f2cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f2cfc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f2cfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2d00: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4f2d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4f2d04: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4f2d04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4f2d08: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4f2d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4f2d0c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f2d0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f2d10: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4f2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4f2d14: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x4f2d14u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f2d18: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f2d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f2d1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f2d1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2d20: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4f2d20u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4f2d24: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x4f2d24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x4f2d28: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4f2d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4f2d2c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4f2d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4f2d30: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x4f2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x4f2d34: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f2d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f2d38: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f2d38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2d3c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f2d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f2d40: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4f2d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4f2d44: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4f2d44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f2d48: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4f2d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4f2d4c: 0x8da20008  lw          $v0, 0x8($t5)
    ctx->pc = 0x4f2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x4f2d50: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x4f2d50u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
    // 0x4f2d54: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f2d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f2d58: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f2d58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2d5c: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4f2d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4f2d60: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x4f2d60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x4f2d64: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4f2d64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4f2d68: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4f2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4f2d6c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4F2D6Cu;
    SET_GPR_U32(ctx, 31, 0x4F2D74u);
    ctx->pc = 0x4F2D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2D6Cu;
    // 0x4f2d70: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4F2D6Cu, 0x4F2D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2D74u;
label_4f2d74:
    // 0x4f2d74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f2d78: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4F2D78u;
    {
        const bool branch_taken_0x4f2d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f2d78) {
            ctx->pc = 0x4F2D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F2D78u;
            // 0x4f2d7c: 0xa66301c2  sh          $v1, 0x1C2($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 450), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2DB0u;
            goto label_4f2db0;
        }
    }
    ctx->pc = 0x4F2D80u;
    // 0x4f2d80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4f2d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2d84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f2d84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f2d88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f2d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2d8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f2d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f2d90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f2d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2d94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f2d94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f2d98: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f2d98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f2d9c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f2d9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f2da0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4f2da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f2da4: 0x813d186  j           func_4F4618
    ctx->pc = 0x4F2DA4u;
    ctx->pc = 0x4F2DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2DA4u;
    // 0x4f2da8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4618u, 0x4F2DA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F2DACu;
    // 0x4f2dac: 0x0  nop
    ctx->pc = 0x4f2dacu;
    // NOP
label_4f2db0:
    // 0x4f2db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f2db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2db4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f2db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f2db8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f2db8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2dbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f2dbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f2dc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f2dc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f2dc4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f2dc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f2dc8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f2dc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f2dcc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4f2dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f2dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2DD0u;
        // 0x4f2dd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2DD8u;
}

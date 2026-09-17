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

// Function: sub_00104A80
// Address: 0x104a80 - 0x104d10
void sub_00104A80_0x104a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104A80_0x104a80");
#endif

    switch (ctx->pc) {
        case 0x104b68u: goto label_104b68;
        case 0x104b78u: goto label_104b78;
        case 0x104b80u: goto label_104b80;
        case 0x104bc4u: goto label_104bc4;
        case 0x104bd8u: goto label_104bd8;
        case 0x104bfcu: goto label_104bfc;
        case 0x104c40u: goto label_104c40;
        case 0x104c50u: goto label_104c50;
        case 0x104c78u: goto label_104c78;
        default: break;
    }

    ctx->pc = 0x104a80u;

    // 0x104a80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x104a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x104a84: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x104a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x104a88: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x104a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x104a8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x104a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x104a90: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x104a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x104a94: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x104a94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a98: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x104a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x104a9c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x104a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x104aa0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x104aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x104aa4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x104aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x104aa8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x104aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x104aac: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x104aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x104ab0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x104ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x104ab4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x104ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x104ab8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x104ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x104abc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x104abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104ac0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x104ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x104ac4: 0x8c8400ec  lw          $a0, 0xEC($a0)
    ctx->pc = 0x104ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x104ac8: 0x8cc50184  lw          $a1, 0x184($a2)
    ctx->pc = 0x104ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 388)));
    // 0x104acc: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x104accu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x104ad0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x104ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x104ad4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x104ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x104ad8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x104AD8u;
    {
        const bool branch_taken_0x104ad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x104ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AD8u;
        // 0x104adc: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ad8) {
            ctx->pc = 0x104AF4u;
            goto label_104af4;
        }
    }
    ctx->pc = 0x104AE0u;
    // 0x104ae0: 0x8cc400f4  lw          $a0, 0xF4($a2)
    ctx->pc = 0x104ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 244)));
    // 0x104ae4: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x104AE4u;
    {
        const bool branch_taken_0x104ae4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x104AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AE4u;
        // 0x104ae8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ae4) {
            ctx->pc = 0x104B2Cu;
            goto label_104b2c;
        }
    }
    ctx->pc = 0x104AECu;
    // 0x104aec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x104AECu;
    {
        const bool branch_taken_0x104aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AECu;
        // 0x104af0: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104aec) {
            ctx->pc = 0x104B00u;
            goto label_104b00;
        }
    }
    ctx->pc = 0x104AF4u;
label_104af4:
    // 0x104af4: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x104af4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104af8: 0x8ce300f4  lw          $v1, 0xF4($a3)
    ctx->pc = 0x104af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x104afc: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x104afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_104b00:
    // 0x104b00: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x104b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x104b04: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x104b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x104b08: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x104B08u;
    {
        const bool branch_taken_0x104b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B08u;
        // 0x104b0c: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b08) {
            ctx->pc = 0x104B1Cu;
            goto label_104b1c;
        }
    }
    ctx->pc = 0x104B10u;
    // 0x104b10: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x104b10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x104b14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104B14u;
    {
        const bool branch_taken_0x104b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B14u;
        // 0x104b18: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b14) {
            ctx->pc = 0x104B20u;
            goto label_104b20;
        }
    }
    ctx->pc = 0x104B1Cu;
label_104b1c:
    // 0x104b1c: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x104b1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_104b20:
    // 0x104b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104b24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x104B24u;
    {
        const bool branch_taken_0x104b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B24u;
        // 0x104b28: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b24) {
            ctx->pc = 0x104B54u;
            goto label_104b54;
        }
    }
    ctx->pc = 0x104B2Cu;
label_104b2c:
    // 0x104b2c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x104b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x104b30: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x104b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x104b34: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x104b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x104b38: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x104b38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x104b3c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104b3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104b40: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x104b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x104b44: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x104b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x104b48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x104b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104b4c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x104b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x104b50: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x104b50u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_104b54:
    // 0x104b54: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x104b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x104b58: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x104B58u;
    {
        const bool branch_taken_0x104b58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B58u;
        // 0x104b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b58) {
            ctx->pc = 0x104CE0u;
            goto label_104ce0;
        }
    }
    ctx->pc = 0x104B60u;
    // 0x104b60: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x104b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x104b64: 0x0  nop
    ctx->pc = 0x104b64u;
    // NOP
label_104b68:
    // 0x104b68: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x104b68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104b6c: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x104B6Cu;
    {
        const bool branch_taken_0x104b6c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x104B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B6Cu;
        // 0x104b70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b6c) {
            ctx->pc = 0x104CACu;
            goto label_104cac;
        }
    }
    ctx->pc = 0x104B74u;
    // 0x104b74: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x104b74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_104b78:
    // 0x104b78: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x104B78u;
    SET_GPR_U32(ctx, 31, 0x104B80u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x104B78u, 0x104B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B80u;
label_104b80:
    // 0x104b80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x104b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x104b84: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x104b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x104b88: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x104b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x104b8c: 0x34a5d410  ori         $a1, $a1, 0xD410
    ctx->pc = 0x104b8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54288);
    // 0x104b90: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x104b90u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x104b94: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x104b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x104b98: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x104b98u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18)); // MMIO: 0x1000d410
    // 0x104b9c: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x104b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x104ba0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x104ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x104ba4: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x104ba4u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 20)); // MMIO: 0x1000d420
    // 0x104ba8: 0x34a5d400  ori         $a1, $a1, 0xD400
    ctx->pc = 0x104ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54272);
    // 0x104bac: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x104bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x104bb0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x104bb0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 3)); // MMIO: 0x1000d400
    // 0x104bb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104BB4u;
    {
        const bool branch_taken_0x104bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BB4u;
        // 0x104bb8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bb4) {
            ctx->pc = 0x104BC8u;
            goto label_104bc8;
        }
    }
    ctx->pc = 0x104BBCu;
    // 0x104bbc: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x104BBCu;
    SET_GPR_U32(ctx, 31, 0x104BC4u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x104BBCu, 0x104BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BC4u;
label_104bc4:
    // 0x104bc4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x104bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_104bc8:
    // 0x104bc8: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x104bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x104bcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x104bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x104bd0: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x104bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x104bd4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x104bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_104bd8:
    // 0x104bd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x104bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x104bdc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x104bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x104be0: 0x0  nop
    ctx->pc = 0x104be0u;
    // NOP
    // 0x104be4: 0x0  nop
    ctx->pc = 0x104be4u;
    // NOP
    // 0x104be8: 0x0  nop
    ctx->pc = 0x104be8u;
    // NOP
    // 0x104bec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104BECu;
    {
        const bool branch_taken_0x104bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104bec) {
            ctx->pc = 0x104BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104bd8;
        }
    }
    ctx->pc = 0x104BF4u;
    // 0x104bf4: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x104BF4u;
    SET_GPR_U32(ctx, 31, 0x104BFCu);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x104BF4u, 0x104BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BFCu;
label_104bfc:
    // 0x104bfc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x104bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x104c00: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x104c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x104c04: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x104c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x104c08: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x104c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x104c0c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x104c0cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x1000d080
    // 0x104c10: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x104c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x104c14: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x104c14u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x104c18: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x104c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x104c1c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x104c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x104c20: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x104c20u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 20)); // MMIO: 0x1000d020
    // 0x104c24: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x104c24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x104c28: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x104c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x104c2c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x104c2cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x1000d000
    // 0x104c30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104C30u;
    {
        const bool branch_taken_0x104c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C30u;
        // 0x104c34: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c30) {
            ctx->pc = 0x104C44u;
            goto label_104c44;
        }
    }
    ctx->pc = 0x104C38u;
    // 0x104c38: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x104C38u;
    SET_GPR_U32(ctx, 31, 0x104C40u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x104C38u, 0x104C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C40u;
label_104c40:
    // 0x104c40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x104c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_104c44:
    // 0x104c44: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x104c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x104c48: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x104c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x104c4c: 0x0  nop
    ctx->pc = 0x104c4cu;
    // NOP
label_104c50:
    // 0x104c50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x104c50u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d000
    // 0x104c54: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x104c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x104c58: 0x0  nop
    ctx->pc = 0x104c58u;
    // NOP
    // 0x104c5c: 0x0  nop
    ctx->pc = 0x104c5cu;
    // NOP
    // 0x104c60: 0x0  nop
    ctx->pc = 0x104c60u;
    // NOP
    // 0x104c64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104C64u;
    {
        const bool branch_taken_0x104c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104c64) {
            ctx->pc = 0x104C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104c50;
        }
    }
    ctx->pc = 0x104C6Cu;
    // 0x104c6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x104c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x104c70: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x104c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x104c74: 0x0  nop
    ctx->pc = 0x104c74u;
    // NOP
label_104c78:
    // 0x104c78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x104c78u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d020
    // 0x104c7c: 0x0  nop
    ctx->pc = 0x104c7cu;
    // NOP
    // 0x104c80: 0x0  nop
    ctx->pc = 0x104c80u;
    // NOP
    // 0x104c84: 0x0  nop
    ctx->pc = 0x104c84u;
    // NOP
    // 0x104c88: 0x0  nop
    ctx->pc = 0x104c88u;
    // NOP
    // 0x104c8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104C8Cu;
    {
        const bool branch_taken_0x104c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104c8c) {
            ctx->pc = 0x104C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104c78;
        }
    }
    ctx->pc = 0x104C94u;
    // 0x104c94: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x104c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c98: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x104c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x104c9c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x104C9Cu;
    {
        const bool branch_taken_0x104c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C9Cu;
        // 0x104ca0: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c9c) {
            ctx->pc = 0x104B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104b78;
        }
    }
    ctx->pc = 0x104CA4u;
    // 0x104ca4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x104CA4u;
    {
        const bool branch_taken_0x104ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104CA4u;
        // 0x104ca8: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ca4) {
            ctx->pc = 0x104CB4u;
            goto label_104cb4;
        }
    }
    ctx->pc = 0x104CACu;
label_104cac:
    // 0x104cac: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x104cacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x104cb0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x104cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_104cb4:
    // 0x104cb4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x104cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cb8: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x104cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x104cbc: 0x8ce200f8  lw          $v0, 0xF8($a3)
    ctx->pc = 0x104cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x104cc0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x104cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x104cc4: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x104cc4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x104cc8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x104cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104ccc: 0xe00013  mtlo        $a3
    ctx->pc = 0x104cccu;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x104cd0: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x104cd0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x104cd4: 0x3812  mflo        $a3
    ctx->pc = 0x104cd4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x104cd8: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x104CD8u;
    {
        const bool branch_taken_0x104cd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x104CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104CD8u;
        // 0x104cdc: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104cd8) {
            ctx->pc = 0x104B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104b68;
        }
    }
    ctx->pc = 0x104CE0u;
label_104ce0:
    // 0x104ce0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x104ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x104ce4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x104ce4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x104ce8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x104ce8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x104cec: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x104cecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104cf0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x104cf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104cf4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x104cf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104cf8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x104cf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104cfc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x104cfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104d00: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x104d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104d04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x104d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104d08: 0x3e00008  jr          $ra
    ctx->pc = 0x104D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D08u;
        // 0x104d0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104D10u;
}

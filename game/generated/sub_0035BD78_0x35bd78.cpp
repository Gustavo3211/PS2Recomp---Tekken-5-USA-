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

// Function: sub_0035BD78
// Address: 0x35bd78 - 0x35c0e0
void sub_0035BD78_0x35bd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BD78_0x35bd78");
#endif

    switch (ctx->pc) {
        case 0x35bdf8u: goto label_35bdf8;
        case 0x35be10u: goto label_35be10;
        case 0x35be38u: goto label_35be38;
        case 0x35bee8u: goto label_35bee8;
        case 0x35bf44u: goto label_35bf44;
        case 0x35bf90u: goto label_35bf90;
        case 0x35c018u: goto label_35c018;
        case 0x35c060u: goto label_35c060;
        default: break;
    }

    ctx->pc = 0x35bd78u;

    // 0x35bd78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35bd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35bd7c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x35bd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x35bd80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35bd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35bd84: 0x68603  sra         $s0, $a2, 24
    ctx->pc = 0x35bd84u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 24));
    // 0x35bd88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35bd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35bd8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35bd8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bd90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35bd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35bd94: 0x24120017  addiu       $s2, $zero, 0x17
    ctx->pc = 0x35bd94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x35bd98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35bd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35bd9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35bd9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bda0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35bda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35bda4: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0x35bda4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x35bda8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x35bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35bdac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x35bdacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bdb0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x35bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x35bdb4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x35bdb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bdb8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x35bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x35bdbc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x35bdbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bdc0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x35bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x35bdc4: 0x30be00ff  andi        $fp, $a1, 0xFF
    ctx->pc = 0x35bdc4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35bdc8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35BDC8u;
    {
        const bool branch_taken_0x35bdc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BDC8u;
        // 0x35bdcc: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bdc8) {
            ctx->pc = 0x35BDE0u;
            goto label_35bde0;
        }
    }
    ctx->pc = 0x35BDD0u;
    // 0x35bdd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bdd4: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x35BDD4u;
    {
        const bool branch_taken_0x35bdd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x35BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BDD4u;
        // 0x35bdd8: 0x2412002f  addiu       $s2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bdd4) {
            ctx->pc = 0x35BDE0u;
            goto label_35bde0;
        }
    }
    ctx->pc = 0x35BDDCu;
    // 0x35bddc: 0x24170018  addiu       $s7, $zero, 0x18
    ctx->pc = 0x35bddcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_35bde0:
    // 0x35bde0: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x35bde0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x35bde4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35BDE4u;
    {
        const bool branch_taken_0x35bde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BDE4u;
        // 0x35bde8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bde4) {
            ctx->pc = 0x35BE08u;
            goto label_35be08;
        }
    }
    ctx->pc = 0x35BDECu;
    // 0x35bdec: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35bdf0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BDF0u;
    SET_GPR_U32(ctx, 31, 0x35BDF8u);
    ctx->pc = 0x35BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BDF0u;
    // 0x35bdf4: 0x24845728  addiu       $a0, $a0, 0x5728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BDF0u, 0x35BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BDF8u;
label_35bdf8:
    // 0x35bdf8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35bdfc: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x35BDFCu;
    {
        const bool branch_taken_0x35bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BDFCu;
        // 0x35be00: 0x34420019  ori         $v0, $v0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bdfc) {
            ctx->pc = 0x35C0ACu;
            goto label_35c0ac;
        }
    }
    ctx->pc = 0x35BE04u;
    // 0x35be04: 0x0  nop
    ctx->pc = 0x35be04u;
    // NOP
label_35be08:
    // 0x35be08: 0xc0d77aa  jal         func_35DEA8
    ctx->pc = 0x35BE08u;
    SET_GPR_U32(ctx, 31, 0x35BE10u);
    ctx->pc = 0x35BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE08u;
    // 0x35be0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DEA8u, 0x35BE08u, 0x35BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE10u;
label_35be10:
    // 0x35be10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35be10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be14: 0x4c000a5  bltz        $a2, . + 4 + (0xA5 << 2)
    ctx->pc = 0x35BE14u;
    {
        const bool branch_taken_0x35be14 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x35BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE14u;
        // 0x35be18: 0xdf8ac7d0  ld          $t2, -0x3830($gp) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 28), 4294952912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be14) {
            ctx->pc = 0x35C0ACu;
            goto label_35c0ac;
        }
    }
    ctx->pc = 0x35BE1Cu;
    // 0x35be1c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35be20: 0x24441378  addiu       $a0, $v0, 0x1378
    ctx->pc = 0x35be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
    // 0x35be24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35be24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be28: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x35be28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35be2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35be30: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x35be30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35be34: 0x0  nop
    ctx->pc = 0x35be34u;
    // NOP
label_35be38:
    // 0x35be38: 0xa81017  dsrav       $v0, $t0, $a1
    ctx->pc = 0x35be38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 8) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x35be3c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x35be3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x35be40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35be40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35be44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35be44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35be48: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x35BE48u;
    {
        const bool branch_taken_0x35be48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35be48) {
            ctx->pc = 0x35BE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BE48u;
            // 0x35be4c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BE8Cu;
            goto label_35be8c;
        }
    }
    ctx->pc = 0x35BE50u;
    // 0x35be50: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x35be50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x35be54: 0x246200ff  addiu       $v0, $v1, 0xFF
    ctx->pc = 0x35be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x35be58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35be58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35be5c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x35be5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35be60: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35BE60u;
    {
        const bool branch_taken_0x35be60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35be60) {
            ctx->pc = 0x35BE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BE60u;
            // 0x35be64: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BE74u;
            goto label_35be74;
        }
    }
    ctx->pc = 0x35BE68u;
    // 0x35be68: 0x54690008  bnel        $v1, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35BE68u;
    {
        const bool branch_taken_0x35be68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x35be68) {
            ctx->pc = 0x35BE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BE68u;
            // 0x35be6c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BE8Cu;
            goto label_35be8c;
        }
    }
    ctx->pc = 0x35BE70u;
    // 0x35be70: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x35be70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_35be74:
    // 0x35be74: 0xa71814  dsllv       $v1, $a3, $a1
    ctx->pc = 0x35be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x35be78: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35BE78u;
    {
        const bool branch_taken_0x35be78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x35BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE78u;
        // 0x35be7c: 0x2c3b025  or          $s6, $s6, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be78) {
            ctx->pc = 0x35BE88u;
            goto label_35be88;
        }
    }
    ctx->pc = 0x35BE80u;
    // 0x35be80: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x35be80u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x35be84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35be84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_35be88:
    // 0x35be88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35be88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_35be8c:
    // 0x35be8c: 0x28a20030  slti        $v0, $a1, 0x30
    ctx->pc = 0x35be8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35be90: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x35BE90u;
    {
        const bool branch_taken_0x35be90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE90u;
        // 0x35be94: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be90) {
            ctx->pc = 0x35BE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35be38;
        }
    }
    ctx->pc = 0x35BE98u;
    // 0x35be98: 0x1226002d  beq         $s1, $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x35BE98u;
    {
        const bool branch_taken_0x35be98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x35BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE98u;
        // 0x35be9c: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be98) {
            ctx->pc = 0x35BF50u;
            goto label_35bf50;
        }
    }
    ctx->pc = 0x35BEA0u;
    // 0x35bea0: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x35bea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x35bea4: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x35BEA4u;
    {
        const bool branch_taken_0x35bea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bea4) {
            ctx->pc = 0x35BEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BEA4u;
            // 0x35bea8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BF38u;
            goto label_35bf38;
        }
    }
    ctx->pc = 0x35BEACu;
    // 0x35beac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x35beacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35beb0: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x35beb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x35beb4: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x35BEB4u;
    {
        const bool branch_taken_0x35beb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35beb4) {
            ctx->pc = 0x35BEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BEB4u;
            // 0x35beb8: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BF58u;
            goto label_35bf58;
        }
    }
    ctx->pc = 0x35BEBCu;
    // 0x35bebc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x35bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x35bec0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x35bec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bec4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x35bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35bec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35bec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35becc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35beccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35bed0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x35bed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35bed4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x35bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35bed8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35bedc: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35bee0: 0x24631379  addiu       $v1, $v1, 0x1379
    ctx->pc = 0x35bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4985));
    // 0x35bee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_35bee8:
    // 0x35bee8: 0xa41017  dsrav       $v0, $a0, $a1
    ctx->pc = 0x35bee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x35beec: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x35beecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x35bef0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35bef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35bef4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35bef4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35bef8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x35BEF8u;
    {
        const bool branch_taken_0x35bef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bef8) {
            ctx->pc = 0x35BEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BEF8u;
            // 0x35befc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BF20u;
            goto label_35bf20;
        }
    }
    ctx->pc = 0x35BF00u;
    // 0x35bf00: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x35bf00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35bf04: 0x50460069  beql        $v0, $a2, . + 4 + (0x69 << 2)
    ctx->pc = 0x35BF04u;
    {
        const bool branch_taken_0x35bf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x35bf04) {
            ctx->pc = 0x35BF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BF04u;
            // 0x35bf08: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C0ACu;
            goto label_35c0ac;
        }
    }
    ctx->pc = 0x35BF0Cu;
    // 0x35bf0c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35BF0Cu;
    {
        const bool branch_taken_0x35bf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bf0c) {
            ctx->pc = 0x35BF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BF0Cu;
            // 0x35bf10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BF20u;
            goto label_35bf20;
        }
    }
    ctx->pc = 0x35BF14u;
    // 0x35bf14: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x35BF14u;
    {
        const bool branch_taken_0x35bf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF14u;
        // 0x35bf18: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bf14) {
            ctx->pc = 0x35C0ACu;
            goto label_35c0ac;
        }
    }
    ctx->pc = 0x35BF1Cu;
    // 0x35bf1c: 0x0  nop
    ctx->pc = 0x35bf1cu;
    // NOP
label_35bf20:
    // 0x35bf20: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x35bf20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x35bf24: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x35BF24u;
    {
        const bool branch_taken_0x35bf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF24u;
        // 0x35bf28: 0x2463006c  addiu       $v1, $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bf24) {
            ctx->pc = 0x35BEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bee8;
        }
    }
    ctx->pc = 0x35BF2Cu;
    // 0x35bf2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35BF2Cu;
    {
        const bool branch_taken_0x35bf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF2Cu;
        // 0x35bf30: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bf2c) {
            ctx->pc = 0x35BF50u;
            goto label_35bf50;
        }
    }
    ctx->pc = 0x35BF34u;
    // 0x35bf34: 0x0  nop
    ctx->pc = 0x35bf34u;
    // NOP
label_35bf38:
    // 0x35bf38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35bf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bf3c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BF3Cu;
    SET_GPR_U32(ctx, 31, 0x35BF44u);
    ctx->pc = 0x35BF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF3Cu;
    // 0x35bf40: 0x24845768  addiu       $a0, $a0, 0x5768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BF3Cu, 0x35BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF44u;
label_35bf44:
    // 0x35bf44: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x35BF44u;
    {
        const bool branch_taken_0x35bf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF44u;
        // 0x35bf48: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bf44) {
            ctx->pc = 0x35C0ACu;
            goto label_35c0ac;
        }
    }
    ctx->pc = 0x35BF4Cu;
    // 0x35bf4c: 0x0  nop
    ctx->pc = 0x35bf4cu;
    // NOP
label_35bf50:
    // 0x35bf50: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x35bf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bf54: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x35bf54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_35bf58:
    // 0x35bf58: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x35BF58u;
    {
        const bool branch_taken_0x35bf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF58u;
        // 0x35bf5c: 0x3d4102b  sltu        $v0, $fp, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bf58) {
            ctx->pc = 0x35C000u;
            goto label_35c000;
        }
    }
    ctx->pc = 0x35BF60u;
    // 0x35bf60: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x35bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x35bf64: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x35bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35bf68: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x35bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35bf6c: 0x3c07001d  lui         $a3, 0x1D
    ctx->pc = 0x35bf6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)29 << 16));
    // 0x35bf70: 0x24e727c4  addiu       $a3, $a3, 0x27C4
    ctx->pc = 0x35bf70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10180));
    // 0x35bf74: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x35bf74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x35bf78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35bf7c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x35bf7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bf80: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x35bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35bf84: 0x3c0a001d  lui         $t2, 0x1D
    ctx->pc = 0x35bf84u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)29 << 16));
    // 0x35bf88: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x35bf88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35bf8c: 0x0  nop
    ctx->pc = 0x35bf8cu;
    // NOP
label_35bf90:
    // 0x35bf90: 0xa81014  dsllv       $v0, $t0, $a1
    ctx->pc = 0x35bf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x35bf94: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x35bf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x35bf98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x35BF98u;
    {
        const bool branch_taken_0x35bf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF98u;
        // 0x35bf9c: 0x25421378  addiu       $v0, $t2, 0x1378 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bf98) {
            ctx->pc = 0x35BFE8u;
            goto label_35bfe8;
        }
    }
    ctx->pc = 0x35BFA0u;
    // 0x35bfa0: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x35bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x35bfa4: 0x90830026  lbu         $v1, 0x26($a0)
    ctx->pc = 0x35bfa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x35bfa8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35BFA8u;
    {
        const bool branch_taken_0x35bfa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BFA8u;
        // 0x35bfac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bfa8) {
            ctx->pc = 0x35BFB8u;
            goto label_35bfb8;
        }
    }
    ctx->pc = 0x35BFB0u;
    // 0x35bfb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35BFB0u;
    {
        const bool branch_taken_0x35bfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BFB0u;
        // 0x35bfb4: 0x90e30000  lbu         $v1, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bfb0) {
            ctx->pc = 0x35BFBCu;
            goto label_35bfbc;
        }
    }
    ctx->pc = 0x35BFB8u;
label_35bfb8:
    // 0x35bfb8: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x35bfb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_35bfbc:
    // 0x35bfbc: 0x74102b  sltu        $v0, $v1, $s4
    ctx->pc = 0x35bfbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x35bfc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35BFC0u;
    {
        const bool branch_taken_0x35bfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bfc0) {
            ctx->pc = 0x35BFD8u;
            goto label_35bfd8;
        }
    }
    ctx->pc = 0x35BFC8u;
    // 0x35bfc8: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x35bfc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bfcc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35BFCCu;
    {
        const bool branch_taken_0x35bfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BFCCu;
        // 0x35bfd0: 0xa8a814  dsllv       $s5, $t0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) << (GPR_U32(ctx, 5) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bfcc) {
            ctx->pc = 0x35BFE8u;
            goto label_35bfe8;
        }
    }
    ctx->pc = 0x35BFD4u;
    // 0x35bfd4: 0x0  nop
    ctx->pc = 0x35bfd4u;
    // NOP
label_35bfd8:
    // 0x35bfd8: 0x54740004  bnel        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x35BFD8u;
    {
        const bool branch_taken_0x35bfd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x35bfd8) {
            ctx->pc = 0x35BFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BFD8u;
            // 0x35bfdc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BFECu;
            goto label_35bfec;
        }
    }
    ctx->pc = 0x35BFE0u;
    // 0x35bfe0: 0xa81014  dsllv       $v0, $t0, $a1
    ctx->pc = 0x35bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x35bfe4: 0x2a2a825  or          $s5, $s5, $v0
    ctx->pc = 0x35bfe4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_35bfe8:
    // 0x35bfe8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_35bfec:
    // 0x35bfec: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x35bfecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x35bff0: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x35bff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x35bff4: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x35BFF4u;
    {
        const bool branch_taken_0x35bff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BFF4u;
        // 0x35bff8: 0x24c6006c  addiu       $a2, $a2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bff4) {
            ctx->pc = 0x35BF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bf90;
        }
    }
    ctx->pc = 0x35BFFCu;
    // 0x35bffc: 0x3d4102b  sltu        $v0, $fp, $s4
    ctx->pc = 0x35bffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_35c000:
    // 0x35c000: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35C000u;
    {
        const bool branch_taken_0x35c000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C000u;
        // 0x35c004: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c000) {
            ctx->pc = 0x35C028u;
            goto label_35c028;
        }
    }
    ctx->pc = 0x35C008u;
    // 0x35c008: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35c008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35c00c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x35c00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c010: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35C010u;
    SET_GPR_U32(ctx, 31, 0x35C018u);
    ctx->pc = 0x35C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C010u;
    // 0x35c014: 0x248457b0  addiu       $a0, $a0, 0x57B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35C010u, 0x35C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C018u;
label_35c018:
    // 0x35c018: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35c018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35c01c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x35C01Cu;
    {
        const bool branch_taken_0x35c01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C01Cu;
        // 0x35c020: 0x34420012  ori         $v0, $v0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c01c) {
            ctx->pc = 0x35C0ACu;
            goto label_35c0ac;
        }
    }
    ctx->pc = 0x35C024u;
    // 0x35c024: 0x0  nop
    ctx->pc = 0x35c024u;
    // NOP
label_35c028:
    // 0x35c028: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x35c028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c02c: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x35c02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x35c030: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x35C030u;
    {
        const bool branch_taken_0x35c030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C030u;
        // 0x35c034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c030) {
            ctx->pc = 0x35C0A8u;
            goto label_35c0a8;
        }
    }
    ctx->pc = 0x35C038u;
    // 0x35c038: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x35c038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x35c03c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x35c03cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c040: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x35c040u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35c044: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x35c044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c04c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x35c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35c050: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c054: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x35c054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x35c058: 0x248413c0  addiu       $a0, $a0, 0x13C0
    ctx->pc = 0x35c058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5056));
    // 0x35c05c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x35c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_35c060:
    // 0x35c060: 0xa91014  dsllv       $v0, $t1, $a1
    ctx->pc = 0x35c060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x35c064: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x35c064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x35c068: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x35C068u;
    {
        const bool branch_taken_0x35c068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c068) {
            ctx->pc = 0x35C06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C068u;
            // 0x35c06c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C09Cu;
            goto label_35c09c;
        }
    }
    ctx->pc = 0x35C070u;
    // 0x35c070: 0x10c80007  beq         $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35C070u;
    {
        const bool branch_taken_0x35c070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        ctx->pc = 0x35C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C070u;
        // 0x35c074: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c070) {
            ctx->pc = 0x35C090u;
            goto label_35c090;
        }
    }
    ctx->pc = 0x35C078u;
    // 0x35c078: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x35c078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x35c07c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x35C07Cu;
    {
        const bool branch_taken_0x35c07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c07c) {
            ctx->pc = 0x35C080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C07Cu;
            // 0x35c080: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C09Cu;
            goto label_35c09c;
        }
    }
    ctx->pc = 0x35C084u;
    // 0x35c084: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35C084u;
    {
        const bool branch_taken_0x35c084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C084u;
        // 0x35c088: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c084) {
            ctx->pc = 0x35C094u;
            goto label_35c094;
        }
    }
    ctx->pc = 0x35C08Cu;
    // 0x35c08c: 0x0  nop
    ctx->pc = 0x35c08cu;
    // NOP
label_35c090:
    // 0x35c090: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x35c090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_35c094:
    // 0x35c094: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x35c094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c098: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35c098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_35c09c:
    // 0x35c09c: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x35c09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x35c0a0: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x35C0A0u;
    {
        const bool branch_taken_0x35c0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C0A0u;
        // 0x35c0a4: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c0a0) {
            ctx->pc = 0x35C060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c060;
        }
    }
    ctx->pc = 0x35C0A8u;
label_35c0a8:
    // 0x35c0a8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x35c0a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_35c0ac:
    // 0x35c0ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c0b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35c0b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c0b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35c0b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c0b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35c0b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c0bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35c0bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c0c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35c0c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c0c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x35c0c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c0c8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x35c0c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35c0cc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x35c0ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35c0d0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x35c0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35c0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x35C0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C0D4u;
        // 0x35c0d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C0DCu;
    // 0x35c0dc: 0x0  nop
    ctx->pc = 0x35c0dcu;
    // NOP
    ctx->pc = 0x35c0e0u;
}

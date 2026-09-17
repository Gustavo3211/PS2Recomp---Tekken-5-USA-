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

// Function: sub_004A5DF8
// Address: 0x4a5df8 - 0x4a5fe8
void sub_004A5DF8_0x4a5df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5DF8_0x4a5df8");
#endif

    switch (ctx->pc) {
        case 0x4a5f24u: goto label_4a5f24;
        case 0x4a5f78u: goto label_4a5f78;
        case 0x4a5facu: goto label_4a5fac;
        default: break;
    }

    ctx->pc = 0x4a5df8u;

    // 0x4a5df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a5df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a5dfc: 0x3c0b0073  lui         $t3, 0x73
    ctx->pc = 0x4a5dfcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)115 << 16));
    // 0x4a5e00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a5e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a5e04: 0x2562d680  addiu       $v0, $t3, -0x2980
    ctx->pc = 0x4a5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956672));
    // 0x4a5e08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a5e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a5e0c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a5e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5e10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a5e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a5e14: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x4a5e14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4a5e18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a5e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a5e1c: 0x844321fc  lh          $v1, 0x21FC($v0)
    ctx->pc = 0x4a5e1cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72F87Cu));
    // 0x4a5e20: 0x84452214  lh          $a1, 0x2214($v0)
    ctx->pc = 0x4a5e20u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x72F894u));
    // 0x4a5e24: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4a5e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4a5e28: 0x944a2214  lhu         $t2, 0x2214($v0)
    ctx->pc = 0x4a5e28u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)FAST_READ16(0x72F894u));
    // 0x4a5e2c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4a5e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4a5e30: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4a5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a5e34: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a5e34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5e38: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A5E38u;
    {
        const bool branch_taken_0x4a5e38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5E38u;
        // 0x4a5e3c: 0x688024  and         $s0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5e38) {
            ctx->pc = 0x4A5E68u;
            goto label_4a5e68;
        }
    }
    ctx->pc = 0x4A5E40u;
    // 0x4a5e40: 0x24027f00  addiu       $v0, $zero, 0x7F00
    ctx->pc = 0x4a5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
    // 0x4a5e44: 0x14a20063  bne         $a1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x4A5E44u;
    {
        const bool branch_taken_0x4a5e44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5E44u;
        // 0x4a5e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5e44) {
            ctx->pc = 0x4A5FD4u;
            goto label_4a5fd4;
        }
    }
    ctx->pc = 0x4A5E4Cu;
    // 0x4a5e4c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x4a5e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x4a5e50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a5e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a5e54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a5e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4a5e58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a5e58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5e5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a5e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a5e60: 0x8123bc8  j           func_48EF20
    ctx->pc = 0x4A5E60u;
    ctx->pc = 0x4A5E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5E60u;
    // 0x4a5e64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF20u;
    sub_0048EF20_0x48ef20(rdram, ctx, runtime); return;
    ctx->pc = 0x4A5E68u;
label_4a5e68:
    // 0x4a5e68: 0x8a1023  subu        $v0, $a0, $t2
    ctx->pc = 0x4a5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4a5e6c: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x4a5e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4a5e70: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x4a5e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x4a5e74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a5e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5e78: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x4a5e78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x4a5e7c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4a5e7cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4a5e80: 0x38e20080  xori        $v0, $a3, 0x80
    ctx->pc = 0x4a5e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)128);
    // 0x4a5e84: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x4a5e84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4a5e88: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a5e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a5e8c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4a5e8cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4a5e90: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a5e90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5e94: 0x3606ffff  ori         $a2, $s0, 0xFFFF
    ctx->pc = 0x4a5e94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a5e98: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4a5e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4a5e9c: 0x481824  and         $v1, $v0, $t0
    ctx->pc = 0x4a5e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4a5ea0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a5ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a5ea4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a5ea4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a5ea8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4a5ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4a5eac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4a5eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4a5eb0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x4a5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a5eb4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a5eb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a5eb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a5eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a5ebc: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4a5ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x4a5ec0: 0xc48024  and         $s0, $a2, $a0
    ctx->pc = 0x4a5ec0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4a5ec4: 0x108c00  sll         $s1, $s0, 16
    ctx->pc = 0x4a5ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4a5ec8: 0x6200041  bltz        $s1, . + 4 + (0x41 << 2)
    ctx->pc = 0x4A5EC8u;
    {
        const bool branch_taken_0x4a5ec8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x4A5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5EC8u;
        // 0x4a5ecc: 0x20a1023  subu        $v0, $s0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ec8) {
            ctx->pc = 0x4A5FD0u;
            goto label_4a5fd0;
        }
    }
    ctx->pc = 0x4A5ED0u;
    // 0x4a5ed0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a5ed4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A5ED4u;
    {
        const bool branch_taken_0x4a5ed4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A5ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5ED4u;
        // 0x4a5ed8: 0x2402ff00  addiu       $v0, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ed4) {
            ctx->pc = 0x4A5EE8u;
            goto label_4a5ee8;
        }
    }
    ctx->pc = 0x4A5EDCu;
    // 0x4a5edc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5EDCu;
    {
        const bool branch_taken_0x4a5edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5EDCu;
        // 0x4a5ee0: 0x346300ff  ori         $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5edc) {
            ctx->pc = 0x4A5EECu;
            goto label_4a5eec;
        }
    }
    ctx->pc = 0x4A5EE4u;
    // 0x4a5ee4: 0x0  nop
    ctx->pc = 0x4a5ee4u;
    // NOP
label_4a5ee8:
    // 0x4a5ee8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a5ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a5eec:
    // 0x4a5eec: 0x671026  xor         $v0, $v1, $a3
    ctx->pc = 0x4a5eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
    // 0x4a5ef0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4a5ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4a5ef4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A5EF4u;
    {
        const bool branch_taken_0x4a5ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5EF4u;
        // 0x4a5ef8: 0x2563d680  addiu       $v1, $t3, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ef4) {
            ctx->pc = 0x4A5F14u;
            goto label_4a5f14;
        }
    }
    ctx->pc = 0x4A5EFCu;
    // 0x4a5efc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a5efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5f00: 0x84622214  lh          $v0, 0x2214($v1)
    ctx->pc = 0x4a5f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8724)));
    // 0x4a5f04: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4a5f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a5f08: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a5f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a5f0c: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4a5f0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a5f10: 0x108c00  sll         $s1, $s0, 16
    ctx->pc = 0x4a5f10u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_4a5f14:
    // 0x4a5f14: 0x2562d680  addiu       $v0, $t3, -0x2980
    ctx->pc = 0x4a5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956672));
    // 0x4a5f18: 0xa45021fc  sh          $s0, 0x21FC($v0)
    ctx->pc = 0x4a5f18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8700), (uint16_t)GPR_U32(ctx, 16));
    // 0x4a5f1c: 0xc12b116  jal         func_4AC458
    ctx->pc = 0x4A5F1Cu;
    SET_GPR_U32(ctx, 31, 0x4A5F24u);
    ctx->pc = 0x4A5F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5F1Cu;
    // 0x4a5f20: 0x8c5222ac  lw          $s2, 0x22AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8876)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC458u, 0x4A5F1Cu, 0x4A5F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5F24u;
label_4a5f24:
    // 0x4a5f24: 0x111e03  sra         $v1, $s1, 24
    ctx->pc = 0x4a5f24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 24));
    // 0x4a5f28: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a5f28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5f2c: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4a5f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a5f30: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4a5f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a5f34: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x4a5f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4a5f38: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x4a5f38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a5f3c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x4a5f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x4a5f40: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4a5f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a5f44: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4a5f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a5f48: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4a5f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a5f4c: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x4a5f4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4a5f50: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x4a5f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x4a5f54: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4a5f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a5f58: 0x3884007f  xori        $a0, $a0, 0x7F
    ctx->pc = 0x4a5f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)127);
    // 0x4a5f5c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4a5f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4a5f60: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x4a5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x4a5f64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a5f68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a5f6c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4a5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a5f70: 0x38040  sll         $s0, $v1, 1
    ctx->pc = 0x4a5f70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a5f74: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x4a5f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4a5f78:
    // 0x4a5f78: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4a5f78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a5f7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4a5f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4a5f80: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4a5f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a5f84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4a5f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4a5f88: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4a5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4a5f8c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4a5f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4a5f90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a5f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a5f94: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4a5f94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5f98: 0x14e6fff7  bne         $a3, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A5F98u;
    {
        const bool branch_taken_0x4a5f98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x4A5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5F98u;
        // 0x4a5f9c: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5f98) {
            ctx->pc = 0x4A5F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5f78;
        }
    }
    ctx->pc = 0x4A5FA0u;
    // 0x4a5fa0: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x4a5fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x4a5fa4: 0xc1296e2  jal         func_4A5B88
    ctx->pc = 0x4A5FA4u;
    SET_GPR_U32(ctx, 31, 0x4A5FACu);
    ctx->pc = 0x4A5FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5FA4u;
    // 0x4a5fa8: 0x24848df8  addiu       $a0, $a0, -0x7208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5B88u, 0x4A5FA4u, 0x4A5FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5FACu;
label_4a5fac:
    // 0x4a5fac: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x4a5facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x4a5fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a5fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5fb4: 0x24848e28  addiu       $a0, $a0, -0x71D8
    ctx->pc = 0x4a5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938152));
    // 0x4a5fb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a5fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a5fbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a5fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5fc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a5fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a5fc4: 0x81296e2  j           func_4A5B88
    ctx->pc = 0x4A5FC4u;
    ctx->pc = 0x4A5FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5FC4u;
    // 0x4a5fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5B88u;
    sub_004A5B88_0x4a5b88(rdram, ctx, runtime); return;
    ctx->pc = 0x4A5FCCu;
    // 0x4a5fcc: 0x0  nop
    ctx->pc = 0x4a5fccu;
    // NOP
label_4a5fd0:
    // 0x4a5fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a5fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a5fd4:
    // 0x4a5fd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a5fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a5fd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a5fd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5fdc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a5fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a5fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5FE0u;
        // 0x4a5fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5FE8u;
}

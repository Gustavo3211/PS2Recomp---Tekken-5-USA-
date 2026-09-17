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

// Function: sub_004F8A58
// Address: 0x4f8a58 - 0x4f8e10
void sub_004F8A58_0x4f8a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F8A58_0x4f8a58");
#endif

    switch (ctx->pc) {
        case 0x4f8ab8u: goto label_4f8ab8;
        case 0x4f8adcu: goto label_4f8adc;
        case 0x4f8af0u: goto label_4f8af0;
        case 0x4f8b18u: goto label_4f8b18;
        case 0x4f8b20u: goto label_4f8b20;
        case 0x4f8b9cu: goto label_4f8b9c;
        case 0x4f8bc8u: goto label_4f8bc8;
        case 0x4f8bd0u: goto label_4f8bd0;
        case 0x4f8c58u: goto label_4f8c58;
        case 0x4f8c84u: goto label_4f8c84;
        case 0x4f8c8cu: goto label_4f8c8c;
        case 0x4f8d08u: goto label_4f8d08;
        case 0x4f8d34u: goto label_4f8d34;
        case 0x4f8ddcu: goto label_4f8ddc;
        case 0x4f8df4u: goto label_4f8df4;
        default: break;
    }

    ctx->pc = 0x4f8a58u;

label_4f8a58:
    // 0x4f8a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f8a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f8a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f8a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f8a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f8a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8a64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4f8a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4f8a68: 0x2602015e  addiu       $v0, $s0, 0x15E
    ctx->pc = 0x4f8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4f8a6c: 0x26060118  addiu       $a2, $s0, 0x118
    ctx->pc = 0x4f8a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4f8a70: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f8a70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f8a74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f8a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f8a78: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4f8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f8a7c: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F8A7Cu;
    {
        const bool branch_taken_0x4f8a7c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4F8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8A7Cu;
        // 0x4f8a80: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8a7c) {
            ctx->pc = 0x4F8A98u;
            goto label_4f8a98;
        }
    }
    ctx->pc = 0x4F8A84u;
    // 0x4f8a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f8a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8a88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f8a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f8a8c: 0x813d9e4  j           func_4F6790
    ctx->pc = 0x4F8A8Cu;
    ctx->pc = 0x4F8A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8A8Cu;
    // 0x4f8a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6790u, 0x4F8A8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F8A94u;
    // 0x4f8a94: 0x0  nop
    ctx->pc = 0x4f8a94u;
    // NOP
label_4f8a98:
    // 0x4f8a98: 0x86030136  lh          $v1, 0x136($s0)
    ctx->pc = 0x4f8a98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
    // 0x4f8a9c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f8a9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f8aa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f8aa4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4f8aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f8aa8: 0x52400  sll         $a0, $a1, 16
    ctx->pc = 0x4f8aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f8aac: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x4f8aacu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f8ab0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F8AB0u;
    SET_GPR_U32(ctx, 31, 0x4F8AB8u);
    ctx->pc = 0x4F8AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8AB0u;
    // 0x4f8ab4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F8AB0u, 0x4F8AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8AB8u;
label_4f8ab8:
    // 0x4f8ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f8ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8abc: 0x960501b6  lhu         $a1, 0x1B6($s0)
    ctx->pc = 0x4f8abcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 438)));
    // 0x4f8ac0: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x4f8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f8ac4: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x4f8ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f8ac8: 0x30a50006  andi        $a1, $a1, 0x6
    ctx->pc = 0x4f8ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)6);
    // 0x4f8acc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F8ACCu;
    {
        const bool branch_taken_0x4f8acc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8ACCu;
        // 0x4f8ad0: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8acc) {
            ctx->pc = 0x4F8AE0u;
            goto label_4f8ae0;
        }
    }
    ctx->pc = 0x4F8AD4u;
    // 0x4f8ad4: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4F8AD4u;
    SET_GPR_U32(ctx, 31, 0x4F8ADCu);
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4F8AD4u, 0x4F8ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8ADCu;
label_4f8adc:
    // 0x4f8adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f8adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f8ae0:
    // 0x4f8ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f8ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8ae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f8ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f8ae8: 0x812b9d0  j           func_4AE740
    ctx->pc = 0x4F8AE8u;
    ctx->pc = 0x4F8AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8AE8u;
    // 0x4f8aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    sub_004AE740_0x4ae740(rdram, ctx, runtime); return;
    ctx->pc = 0x4F8AF0u;
label_4f8af0:
    // 0x4f8af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f8af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f8af4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4f8af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4f8af8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f8af8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f8afc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4f8afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4f8b00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f8b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8b04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4f8b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4f8b08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f8b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8b0c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4f8b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4f8b10: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F8B10u;
    SET_GPR_U32(ctx, 31, 0x4F8B18u);
    ctx->pc = 0x4F8B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8B10u;
    // 0x4f8b14: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F8B10u, 0x4F8B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8B18u;
label_4f8b18:
    // 0x4f8b18: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F8B18u;
    SET_GPR_U32(ctx, 31, 0x4F8B20u);
    ctx->pc = 0x4F8B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8B18u;
    // 0x4f8b1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F8B18u, 0x4F8B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8B20u;
label_4f8b20:
    // 0x4f8b20: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x4f8b20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4f8b24: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f8b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f8b28: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4f8b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f8b2c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4f8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f8b30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f8b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8b34: 0x97a60000  lhu         $a2, 0x0($sp)
    ctx->pc = 0x4f8b34u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8b38: 0xa6220022  sh          $v0, 0x22($s1)
    ctx->pc = 0x4f8b38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f8b3c: 0x30c201ff  andi        $v0, $a2, 0x1FF
    ctx->pc = 0x4f8b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x4f8b40: 0x30c58000  andi        $a1, $a2, 0x8000
    ctx->pc = 0x4f8b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x4f8b44: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8b48: 0xe5900b  movn        $s2, $a3, $a1
    ctx->pc = 0x4f8b48u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 7));
    // 0x4f8b4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8b50: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x4f8b50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f8b54: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f8b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f8b58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f8b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f8b5c: 0xa6260024  sh          $a2, 0x24($s1)
    ctx->pc = 0x4f8b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f8b60: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f8b60u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f8b64: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4f8b64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8b68: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x4f8b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x4f8b6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8b70: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8b74: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8b78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8b7c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f8b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f8b80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f8b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f8b84: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4f8b84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8b88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4f8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4f8b8c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8b90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8b94: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F8B94u;
    SET_GPR_U32(ctx, 31, 0x4F8B9Cu);
    ctx->pc = 0x4F8B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8B94u;
    // 0x4f8b98: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F8B94u, 0x4F8B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8B9Cu;
label_4f8b9c:
    // 0x4f8b9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4f8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8ba0: 0x26260124  addiu       $a2, $s1, 0x124
    ctx->pc = 0x4f8ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x4f8ba4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4f8ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f8ba8: 0x244500ff  addiu       $a1, $v0, 0xFF
    ctx->pc = 0x4f8ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x4f8bac: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4f8bacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f8bb0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x4f8bb0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x4f8bb4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4f8bb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4f8bb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f8bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f8bbc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f8bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f8bc0: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F8BC0u;
    SET_GPR_U32(ctx, 31, 0x4F8BC8u);
    ctx->pc = 0x4F8BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8BC0u;
    // 0x4f8bc4: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F8BC0u, 0x4F8BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8BC8u;
label_4f8bc8:
    // 0x4f8bc8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F8BC8u;
    SET_GPR_U32(ctx, 31, 0x4F8BD0u);
    ctx->pc = 0x4F8BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8BC8u;
    // 0x4f8bcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F8BC8u, 0x4F8BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8BD0u;
label_4f8bd0:
    // 0x4f8bd0: 0x3648ffff  ori         $t0, $s2, 0xFFFF
    ctx->pc = 0x4f8bd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8bd4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f8bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f8bd8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4f8bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f8bdc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f8bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f8be0: 0x2503824  and         $a3, $s2, $s0
    ctx->pc = 0x4f8be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f8be4: 0x97a60000  lhu         $a2, 0x0($sp)
    ctx->pc = 0x4f8be4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8be8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4f8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f8bec: 0xa6220026  sh          $v0, 0x26($s1)
    ctx->pc = 0x4f8becu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f8bf0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4f8bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8bf4: 0x30c201ff  andi        $v0, $a2, 0x1FF
    ctx->pc = 0x4f8bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x4f8bf8: 0x30c58000  andi        $a1, $a2, 0x8000
    ctx->pc = 0x4f8bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x4f8bfc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8c00: 0xe5900a  movz        $s2, $a3, $a1
    ctx->pc = 0x4f8c00u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 7));
    // 0x4f8c04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8c08: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x4f8c08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f8c0c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f8c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f8c10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f8c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f8c14: 0xa6260028  sh          $a2, 0x28($s1)
    ctx->pc = 0x4f8c14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f8c18: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f8c18u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f8c1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f8c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8c20: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4f8c20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8c24: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x4f8c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x4f8c28: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8c2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8c2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8c30: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8c34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8c38: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f8c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f8c3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f8c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f8c40: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4f8c40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8c44: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4f8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4f8c48: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8c4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8c50: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F8C50u;
    SET_GPR_U32(ctx, 31, 0x4F8C58u);
    ctx->pc = 0x4F8C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8C50u;
    // 0x4f8c54: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F8C50u, 0x4F8C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8C58u;
label_4f8c58:
    // 0x4f8c58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4f8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8c5c: 0x26260128  addiu       $a2, $s1, 0x128
    ctx->pc = 0x4f8c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x4f8c60: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4f8c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f8c64: 0x244500ff  addiu       $a1, $v0, 0xFF
    ctx->pc = 0x4f8c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x4f8c68: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4f8c68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f8c6c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x4f8c6cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x4f8c70: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4f8c70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4f8c74: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f8c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f8c78: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f8c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f8c7c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F8C7Cu;
    SET_GPR_U32(ctx, 31, 0x4F8C84u);
    ctx->pc = 0x4F8C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8C7Cu;
    // 0x4f8c80: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F8C7Cu, 0x4F8C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8C84u;
label_4f8c84:
    // 0x4f8c84: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F8C84u;
    SET_GPR_U32(ctx, 31, 0x4F8C8Cu);
    ctx->pc = 0x4F8C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8C84u;
    // 0x4f8c88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F8C84u, 0x4F8C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8C8Cu;
label_4f8c8c:
    // 0x4f8c8c: 0x3647ffff  ori         $a3, $s2, 0xFFFF
    ctx->pc = 0x4f8c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f8c90: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f8c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f8c94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f8c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f8c98: 0x2503024  and         $a2, $s2, $s0
    ctx->pc = 0x4f8c98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f8c9c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4f8c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8ca0: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x4f8ca0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8ca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f8ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8ca8: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x4f8ca8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8cac: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x4f8cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x4f8cb0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f8cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f8cb4: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x4f8cb4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f8cb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f8cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f8cbc: 0xc5900a  movz        $s2, $a2, $a1
    ctx->pc = 0x4f8cbcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 6));
    // 0x4f8cc0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f8cc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f8cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f8cc8: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x4f8cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f8ccc: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x4f8cccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8cd0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f8cd0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f8cd4: 0x721826  xor         $v1, $v1, $s2
    ctx->pc = 0x4f8cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 18));
    // 0x4f8cd8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f8cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f8cdc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f8cdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f8ce0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f8ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f8ce4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f8ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f8ce8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f8ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f8cec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f8cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f8cf0: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4f8cf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8cf4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4f8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f8cf8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f8cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f8cfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f8cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f8d00: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F8D00u;
    SET_GPR_U32(ctx, 31, 0x4F8D08u);
    ctx->pc = 0x4F8D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8D00u;
    // 0x4f8d04: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F8D00u, 0x4F8D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8D08u;
label_4f8d08:
    // 0x4f8d08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4f8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8d0c: 0x2626012c  addiu       $a2, $s1, 0x12C
    ctx->pc = 0x4f8d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x4f8d10: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4f8d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f8d14: 0x244500ff  addiu       $a1, $v0, 0xFF
    ctx->pc = 0x4f8d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x4f8d18: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4f8d18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f8d1c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x4f8d1cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x4f8d20: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4f8d20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4f8d24: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f8d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f8d28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f8d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f8d2c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F8D2Cu;
    SET_GPR_U32(ctx, 31, 0x4F8D34u);
    ctx->pc = 0x4F8D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8D2Cu;
    // 0x4f8d30: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F8D2Cu, 0x4F8D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8D34u;
label_4f8d34:
    // 0x4f8d34: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x4f8d34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4f8d38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4f8d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8d3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4f8d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f8d40: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x4f8d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x4f8d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f8d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8d48: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4f8d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4f8d4c: 0xa625015e  sh          $a1, 0x15E($s1)
    ctx->pc = 0x4f8d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f8d50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f8d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f8d54: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f8d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f8d58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f8d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f8d5c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x4f8d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8d60: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x4f8d60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8d64: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8d68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8d6c: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x4f8d6cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4f8d70: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f8d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f8d74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f8d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f8d78: 0x5300a  movz        $a2, $zero, $a1
    ctx->pc = 0x4f8d78u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x4f8d7c: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4f8d7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8d80: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x4f8d80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4f8d84: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f8d84u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f8d88: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x4f8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x4f8d8c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8d90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8d94: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f8d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f8d98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f8d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f8d9c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4f8d9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8da0: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x4f8da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x4f8da4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f8da8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f8da8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f8dac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8db0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8db4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f8db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f8db8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f8db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f8dbc: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4f8dbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8dc0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4f8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4f8dc4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f8dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f8dc8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f8dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f8dcc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4f8dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4f8dd0: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4f8dd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f8dd4: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4F8DD4u;
    SET_GPR_U32(ctx, 31, 0x4F8DDCu);
    ctx->pc = 0x4F8DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8DD4u;
    // 0x4f8dd8: 0xa6220136  sh          $v0, 0x136($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 310), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4F8DD4u, 0x4F8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F8DDCu;
label_4f8ddc:
    // 0x4f8ddc: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4f8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4f8de0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f8de0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f8de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f8de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f8de8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f8de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f8dec: 0xc13e296  jal         func_4F8A58
    ctx->pc = 0x4F8DECu;
    SET_GPR_U32(ctx, 31, 0x4F8DF4u);
    ctx->pc = 0x4F8DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F8DECu;
    // 0x4f8df0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8A58u;
    goto label_4f8a58;
    ctx->pc = 0x4F8DF4u;
label_4f8df4:
    // 0x4f8df4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4f8df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f8df8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4f8df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f8dfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4f8dfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f8e00: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4f8e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f8e04: 0x3e00008  jr          $ra
    ctx->pc = 0x4F8E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F8E04u;
        // 0x4f8e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F8E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F8E0Cu;
    // 0x4f8e0c: 0x0  nop
    ctx->pc = 0x4f8e0cu;
    // NOP
    ctx->pc = 0x4f8e10u;
}
